<?php

namespace Drupal\campaignion_email_to_target;


class MessageEndpoint {
  protected $node;

  public function __construct($node) {
    $this->node = $node;
  }

  public function put($data) {
    $w = 0;
    foreach ($data as $m) {
      $m['nid'] = $this->node->nid;
      $m['weight'] = $w++;
      $message = new MessageTemplate($m);
      $message->save();
    }
    return $this->get();
  }

  public function get() {
    $messages = [];
    foreach (MessageTemplate::byNid($this->node->nid) as $m) {
      $d = $m->toArray();
      // Weights are only represented by order.
      unset($d['weight']);
      unset($d['nid']);
      $messages[] = $d;
    }
    return $messages;
  }

}
