<?php

namespace Drupal\campaignion_email_to_target\Api;

class Error extends \RuntimeException {
  public function __construct($code, $status, $error) {
    $variables = [
      '@code' => $code,
      '@status' => $status,
      '@error' => $error,
    ];
    $message = format_string('API error @code @status: @error', $variables);
    parent::__construct($message, $code);
  }
  public function log() {
    \watchdog('campaignion_email_to_target', $this->message, [], WATCHDOG_ERROR);
  }
}
