<?php

namespace Drupal\campaignion_email_to_target;

use \Drupal\campaignion_wizard\NodeWizard;

/**
 * A wizard for email_to_target forms.
 *
 * NOTE: Needs form_builder_webform and webform_confirm_email to work.
 */
class Wizard extends NodeWizard {
  public $steps = array(
    'content' => 'ContentStep',
    'target'  => '\\Drupal\\campaignion_email_to_target\\TargetWizardStep',
    'message'  => '\\Drupal\\campaignion_email_to_target\\MessageWizardStep',
    'form'    => 'WebformStep',
    'emails'  => 'EmailProtestEmailStep',
    'thank'   => 'ThankyouStep',
    'confirm' => 'ConfirmStep',
  );
}
