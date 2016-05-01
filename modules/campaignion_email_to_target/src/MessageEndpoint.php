<?php

namespace Drupal\campaignion_email_to_target;


class MessageEndpoint {
  protected $node;

  public function __construct($node) {
    $this->node = $node;
  }

  public function put($data) {
    $old_messages = MessageTemplate::byNid($this->node->nid);
    $w = 0;
    $new_messages = [];
    foreach ($data as $m) {
      $m['nid'] = $this->node->nid;
      $m['weight'] = $w++;
      if (isset($m['id']) && isset($old_messages[$m['id']])) {
        $message = $old_messages[$m['id']];
        $message->setData($m);
        unset($old_messages[$message->id]);
      }
      else {
        $message = new MessageTemplate($m);
      }
      $message->save();
      $new_messages[] = $message->toArray();
    }
    // Old messages that are still in there have been deleted.
    foreach ($old_messages as $message) {
      $message->delete();
    }
    return $new_messages;
  }

  public function get() {
    $messages = [];
    foreach (MessageTemplate::byNid($this->node->nid) as $m) {
      $messages[] = $m->toArray();
    }
    return $messages;
  }

}
