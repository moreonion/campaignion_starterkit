<?php

namespace Drupal\campaignion_protest_target_contact_type;

use \Drupal\campaignion\ContactTypeInterface;
use \Drupal\campaignion\CRM\Import\Field;
use \Drupal\campaignion\CRM\ImporterBase;

class ProtestTarget implements ContactTypeInterface {
  public function __construct() {}
  public function importer($source) {
    $mappings = array(
      new Field\Field('first_name'),
      new Field\Field('last_name'),
    );
    return new ImporterBase($mappings, 'email_protest_target');
  }

  public function exporter($target, $language) {
  }
}
