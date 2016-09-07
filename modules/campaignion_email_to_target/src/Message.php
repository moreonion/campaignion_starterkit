<?php

namespace Drupal\campaignion_email_to_target;

/**
 * Common datastructure for handling protest messages.
 */
class Message {
  public $type;
  public $to;
  public $from;
  public $subject;
  public $message;
  public $footer;
  protected $tokenEnabledFields = ['to', 'from', 'subject', 'header', 'message', 'footer'];

  public function __construct($data) {
    foreach ($data as $k => $v) {
      $this->$k = $v;
    }
  }

  public static function fromTemplate(MessageTemplate $t) {
    $data = [
      'type' => $t->type,
      'subject' => $t->subject,
      'header' => $t->header,
      'message' => $t->message,
      'footer' => $t->footer,
    ];
    return new static($data + [
      'from' => '[submission:values:first_name] [submission:values:last_name] <[submission:values:email]>',
      'to' => '[email-to-target:contact.title] [email-to-target:contact.first_name] [email-to-target:contact.last_name] <[email-to-target:contact.email]>',
    ]);
  }

  public function replaceTokens($target = NULL, $constituency = NULL, $submission = NULL) {
    $data['email-to-target'] = $target;
    $data['email-to-target-constituency'] = $constituency;
    $data['webform-submission'] = $submission;
    foreach ($this->tokenEnabledFields as $f) {
      $this->$f = token_replace($this->$f, $data);
    }
  }

  public function toArray() {
    $r = [];
    foreach (['type', 'to', 'from', 'subject', 'header', 'message', 'footer'] as $f) {
      $r[$f] = $this->$f;
    }
    return $r;
  }
}
