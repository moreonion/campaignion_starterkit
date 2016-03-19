<?php

namespace Drupal\campaignion_email_to_target\Api;

class Attribute {
  public $key;
  public $title;
  public $description;

  public function __construct($key, $title='', $description='') {
    $this->key = $key;
    $this->title = $title;
    $this->description = $description;
  }

  public static function fromArray($data) {
    return new static($data['key'], $data['title'], $data['description']);
  }

}
