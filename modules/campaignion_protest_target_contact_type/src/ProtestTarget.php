<?php

namespace Drupal\campaignion_protest_target_contact_type;

use \Drupal\campaignion\ContactTypeInterface;
use \Drupal\campaignion\CRM\Import\Field;
use \Drupal\campaignion\CRM\ImporterBase;

class ProtestTarget implements ContactTypeInterface {
  public function __construct() {}
  public function importer($source) {
    $mappings = array(
      new Field\Field('field_gender',     'gender'),
      new Field\Field('field_salutation', 'salutation'),
      new Field\Field('field_title',      'title'),
      new Field\Field('first_name'),
      new Field\Field('last_name'),
      new Field\Date('field_date_of_birth',    'date_of_birth'),
      new Field\Address('field_address', array(
        'thoroughfare'        => 'street_address',
        'postal_code'         => 'zip_code',
        'locality'            => 'city',
        'administrative_area' => 'state',
        'country'             => 'country',
      )),
      new Field\Phone('field_phone_number', 'phone_number'),
      new Field\Phone('field_phone_number', 'mobile_number'),
      new Field\EmailBulk('redhen_contact_email', 'email', 'email_newsletter'),
      new Field\Field('field_direct_mail_newsletter', 'direct_mail_newsletter'),
    );
    return new ImporterBase($mappings, 'email_protest_target');
  }

  public function exporter($target, $language) {
  }
}
