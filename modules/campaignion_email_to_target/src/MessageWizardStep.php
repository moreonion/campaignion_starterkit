<?php

namespace Drupal\campaignion_email_to_target;

use \Drupal\campaignion\Forms\EntityFieldForm;

class MessageWizardStep extends \Drupal\campaignion_wizard\WizardStep {
  protected $step  = 'message';
  protected $title = 'Message';

  public function stepForm($form, &$form_state) {
    $form = parent::stepForm($form, $form_state);

    $form['options'] = [
      '#type' => 'checkboxes',
      '#options' => ['user_may_edit' => t('Users may edit the message.')],
    ];

    $this->fieldForm = new EntityFieldForm('node', $this->wizard->node, ['field_email_to_target_message']);
    $form += $this->fieldForm->formArray($form_state);
    return $form;
  }

  public function validateStep($form, &$form_state) {
    $this->fieldForm->validate($form, $form_state);
  }

  public function submitStep($form, &$form_state) {
    $this->fieldForm->submit($form, $form_state);
  }

  public function checkDependencies() {
    return isset($this->wizard->node->nid);
  }
}
