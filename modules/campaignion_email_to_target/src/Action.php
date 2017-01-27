<?php

namespace Drupal\campaignion_email_to_target;

use \Drupal\campaignion_action\ActionBase;
use \Drupal\campaignion_email_to_target\Api\Client;

/**
 * Defines special behavior for email to target actions.
 *
 * Mainly deals with the configuration and with selecting messages / exclusion.
 */
class Action extends ActionBase {

  /**
   * Choose an appropritae exclusion for a given target.
   */
  public function getExclusion($constituency) {
    foreach (MessageTemplate::byNid($this->node->nid) as $t) {
      if ($t->type == 'exclusion' && $t->checkFilters([], $constituency)) {
        return Message::fromTemplate($t);
      }
    }
  }

  /**
   * Choose an appropriate message for a given target.
   */
  public function getMessage($target, $constituency) {
    $templates = MessageTemplate::byNid($this->node->nid);
    foreach ($templates as $t) {
      if ($t->checkFilters($target, $constituency)) {
        return Message::fromTemplate($t);
      }
    }
    watchdog('campaignion_email_to_target', 'No message found for target');
    return NULL;
  }

  /**
   * Get options for this action.
   */
  public function getOptions() {
    $field = $this->type->parameters['email_to_target']['options_field'];
    $items = field_get_items('node', $this->node, $field);
    return $items ? $items[0] : ['dataset_name' => 'mp'];
  }

  /**
   * Get the selected dataset for this action.
   */
  public function dataset() {
    $api = Client::fromConfig();
    return $api->getDataset($this->getOptions()['dataset_name']);
  }

  /**
   * Create a link to view the action in test-mode.
   */
  public function testLink($title, $query = [], $options = []) {
    return $this->_testLink($title, $query, $options);
  }

}
