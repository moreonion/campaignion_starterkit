<?php

namespace Drupal\campaignion_donation;

class Action extends \Drupal\campaignion\Action {
  public function save() {
    parent::save();

    $this->ensureWebformValidations();
  }

  protected function ensureWebformValidations() {
    $rules = \webform_validation_get_node_rules($this->node->nid);
    $webform = \Drupal\little_helpers\Webform\Webform::fromNode($this->node);

    $component = &$webform->componentByKey('donation_amount');
    if ($component  && !$this->hasRule($rules, 'donation_amount')) {
      $rule = array(
        'rulename' => 'donation_amount',
        'validator' => 'numeric',
        'data' => '1',
        'error_message' => NULL,
        'negate' => 0,
        'weight' => 0,
      );
      webform_validation_rule_save($rule + array(
        'action' => 'add',
        'nid' => $this->node->nid,
        'rule_components' => array($component['cid'] => &$component),
      ));
    }
  }

  private function hasRule(&$rules, $name) {
    foreach ($rules as $rule) {
      if ($rule['rulename'] == $name) {
        return TRUE;
      }
    }
    return FALSE;
  }
}
