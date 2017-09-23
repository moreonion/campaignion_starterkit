<?php

namespace Drupal\campaignion_email_protest;

use Drupal\campaignion_action\ActionBase;
use Drupal\little_helpers\Webform\Submission;

/**
 * Email protest action.
 */
class EmailProtestAction extends ActionBase {

  /**
   * Send protest emails for a submission.
   */
  public function sendEmail(Submission $submission) {
    $node = $this->node;
    if (isset($node->webform['emails'][EmailProtestEmailStep::WIZARD_PROTEST_EID])) {
      $email = &$node->webform['emails'][EmailProtestEmailStep::WIZARD_PROTEST_EID];
    }
    else {
      return;
    }

    $target_contact_id = $submission->valueByKey('email_protest_target');

    $targets = array();
    if ($target_contact_id == FALSE) {
      // no protest target is submitted that means we have to get the targets from the node
      // field
      $protest_targets = field_get_items('node', $form['#node'], 'field_protest_target');
      if ($protest_targets) {
        foreach($protest_targets as $target) {
          if ($contact = redhen_contact_load($target['target_id'])) {
            $items = field_get_items('redhen_contact', $contact, 'redhen_contact_email');
            $targets[] = $items[0]['value'];
          }
        }
      }
    }
    else {
      // the user selected a target that we can get from the form_state
      if ($contact = redhen_contact_load($target_contact_id)) {
        $items = field_get_items('redhen_contact', $contact, 'redhen_contact_email');
        $targets = $items[0]['value'];
      }
    }

    if ($targets) {
      $email['email']     = is_array($targets) ? implode(',', $targets) : $targets;
      $email['from_name'] = $submission->valueByKey('first_name') . ' ' . $submission->valueByKey('last_name');
      $email['template']  = $submission->valueByKey('email_body');
      $root_node = $node;
      if ($node->tnid != 0 && $node->tnid != $node->nid) {
        $root_node = node_load($node->tnid);
      }
      $email['headers'] = array(
        'X-Mail-Domain' => variable_get('site_mail_domain', 'supporter.campaignion.org'),
        'X-Action-UUID' => $root_node->uuid,
      );
    }
  }

}
