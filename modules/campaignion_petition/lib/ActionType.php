<?php

namespace Drupal\campaignion_petition;

use \Drupal\campaignion\Wizard\PetitionWizard;

class ActionType extends \Drupal\campaignion\Action\TypeBase {
  public function defaultTemplateNid() {
    $ids = entity_get_id_by_uuid('node', array('2fce5d38-fcbc-48eb-b4a4-5dba5fbea1e2'));
    return array_shift($ids);
  }

  public function wizard($node = NULL) {
    return new PetitionWizard($this->parameters, $node, $this->type);
  }
}
