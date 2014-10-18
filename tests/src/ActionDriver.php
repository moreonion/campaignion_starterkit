<?php

namespace Drupal\campaignion_starterkit\Tests;

class ActionDriver {
  protected $testCase;
  protected $type;
  protected $wizardTitle;
  protected $wizardStepsConfigs = NULL;

  public function __construct($test_case, $type, $title, $steps) {
    $this->testCase = $test_case;
    $this->type = $type;
    $this->wizardTitle = $title;
    $this->wizardStepsConfigs = $steps;
  }
  
  public function createAction() {
    $tc = $this->testCase;
    $tc->login();

    $tc->url('/wizard/' . $this->type);
    $tc->assertContains($this->wizardTitle, $tc->title());

    do {
      $step = $tc->byCssSelector('.wizard-trail .wizard-trail-current a')->text();
      $this->wizardStepsConfigs[$step]->configure();
      if ($step !== 'Confirm') {
        $tc->clickOnElement('edit-next');
      }
    } while ($step !== 'Confirm');

    $tc->clickOnElement('edit-return');
    $tc->logout();
  }
}
