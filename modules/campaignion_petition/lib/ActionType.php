<?php

namespace Drupal\campaignion_petition;

use \Drupal\campaignion\Wizard\PetitionWizard;

class ActionType extends \Drupal\campaignion\Action\TypeBase {
  public function defaultTemplateNid() {
    $ids = \entity_get_id_by_uuid('node', array('2825470e-e582-414d-b01c-e6e71a028075'));
    return array_shift($ids);
  }

  public function wizard($node = NULL) {
    return new PetitionWizard($this->parameters, $node, $this->type);
  }
}
