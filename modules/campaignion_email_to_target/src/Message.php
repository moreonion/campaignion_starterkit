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
  protected $tokenEnabledFields = ['to', 'from', 'subject', 'message', 'footer'];

  public function __construct($data) {
    foreach ($data as $k => $v) {
      $this->$k = $v;
    }
  }

  public static function fromFieldItem($item) {
    return new static($item + [
      'from' => '[webform-tokens:val-first_name] [webform-tokens:val-last_name] <[webform-tokens:val-email]>',
      'to' => '[email-to-target:title] [email-to-target:first_name] [email-to-target:last_name] <[email-to-target:email]>',
    ]);
  }

  public function replaceTokens($target, $submission) {
    $data['email-to-target'] = $target;
    $data['webform-submission'] = $submission;
    foreach ($this->tokenEnabledFields as $f) {
      $this->$f = token_replace($this->$f, $data);
    }
  }

  public function toArray() {
    $r = [];
    foreach (['to', 'from', 'subject', 'message', 'footer'] as $f) {
      $r[$f] = $this->$f;
    }
    return $r;
  }
}
