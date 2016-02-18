<?php

namespace Drupal\campaignion_email_to_target;

class ActionType extends \Drupal\campaignion_action\TypeBase {
  public function defaultTemplateNid() {
    $ids = \entity_get_id_by_uuid('node', array('f5645542-33eb-445e-8e6b-8300cf385069'));
    return array_shift($ids);
  }

  public function wizard($node = NULL) {
    return new Wizard($this->parameters, $node, $this->type);
  }
}
