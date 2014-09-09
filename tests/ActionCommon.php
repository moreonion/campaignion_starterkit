<?php
/**
  * @file
  * base class implementation for all action tests
  */

require_once dirname(__FILE__) . '/DefaultContentStepConfig.php';
require_once dirname(__FILE__) . '/WizardStepConfig.php';
require_once dirname(__FILE__) . '/DefaultThankyouStepConfig.php';

class ActionCommon extends DrupalSeleniumTestCase {
    protected $addActionPath      = '/node/add/action';
    protected $wizardTitle        = 'Create Action';
    protected $wizardStepsConfigs = NULL;

    public function __construct() {
      parent::__construct();
       $this->wizardStepsConfigs = array(
        'Content'   => new DefaultContentStepConfig($this, 'Support Selenium!'),
        'Form'      => new WizardStepConfig($this),
        'Emails'    => new WizardStepConfig($this),
        'Thank you' => new DefaultThankyouStepConfig($this),
        'Confirm'   => new WizardStepConfig($this),
      );
    }

    public function testAccessRights() {
      $this->url($this->addActionPath);
      $this->assertContains('Access denied', $this->title());
    }

    protected function createAction() {
      $this->login();

      $this->url($this->addActionPath);
      $this->assertContains($this->wizardTitle, $this->title());

      do {
        $step = $this->byCssSelector('.wizard-trail .wizard-trail-current a')->text();
        $this->wizardStepsConfigs[$step]->configure();
        if ($step !== 'Confirm') {
          $this->clickOnElement('edit-next');
        }
      } while ($step !== 'Confirm');

      $this->clickOnElement('edit-return');
    }

    protected function actionOnFrontpage($action_title = 'Support Selenium!') {
      $this->url('/');
      $this->assertContains($action_title, $this->byCssSelector('body')->text());
    }
}
