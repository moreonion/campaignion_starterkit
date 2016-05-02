<?php

namespace Drupal\campaignion_email_to_target;


class MessageEndpoint {
  protected $node;

  public function __construct($node) {
    $this->node = $node;
  }

  protected function flatten($data) {
    if (isset($data['message']) && is_array($data['message'])) {
      $message = $data['message'];
      unset($data['message']);
      return $message + $data;
    }
    return $data;
  }

  protected function unflatten($data) {
    $message = [];
    foreach (['subject', 'header', 'message', 'footer'] as $k) {
      $message[$k] = $data[$k];
      unset($data[$k]);
    }
    $data['message'] = $message;
    return $data;
  }

  public function put($data) {
    $old_messages = MessageTemplate::byNid($this->node->nid);
    $w = 0;
    $new_messages = [];
    foreach ($data as $m) {
      $m['nid'] = $this->node->nid;
      $m['weight'] = $w++;
      $m = $this->flatten($m);

      if (isset($m['id']) && isset($old_messages[$m['id']])) {
        $message = $old_messages[$m['id']];
        $message->setData($m);
        unset($old_messages[$message->id]);
      }
      else {
        $message = new MessageTemplate($m);
      }
      $message->save();
      $new_messages[] = $this->unflatten($message->toArray());
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
      $messages[] = $this->unflatten($m->toArray());
    }
    return $messages;
  }

}
