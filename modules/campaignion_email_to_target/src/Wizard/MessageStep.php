<?php

namespace Drupal\campaignion_email_to_target\Wizard;

use \Drupal\campaignion\Forms\EntityFieldForm;
use \Drupal\campaignion_email_to_target\MessageTemplate;

class MessageStep extends \Drupal\campaignion_wizard\WizardStep {
  protected $step  = 'message';
  protected $title = 'Message';

  public function stepForm($form, &$form_state) {
    $form = parent::stepForm($form, $form_state);
    $form['messages'] = [
      '#type' => 'container',
      '#title' => t('Message that will be sent to target(s)'),
      '#id' => drupal_html_id('email-to-target-messages-widget'),
      '#attributes' => ['class' => ['email-to-target-messages-widget']],
      'app-tag' => [
        '#markup' => '<app></app>'
      ],
    ];

    $info = token_get_info();
    $tokens = [];
    foreach(['email-to-target', 'webform-tokens'] as $type) {
      if (!isset($info['types'][$type])) {
        continue;
      }
      $type_info = $info['types'][$type];
      $tokens[$type] = [
        'name' => $type_info['name'],
        'description' => $type_info['description'],
        'tokens' => [],
      ];
      foreach ($info['tokens'][$type] as $key => $token) {
        $tokens[$type]['tokens'][] = [
          'token' => $key,
          'name' => $token['name'],
          'description' => $token['description'],
        ];
      }
    }
    $settings['tokens'] = $tokens;

    $settings['messages'] = [];
    foreach (MessageTemplate::byNid($this->wizard->node->nid) as $m) {
      $settings['messages'][] = $m->toArray();
    }
    $settings['hardValidaion'] = !$this->wizard->node-status;

    $settings = ['campaignion_email_to_target' => $settings];
    $form['messages']['#attached']['js'][] = ['data' => $settings, 'type' => 'setting'];
    $form['messages']['#attached']['js'][] = ['data' => drupal_get_path('module', 'campaignion_email_to_target') . '/js/messages_widget.js', 'scope' => 'footer'];
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
