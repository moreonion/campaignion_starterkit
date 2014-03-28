<?php

namespace Drupal\campaignion_flexible_form;

use \Drupal\campaignion\Wizard\WebformWizard;

class ActionType extends \Drupal\campaignion\Action\TypeBase {
  public function defaultTemplateNid() {
    $ids = entity_get_id_by_uuid('node', array('webform-template-minimal-en'));
    return array_shift($ids);
  }

  public function wizard($node = NULL) {
    return new WebformWizard($this->parameters, $node, $this->type);
  }
}
