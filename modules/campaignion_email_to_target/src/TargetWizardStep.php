<?php

namespace Drupal\campaignion_email_to_target;

class TargetWizardStep extends \Drupal\campaignion_wizard\WizardStep {
  protected $step  = 'target';
  protected $title = 'Target';

  public function stepForm($form, &$form_state) {
    $form = parent::stepForm($form, $form_state);

    $form['subject'] = [
      '#type' => 'textfieldi',
      '#title' => t('Subject'),
    ];

    $form['token_help'] = [
      '#theme' => 'token_tree',
      '#token_types' => ['webform-tokens'],
    ];
    dpm($form);

    return $form;
  }
}
