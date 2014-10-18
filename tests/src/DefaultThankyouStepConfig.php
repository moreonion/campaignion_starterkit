<?php
/**
 * @file
 * default implementation for Thank You wizard step configurations
 */

namespace Drupal\campaignion_starterkit\Tests;

class DefaultThankyouStepConfig extends WizardStepConfig {
  public function configure() {
    $this->testCase->byCssSelector('.form-item-thank-you-node-type input[value=node]')->click();
    $this->testCase->byName('thank_you_node[node_form][title]')->value('Thanks!');
  }
}