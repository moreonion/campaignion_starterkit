<?php

namespace Drupal\campaignion_email_to_target;

class Action extends \Drupal\campaignion_action\ActionBase {
  public function getMessage() {
    $field = $this->type->parameters['email_to_target']['message_field'];
    $items = field_get_items('node', $this->node, $field);
    return Message::fromFieldItem($items[0]);
  }
}
