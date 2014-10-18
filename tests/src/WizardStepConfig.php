<?php
/**
 * @file
 * interface for all wizard step configurations
 */

namespace Drupal\campaignion_starterkit\Tests;

class WizardStepConfig {
  protected $testCase = NULL;

  public function __construct(\Drupal\Tests\DrupalSeleniumTestCase $test_case) {
    $this->testCase = $test_case;
  }

  public function configure() {
  }
}