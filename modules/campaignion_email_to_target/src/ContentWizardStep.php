<?php

namespace Drupal\campaignion_email_to_target;

use \Drupal\campaignion\Forms\EmbeddedNodeForm;
use \Drupal\campaignion_wizard\ContentStep;

class ContentWizardStep extends ContentStep {
  protected $step = 'content';
  protected $title = 'Content';
  protected $nodeForm;

  public function stepForm($form, &$form_state) {
    $form = parent::stepForm($form, $form_state);
    $field = $this->wizard->parameters['email_to_target']['message_field'];
    $form[$field]['#access'] = FALSE;
    return $form;
  }

}
