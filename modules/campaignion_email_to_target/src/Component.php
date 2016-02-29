<?php

namespace Drupal\campaignion_email_to_target;

use \Drupal\little_helpers\Webform\FormState;
use \Drupal\little_helpers\Webform\Submission;
use \Drupal\little_helpers\Webform\Webform;
use \Drupal\campaignion_action\TypeBase;

class Component {
  protected $component;
  protected $payment = NULL;
  public function __construct(array $component) {
    $this->component = $component;
  }

  /**
   * Get a list of parent form keys for this component.
   *
   * @return array
   *   List of parent form keys - just like $element['#parents'].
   */
  public function parents($webform) {
    $parents = array($this->component['form_key']);
    $parent = $this->component;
    while ($parent['pid'] != 0) {
      $parent = $webform->component($parent['pid']);
      array_unshift($parents, $parent['form_key']);
    }
    return $parents;
  }

  /** 
   * Render the webform component.
   */
  public function render(&$element, &$form, &$form_state) {
    // Get list of targets for this node.
    $targets = [
      [
        'id' => 42,
        'title' => 'MsMr',
        'first_name' => 'Meetsi',
        'last_name' => 'Foo',
        'email' => 'email@example.com',
      ],
    ];

    $node = node_load($this->component['nid']);
    $webform = new Webform($node);
    $action = TypeBase::fromContentType($node->type)->actionFromNode($node);
    $submission_o = $webform->formStateToSubmission($form_state);

    unset($element['#theme']);
    $element = [
      '#type' => 'fieldset',
      '#theme' => 'campaignion_email_to_target_selector_component',
    ] + $element + [
      '#type' => 'fieldset',
      '#title' => $this->component['name'],
      '#description' => $this->component['extra']['description'],
      '#tree' => TRUE,
      '#id' => drupal_html_id('email-to-target-selector-wrapper'),
      '#element_validate' => array('campaignion_email_to_target_selector_validate'),
      '#cid' => $this->component['cid'],
    ];

    $element['#attributes']['class'][] = 'email-to-target-selector-wrapper';

    foreach ($targets as $target) {
      $message = $action->getMessage();
      $message->replaceTokens($target, $submission_o->unwrap());
      $id = drupal_html_id('email-to-target-target-' . $target['id']);
      $t = [
        '#type' => 'container',
        '#attributes' => ['class' => ['email-to-target-target']],
        '#target' => $target,
        '#message' => $message->toArray(),
      ];
      $t['send'] = [
        '#type' => 'checkbox',
        '#title' => "{$target['first_name']} {$target['last_name']}",
        '#id' => $id,
      ];
      $t['subject'] = [
        '#type' => 'textfield',
        '#title' => t('Subject'),
        '#default_value' => $message->subject,
        '#states' => ['visible' => ["#$id" => ['checked' => TRUE]]],
      ];
      $t['message'] = [
        '#type' => 'textarea',
        '#title' => t('Message'),
        '#default_value' => $message->message,
        '#states' => ['visible' => ["#$id" => ['checked' => TRUE]]],
      ];
      $element[$target['id']] = $t;
    }
  }

  public function validate(array $element, array &$form_state) {
    $values = &drupal_array_get_nested_value($form_state['values'], $element['#parents']);

    $original_values = $values;
    $values = [];
    foreach ($original_values as $id => $edited_message) {
      if (!empty($edited_message['send'])) {
        $e = &$element[$id];
        $values[] = serialize(['target' => $e['#target']] + $edited_message + $e['#message']);
      }
    }
    if (empty($values)) {
      form_error($element, t('Please select at least one target'));
    }
  }

  public function sendEmails($data, $submission) {
    $nid = $submission->nid;
    $node = $submission->webform->node;
    $root_node = $node->tnid ? node_load($node->tnid) : $node;
    $send_count = 0;

    foreach ($data as $serialized) {
      $m = unserialize($serialized);
      $message = new Message($m);
      $message->replaceTokens($m['target'], $submission->unwrap());
      unset($m);

      // Set the HTML property based on availablity of MIME Mail.
      $email['html'] = FALSE;
      // Pass through the theme layer.
      $t = 'campaignion_email_to_target_mail';
      $theme_d = ['message' => $message, 'submission' => $submission];
      $email['message'] = theme([$t, $t . '_' . $nid], $theme_d);

      $email['from'] = $message->from;
      $email['subject'] = $message->subject;

      $email['headers'] = [
        'X-Mail-Domain' => variable_get('site_mail_domain', 'supporter.campaignion.org'),
        'X-Action-UUID' => $root_node->uuid,
      ];

      // Verify that this submission is not attempting to send any spam hacks.
      if (_webform_submission_spam_check($message->to, $email['subject'], $email['from'], $email['headers'])) {
        watchdog('campaignion_email_to_target', 'Possible spam attempt from @remote !message',
                array('@remote' => ip_address(), '!message'=> "<br />\n" . nl2br(htmlentities($email['message']))));
        drupal_set_message(t('Illegal information. Data not submitted.'), 'error');
        return FALSE;
      }

      $language = $GLOBALS['language'];
      $mail_params = array(
        'message' => $email['message'],
        'subject' => $email['subject'],
        'headers' => $email['headers'],
        'submission' => $submission,
        'email' => $email,
      );

      // Mail the submission.
      $m = drupal_mail('campaignion_email_to_target', 'target', $message->to, $language, $mail_params, $email['from']);
      if ($m['result']) {
        $send_count += 1;
      }
    }
  }
}
