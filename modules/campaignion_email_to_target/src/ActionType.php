<?php

namespace Drupal\campaignion_email_to_target;

use \Drupal\campaignion_wizard\PetitionWizard;

class ActionType extends \Drupal\campaignion_action\TypeBase {
  public function defaultTemplateNid() {
    $ids = \entity_get_id_by_uuid('node', array('2825470e-e582-414d-b01c-e6e71a028075'));
    return array_shift($ids);
  }

  public function wizard($node = NULL) {
    return new PetitionWizard($this->parameters, $node, $this->type);
  }
}
