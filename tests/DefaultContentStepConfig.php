<?php
/**
  * @file
  * default implementation for Content wizard step configurations
  */

require_once dirname(__FILE__) . '/WizardStepConfig.php';

class DefaultContentStepConfig extends WizardStepConfig {
  protected $actionTitle;
  protected $language;

  public function __construct(\Drupal\Tests\DrupalSeleniumTestCase $test_case, $action_title, $language = NULL) {
    parent::__construct($test_case);
    $this->actionTitle = $action_title;
    $this->language    = $language;
  }

  public function configure() {
    $title = $this->testCase->byName('title');
    $title->clear();
    $title->value($this->actionTitle);
    if ($this->language) {
      $this->testCase->select($this->testCase->byLabel('Language'))->selectOptionByValue($this->language);
    }
  }
}