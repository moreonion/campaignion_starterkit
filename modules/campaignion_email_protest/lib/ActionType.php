<?php

namespace Drupal\campaignion_email_protest;

use \Drupal\campaignion_wizard\EmailProtestWizard;

class ActionType extends \Drupal\campaignion_action\TypeBase {
  public function defaultTemplateNid() {
    $ids = \entity_get_id_by_uuid('node', array('7f2e3be8-156e-4211-a35a-a654ff4ab99e'));
    return array_shift($ids);
  }

  public function wizard($node = NULL) {
    return new EmailProtestWizard($this->parameters, $node, $this->type);
  }
}
