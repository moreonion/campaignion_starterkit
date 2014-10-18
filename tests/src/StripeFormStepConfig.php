<?php
/**
 * @file
 * implementation for form wizard step Stripe payment configurations
 */

namespace Drupal\campaignion_starterkit\Tests;

class StripeFormStepConfig extends FormStepConfig {
  public function configure() {
    $this->configurePaymethodselectStripe();
  }
}