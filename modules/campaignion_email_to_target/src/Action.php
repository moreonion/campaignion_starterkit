<?php

namespace Drupal\campaignion_email_to_target;

use \Drupal\little_helpers\Webform\Submission;

class Action extends \Drupal\campaignion_action\ActionBase {
  public function getMessage($target, Submission $submission) {
    $templates = MessageTemplate::byNid($this->node->nid);
    foreach ($templates as $t) {
      $match = TRUE;
      foreach ($t->filters as $f) {
        if (!$f->match($target, $submission)) {
          $match = FALSE;
          break;
        }
      }
      if ($match) {
        return Message::fromTemplate($t);
      }
    }
    watchdog('campaignion_email_to_target', 'No message found for target');
    return NULL;
  }

  public function getOptions() {
    $field = $this->type->parameters['email_to_target']['options_field'];
    $items = field_get_items('node', $this->node, $field);
    return $items ? $items[0] : ['dataset_name' => 'mp'];
  }

  public function dataset() {
    $api = Api\Client::fromConfig();
    return $api->getDataset($this->getOptions()['dataset_name']);
  }

  public function testLink($title, $query = [], $options = []) {
    return $this->_testLink($title, $query, $options);
  }

}
