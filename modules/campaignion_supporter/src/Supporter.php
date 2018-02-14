<?php

namespace Drupal\campaignion_supporter;

use Drupal\campaignion\ContactTypeInterface;
use Drupal\campaignion\CRM\Import\Field\Address;
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
use Drupal\campaignion\CRM\Export\DateField;
use Drupal\campaignion\CRM\Export\KeyedField;
use Drupal\campaignion\CRM\Export\TagField;
use Drupal\campaignion\CRM\Export\TagsField;
use Drupal\campaignion\CRM\ExporterBase;

/**
 * Contact type plugin for supporters.
 */
class Supporter implements ContactTypeInterface {

  /**
   * {@inheritdoc}
   */
  public function __construct() {
  }

  /**
   * {@inheritdoc}
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
        new Field('field_direct_mail_newsletter', 'direct_mail_newsletter'),
        new Field('field_preferred_language', 'language'),
      ));
    }
    return new ImporterBase($mappings);
  }

  /**
   * {@inheritdoc}
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
        $map['tags'] = new TagsField('supporter_tags', TRUE);
        $map['mp_const'] = new WrapperField('mp_constituency');
        $map['mp_party'] = new TagField('mp_party');
        $map['mp_name'] = new WrapperField('mp_party');
        $map['dev_country'] = new TagField('mp_country');
        break;

      case 'mailchimp':
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
        $map['TAGS'] = new TagsField('supporter_tags', TRUE);
        $map['MP_CONST'] = new WrapperField('mp_constituency');
        $map['MP_PARTY'] = new TagField('mp_party');
        $map['MP_NAME'] = new WrapperField('mp_salutation');
        $map['DEV_COUNTRY'] = new TagField('mp_country');
        break;

      case 'campaignion_manage':
        $address_mapping = array(
          'street'  => 'thoroughfare',
          'street_2' => 'premise',
          'country' => 'country',
          'zip'     => 'postal_code',
          'city'    => 'locality',
          'region'  => 'administrative_area',
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
        $map['field_direct_mail_newsletter'] = new WrapperField('field_direct_mail_newsletter');
        $map['field_social_network_links']   = new WrapperField('field_social_network_links');
        $map['source_tag']                   = new TagField('source_tag');
        $map['supporter_tags']               = new TagsField('supporter_tags');
        $map['field_preferred_language']     = new WrapperField('field_preferred_language');
        $map['mp_constituency']              = new WrapperField('mp_constituency');
        $map['mp_party']                     = new TagField('mp_party');
        $map['mp_salutation']                = new WrapperField('mp_salutation');
        $map['mp_country']                   = new TagField('mp_country');
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
        $map['tags'] = new TagsField('supporter_tags', TRUE);
        $map['mp_const'] = new WrapperField('mp_constituency');
        $map['mp_party'] = new TagField('mp_party');
        $map['mp_name'] = new WrapperField('mp_salutation');
        $map['dev_country'] = new TagField('mp_country');
        break;
    }
    if ($map) {
      return new ExporterBase($map);
    }
  }

}
