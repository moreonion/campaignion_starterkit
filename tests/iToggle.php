<?php
/**
  * @file
  * A helper class to deal with non-accessible iToggles.
  */

class iToggle {
  public function __construct($testCase, $label) {
    $this->testCase = $testCase;
    $this->label = $label;
    $this->id = $this->byXPath("//label[contains(., '" . $this->label . "')]")
                     ->attribute('for');
    $this->iToggle = $this->byCssSelector("label[for='" . $this->id . "']");
  }

  public function isEnabled() {
    return $this->iToggle->css('background-position') === '0% 100%';
  }

  public function isDisabled() {
    return !$this->isEnabled();
  }

  public function ensureEnabled() {
    if ($this->isDisabled()) {
      $this->toggle();
    }
  }

  public function ensureDisabled() {
    if ($this->isEnabled()) {
      $this->toggle();
    }
  }

  public function toggle() {
    $this->byCssSelector("label[for='" . $this->id . "'] span")->click();
    // we need to wait a bit until iToggle updates the checkbox, 0.5 secs are too little,
    // 1 sec is sufficient.
    sleep(1);
  }

  protected function byXPath($path) {
    return $this->testCase->byXPath($path);
  }
  protected function byCssSelector($selector) {
    return $this->testCase->byCssSelector($selector);
  }
}