<?php

namespace Drupal\campaignion_flexible_form;

use \Drupal\campaignion_wizard\WebformWizard;

class ActionType extends \Drupal\campaignion_action\TypeBase {
  public function defaultTemplateNid() {
    $ids = \entity_get_id_by_uuid('node', array('93a8faff-aad2-401a-9817-f6f3b578b9bd'));
    return array_shift($ids);
  }

  public function wizard($node = NULL) {
    return new WebformWizard($this->parameters, $node, $this->type);
  }
}
