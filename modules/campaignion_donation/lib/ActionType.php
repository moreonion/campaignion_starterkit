<?php

namespace Drupal\campaignion_donation;

use \Drupal\campaignion\Wizard\DonationWizard;

class ActionType extends \Drupal\campaignion\Action\TypeBase {
  public function defaultTemplateNid() {
    $ids = \entity_get_id_by_uuid('node', array('6eb388a0-88e5-4272-bb6e-0bd8e8da595e'));
    return array_shift($ids);
  }

  public function wizard($node = NULL) {
    return new DonationWizard($this->parameters, $node, $this->type);
  }

  public function actionFromNode($node) {
    return new \Drupal\campaignion\Action($this, $node);
  }
}
