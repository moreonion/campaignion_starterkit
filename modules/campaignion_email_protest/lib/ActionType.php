<?php

namespace Drupal\campaignion_email_protest;

use \Drupal\campaignion\Wizard\EmailProtestWizard;

class ActionType extends \Drupal\campaignion\Action\TypeBase {
  public function defaultTemplateNid() {
    $nid = defaultcontent_get_default('email_protest_default');
    return $nid;
  }

  public function wizard($node = NULL) {
    return new EmailProtestWizard($this->parameters, $node, $this->type);
  }
}
