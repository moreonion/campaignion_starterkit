<?php

namespace Drupal\campaignion_email_protest;

use \Drupal\campaignion\Wizard\EmailProtestWizard;

class ActionType extends \Drupal\campaignion\Action\TypeBase {
  public function defaultTemplateNid() {
    $query = new \EntityFieldQuery();

    $result = $query->entityCondition('entity_type', 'node')
    ->entityCondition('bundle', 'webform_template_type')
    ->propertyCondition('title', 'Email protest form')
    ->execute();

    $nids = isset($result['node']) ? array_keys($result['node']) : array(NULL);
    return $nids[0];
  }

  public function wizard($node = NULL) {
    return new EmailProtestWizard($this->parameters, $node, $this->type);
  }
}
