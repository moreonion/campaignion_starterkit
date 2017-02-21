<?php

namespace Drupal\campaignion_email_to_target\Api;

/**
 * Datatype for representing an attribute as specified by the e2t-service.
 */
class Attribute {
  public $key;
  public $title;
  public $description;

  public function __construct($key, $title = '', $description = '') {
    $this->key = $key;
    $this->title = $title;
    $this->description = $description;
  }

  /**
   * Create Attribute instance from an array (JSON-object).
   *
   * @param array $data
   *   Associative array as given by the e2t service.
   */
  public static function fromArray(array $data) {
    return new static($data['key'], $data['title'], $data['description']);
  }

}
