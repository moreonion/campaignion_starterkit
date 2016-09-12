<?php

namespace Drupal\campaignion_donation;

class StripeCreditCardController extends \Drupal\stripe_payment\CreditCardController {
  function validate(\Payment $payment, \PaymentMethod $payment_method, $strict) {
    parent::validate($payment, $payment_method, $strict);
    if ($strict) {
      $interval = $payment->contextObj->value('donation_interval');
      if ($interval && $interval != '1') {
        throw new \PaymentValidationException('This payment method does not support recurring payments.');
      }
    }
  }
}
