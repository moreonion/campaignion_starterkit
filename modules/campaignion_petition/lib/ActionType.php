<?php

namespace Drupal\campaignion_petition;

use \Drupal\campaignion\Wizard\PetitionWizard;

class ActionType extends \Drupal\campaignion\Action\TypeBase {
  public function defaultTemplateNid() {
    $nid = defaultcontent_get_default('petition_mini_supporter');
    return $nid;
  }

  public function wizard($node = NULL) {
    return new PetitionWizard($this->parameters, $node, $this->type);
  }
}
