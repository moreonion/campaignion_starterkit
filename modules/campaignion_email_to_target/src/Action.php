<?php

namespace Drupal\campaignion_email_to_target;

class Action extends \Drupal\campaignion_action\ActionBase {
  public function getMessage() {
    $field = $this->type->parameters['email_to_target']['message_field'];
    $items = field_get_items('node', $this->node, $field);
    return Message::fromFieldItem($items[0]);
  }

  public function getOptions() {
    $field = $this->type->parameters['email_to_target']['options_field'];
    $items = field_get_items('node', $this->node, $field);
    return $items ? $items[0] : [];
  }

  public function testLink($title, $query = [], $options = []) {
    return $this->_testLink($title, $query, $options);
  }

}
