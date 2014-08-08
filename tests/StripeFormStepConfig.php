<?php
/**
  * @file
  * implementation for form wizard step Stripe payment configurations
  */

require_once dirname(__FILE__) . '/FormStepConfig.php';

class StripeFormStepConfig extends FormStepConfig {
  public function configure() {
    $this->configurePaymethodselectStripe();
  }
}