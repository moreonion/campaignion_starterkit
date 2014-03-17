<?php

namespace Drupal\campaignion_flexible_form;

use \Drupal\campaignion\Wizard\WebformWizard;

class ActionType extends \Drupal\campaignion\Action\TypeBase {
  public function wizard($node = NULL) {
    return new WebformWizard($this->parameters, $node, $this->type);
  }
}
