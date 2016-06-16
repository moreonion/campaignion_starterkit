<?php

namespace Drupal\campaignion_email_to_target;

/**
 * Common datastructure for handling protest messages.
 */
class Message {
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
      'subject' => $t->subject,
      'header' => $t->header,
      'message' => $t->message,
      'footer' => $t->footer,
    ];
    return new static($data + [
      'from' => '[webform-tokens:val-first_name] [webform-tokens:val-last_name] <[webform-tokens:val-email]>',
      'to' => '[email-to-target:title] [email-to-target:first_name] [email-to-target:last_name] <[email-to-target:email]>',
    ]);
  }

  public function replaceTokens($target = NULL, $submission = NULL) {
    $data['email-to-target'] = $target;
    $data['webform-submission'] = $submission;
    foreach ($this->tokenEnabledFields as $f) {
      $this->$f = token_replace($this->$f, $data);
    }
  }

  public function toArray() {
    $r = [];
    foreach (['to', 'from', 'subject', 'header', 'message', 'footer'] as $f) {
      $r[$f] = $this->$f;
    }
    return $r;
  }
}
