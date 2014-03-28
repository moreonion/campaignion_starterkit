<?php

namespace Drupal\campaignion_donation;

use \Drupal\campaignion\Wizard\DonationWizard;

class ActionType extends \Drupal\campaignion\Action\TypeBase {
  public function defaultTemplateNid() {
    $ids = entity_get_id_by_uuid('node', array('donation-template-default-en'));
    return array_shift($ids);
  }

  public function wizard($node = NULL) {
    return new DonationWizard($this->parameters, $node, $this->type);
  }
}
