<?php
/**
  * @file
  * default implementation for Thank You wizard step configurations
  */

require_once dirname(__FILE__) . '/WizardStepConfig.php';

class DefaultThankyouStepConfig extends WizardStepConfig {
  public function configure() {
    $this->testCase->byCssSelector('.form-item-thank-you-node-type input[value=node]')->click();
    $this->testCase->byName('thank_you_node[node_form][title]')->value('Thanks!');
  }
}