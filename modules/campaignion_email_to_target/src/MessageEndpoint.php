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
      // 'message' is called 'body' in the API.
      if (isset($message['body'])) {
        $message['message'] = $message['body'];
      }
      unset($message['body']);
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
    // 'message' is called 'body' in the API.
    $message['body'] = $message['message'];
    unset($message['message']);
    $data['message'] = $message;
    return $data;
  }

  public function put($data) {
    $data += ['messageSelection' => []];
    $data = $data['messageSelection'];
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
    return ['messageSelection' => $new_messages];
  }

  public function get() {
    $messages = [];
    $templates = MessageTemplate::byNid($this->node->nid);
    if (!$templates) {
      $templates[] = new MessageTemplate([
        'subject' => '',
        'header' => t("Dear [email-to-target:salutation],\n"),
        'message' => '',
        'footer' => t("\n\nYours sincerely,\n[webform-tokens:val-first_name] [webform-tokens:val-last_name]\n[webform-tokens:val-street_address]\n[webform-tokens:val-postcode]"),
      ]);
    }
    foreach ($templates as $m) {
      $messages[] = $this->unflatten($m->toArray());
    }
    return ['messageSelection' => $messages];
  }

}
