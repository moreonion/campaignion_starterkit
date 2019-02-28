<?php

namespace Drupal\campaignion_supporter;

use Drupal\campaignion\ContactTypeInterface;
use Drupal\campaignion\CRM\Import\Field\Address;
use Drupal\campaignion\CRM\Import\Field\BooleanOptIn;
use Drupal\campaignion\CRM\Import\Field\Date;
use Drupal\campaignion\CRM\Import\Field\EmailBulk;
use Drupal\campaignion\CRM\Import\Field\Field;
use Drupal\campaignion\CRM\Import\Field\Name;
use Drupal\campaignion\CRM\Import\Field\Phone;
use Drupal\campaignion\CRM\ImporterBase;

use Drupal\campaignion\CRM\Export\SingleValueField;
use Drupal\campaignion\CRM\Export\WrapperField;
use Drupal\campaignion\CRM\Export\MappedWrapperField;
use Drupal\campaignion\CRM\Export\AddressField;
use Drupal\campaignion\CRM\Export\BooleanField;
use Drupal\campaignion\CRM\Export\DateField;
use Drupal\campaignion\CRM\Export\KeyedField;
use Drupal\campaignion\CRM\Export\TagField;
use Drupal\campaignion\CRM\Export\TagsField;
use Drupal\campaignion\CRM\Export\Label;
use Drupal\campaignion\CRM\Export\LabelFactory;
use Drupal\campaignion\CRM\Export\SubField;
use Drupal\campaignion\CRM\CsvExporter;
use Drupal\campaignion\CRM\ExporterBase;

/**
 * Contact-type for the "contact" contact-type.
 */
class Supporter implements ContactTypeInterface {

  /**
   * Get a new contact-type instance.
   */
  public function __construct() {
  }

  /**
   * Create an importer for this contact-type.
   *
   * @param string $type
   *   The type of the importer. Usually importers are named by their source.
   */
  public function importer($type) {
    $mappings = array(
      new Name('first_name'),
      new Name('last_name'),
    );
    if ($type == 'campaignion_action_taken') {
      $mappings = array_merge($mappings, array(
        new Field('field_gender', 'gender'),
        new Field('field_salutation', 'salutation'),
        new Field('field_title', 'title'),
        new Date('field_date_of_birth', 'date_of_birth'),
        new Address('field_address', array(
          'thoroughfare'        => 'street_address',
          'premise'             => 'street_address_2',
          'postal_code'         => ['zip_code', 'postcode'],
          'locality'            => 'city',
          'administrative_area' => 'state',
          'country'             => 'country',
        )),
        new Phone('field_phone_number', 'phone_number'),
        new Phone('field_phone_number', 'mobile_number'),
        new EmailBulk('redhen_contact_email', 'email', 'email_newsletter'),
        new BooleanOptIn('field_opt_in_phone', 'phone_opt_in'),
        new BooleanOptIn('field_opt_in_post', 'post_opt_in'),
        new Field('field_preferred_language', 'language'),
      ));
    }
    return new ImporterBase($mappings);
  }

  /**
   * Create an exporter for this contact-type.
   *
   * @param string $type
   *   The type of the exporter. Usually exporters are named by their target.
   * @param string $language
   *   Language used for translated values.
   */
  public function exporter($type, $language) {
    $map = array();
    $salutation_map = [
      'fam' => t('Family'),
      'mrs' => t('Mrs'),
      'mr' => t('Mr'),
      'org' => t('Organisation'),
    ];
    switch ($type) {
      case 'cleverreach':
        $map['email'] = new WrapperField('email');
        $map['salutation'] = new MappedWrapperField('field_salutation', $salutation_map, FALSE);
        $map['firstname'] = new SingleValueField('first_name');
        $map['lastname'] = new SingleValueField('last_name');
        $map['title'] = new WrapperField('field_title');
        $map['gender'] = new WrapperField('field_gender');
        $map['date_of_birth'] = new DateField('field_date_of_birth', '%Y-%m-%d');
        $map['street'] = new KeyedField('field_address', 'thoroughfare');
        $map['street2'] = new KeyedField('field_address', 'premise');
        $map['country'] = new KeyedField('field_address', 'country');
        $map['zip'] = new KeyedField('field_address', 'postal_code');
        $map['city'] = new KeyedField('field_address', 'locality');
        $map['region'] = new KeyedField('field_address', 'administrative_area');
        $map['language'] = new WrapperField('field_preferred_language');
        $map['created'] = new DateField('created', '%Y-%m-%d');
        $map['updated'] = new DateField('updated', '%Y-%m-%d');
        $map['source'] = new TagField('source_tag');
        $map['campaign'] = new TagField('campaign_tag');
        $map['tags'] = new TagsField('supporter_tags', TRUE);
        $map['phoneopt'] = new BooleanField('field_opt_in_phone');
        $map['postopt'] = new BooleanField('field_opt_in_post');
        break;

      case 'mailchimp':
        // MailChimp merge tags have a maximum of 10 characters.
        $map['EMAIL'] = new WrapperField('email');
        $map['FNAME'] = new SingleValueField('first_name');
        $map['LNAME'] = new SingleValueField('last_name');
        $map['SALUTATION'] = new MappedWrapperField('field_salutation', $salutation_map, FALSE);
        $map['TITLE'] = new WrapperField('field_title');
        $map['GENDER'] = new WrapperField('field_gender');
        $map['DOB'] = new DateField('field_date_of_birth', '%Y-%m-%d');
        $map['STREET'] = new KeyedField('field_address', 'thoroughfare');
        $map['STREET2'] = new KeyedField('field_address', 'premise');
        $map['COUNTRY'] = new KeyedField('field_address', 'country');
        $map['ZIP'] = new KeyedField('field_address', 'postal_code');
        $map['CITY'] = new KeyedField('field_address', 'locality');
        $map['REGION'] = new KeyedField('field_address', 'administrative_area');
        $map['LANGUAGE'] = new WrapperField('field_preferred_language');
        $map['CREATED'] = new DateField('created', '%Y-%m-%d');
        $map['UPDATED'] = new DateField('updated', '%Y-%m-%d');
        $map['SOURCE'] = new TagField('source_tag');
        $map['CAMPAIGN'] = new TagField('campaign_tag');
        $map['TAGS'] = new TagsField('supporter_tags', TRUE);
        $map['PHONEOPT'] = new BooleanField('field_opt_in_phone');
        $map['POSTOPT'] = new BooleanField('field_opt_in_post');
        break;

      case 'dadiapi':
        $map['email'] = new WrapperField('email');
        $map['vorname'] = new SingleValueField('first_name');
        $map['name'] = new SingleValueField('last_name');
        $map['titel'] = new WrapperField('field_title');
        $genderMap = array('m' => 'M', 'f' => 'W');
        $map['geschlecht'] = new MappedWrapperField('field_gender', $genderMap);
        $map['geburtsdatum'] = new DateField('field_date_of_birth', '%Y%m%d');
        $map['strasse'] = new KeyedField('field_address', 'thoroughfare');
        $map['land'] = new KeyedField('field_address', 'country');
        $map['plz'] = new KeyedField('field_address', 'postal_code');
        $map['ort'] = new KeyedField('field_address', 'locality');
        break;

      case 'campaignion_manage':
        $address_mapping = array(
          'address' => 'thoroughfare',
          'address2' => 'premise',
          'country' => 'country',
          'zip' => 'postal_code',
          'city' => 'locality',
          'region' => 'administrative_area',
        );

        $map['redhen_contact_email']         = new WrapperField('email');
        $map['field_salutation']             = new MappedWrapperField('field_salutation', $salutation_map, FALSE);
        $map['first_name']                   = new SingleValueField('first_name');
        $map['middle_name']                  = new SingleValueField('middle_name');
        $map['last_name']                    = new SingleValueField('last_name');
        $map['field_title']                  = new WrapperField('field_title');
        $map['field_gender']                 = new WrapperField('field_gender');
        $map['field_date_of_birth']          = new DateField('field_date_of_birth', '%Y-%m-%d');
        $map['field_address']                = new AddressField('field_address', $address_mapping);
        $map['created']                      = new DateField('created', '%Y-%m-%d');
        $map['updated']                      = new DateField('updated', '%Y-%m-%d');
        $map['field_ip_adress']              = new WrapperField('field_ip_adress');
        $map['field_phone_number']           = new WrapperField('field_phone_number');
        $map['field_social_network_links']   = new WrapperField('field_social_network_links');
        $map['source_tag']                   = new TagField('source_tag');
        $map['campaign_tag']                 = new TagField('campaign_tag');
        $map['supporter_tags']               = new TagsField('supporter_tags');
        $map['field_preferred_language']     = new WrapperField('field_preferred_language');
        $map['field_opt_in_phone']           = new BooleanField('field_opt_in_phone');
        $map['field_opt_in_post']            = new BooleanField('field_opt_in_post');
        break;

      case 'csv':
        $labels = new LabelFactory('redhen_contact', 'contact');
        $address = $labels->fromExporter(new WrapperField('field_address'));
        $map['contact_id']                   = new Label(t('Contact ID'), new SingleValueField('contact_id'));
        $map['redhen_contact_email']         = new Label(t('Email'), new WrapperField('email'));
        $map['field_salutation']             = $labels->fromExporter(new MappedWrapperField('field_salutation', $salutation_map, FALSE));
        $map['first_name']                   = new Label(t('Forename'), new SingleValueField('first_name'));
        $map['middle_name']                  = new Label(t('Middle name'), new SingleValueField('middle_name'));
        $map['last_name']                    = new Label(t('Surname'), new SingleValueField('last_name'));
        $map['field_title']                  = $labels->fromExporter(new WrapperField('field_title'));
        $map['field_gender']                 = $labels->fromExporter(new WrapperField('field_gender'));
        $map['field_date_of_birth']          = $labels->fromExporter(new DateField('field_date_of_birth', '%Y-%m-%d'));
        $map['field_address.thoroughfare']   = new SubField($address, 'thoroughfare', t('Address line 1'));
        $map['field_address.premise']        = new SubField($address, 'premise', t('Address line 2'));
        $map['field_address.country']        = new SubField($address, 'country', t('Country'));
        $map['field_address.postal_code']    = new SubField($address, 'postal_code', t('Postcode'));
        $map['field_address.locality']       = new SubField($address, 'locality', t('Locality'));
        $map['field_address.area']           = new SubField($address, 'administrative_area', t('Administrative area'));
        $map['created']                      = new Label(t('Created'), new DateField('created', '%Y-%m-%d'));
        $map['updated']                      = new Label(t('Updated'), new DateField('updated', '%Y-%m-%d'));
        $map['field_ip_adress']              = $labels->fromExporter(new WrapperField('field_ip_adress'));
        $map['field_phone_number']           = $labels->fromExporter(new WrapperField('field_phone_number'));
        $map['field_social_network_links']   = $labels->fromExporter(new WrapperField('field_social_network_links'));
        $map['source_tag']                   = $labels->fromExporter(new TagField('source_tag'));
        $map['campaign_tag']                 = $labels->fromExporter(new TagField('campaign_tag'));
        $map['supporter_tags']               = $labels->fromExporter(new TagsField('supporter_tags'));
        $map['field_preferred_language']     = $labels->fromExporter(new WrapperField('field_preferred_language'));
        $map['field_opt_in_phone']           = $labels->fromExporter(new BooleanField('field_opt_in_phone'));
        $map['field_opt_in_post']            = $labels->fromExporter(new BooleanField('field_opt_in_post'));
        return new CsvExporter($map);

      case 'optivo':
        $map['email'] = new WrapperField('email');
        $map['anrede'] = new MappedWrapperField('field_salutation', $salutation_map, FALSE);
        $map['vorname'] = new SingleValueField('first_name');
        $map['nachname'] = new SingleValueField('last_name');
        $map['titel'] = new WrapperField('field_title');
        $map['geburtsdatum'] = new DateField('field_date_of_birth', '%Y-%m-%d');
        $map['straße'] = new KeyedField('field_address', 'thoroughfare');
        $map['straße_und_hausnummer'] = new KeyedField('field_address', 'thoroughfare');
        $map['land'] = new KeyedField('field_address', 'country');
        $map['plz'] = new KeyedField('field_address', 'postal_code');
        $map['ort'] = new KeyedField('field_address', 'locality');
        $map['bundesland'] = new KeyedField('field_address', 'administrative_area');
        $map['sprache'] = new WrapperField('field_preferred_language');
        $map['created'] = new DateField('created', '%Y-%m-%d');
        $map['updated'] = new DateField('updated', '%Y-%m-%d');
        $map['source'] = new TagField('source_tag');
        $map['campaign'] = new TagField('campaign_tag');
        $map['tags'] = new TagsField('supporter_tags', TRUE);
        $map['phoneopt'] = new BooleanField('field_opt_in_phone');
        $map['postopt'] = new BooleanField('field_opt_in_post');
        break;

      case 'dotmailer':
        $map['salutation'] = new MappedWrapperField('field_salutation', $salutation_map, FALSE);
        $map['firstname'] = new SingleValueField('first_name');
        $map['lastname'] = new SingleValueField('last_name');
        $map['title'] = new WrapperField('field_title');
        $map['dob'] = new DateField('field_date_of_birth', '%Y-%m-%d');
        $map['gender'] = new WrapperField('field_gender');
        $map['address'] = new KeyedField('field_address', 'thoroughfare');
        $map['address2'] = new KeyedField('field_address', 'premise');
        $map['country'] = new KeyedField('field_address', 'country');
        $map['postcode'] = new KeyedField('field_address', 'postal_code');
        $map['town'] = new KeyedField('field_address', 'locality');
        $map['county'] = new KeyedField('field_address', 'administrative_area');
        $map['phone'] = new WrapperField('field_phone_number');
        $map['source'] = new TagField('source_tag');
        $map['campaign'] = new TagField('campaign_tag');
        $map['tags'] = new TagsField('supporter_tags', TRUE);
        $map['phoneopt'] = new BooleanField('field_opt_in_phone');
        $map['postopt'] = new BooleanField('field_opt_in_post');
        break;
    }
    if ($map) {
      return new ExporterBase($map);
    }
  }

}
