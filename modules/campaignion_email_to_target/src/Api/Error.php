<?php

namespace Drupal\campaignion_email_to_target\Api;

/**
 * API-Error while calling the e2t service.
 */
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

  /**
   * Write the error to the drupal log.
   */
  public function log() {
    \watchdog_exception('campaignion_email_to_target', $this, $this->message, [], WATCHDOG_ERROR);
  }

}
