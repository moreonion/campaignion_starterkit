<?php
/**
  * @file
  * base class implementation for all action tests
  */

class ActionCommon extends DrupalSeleniumTestCase {
    public function setUp() {
      parent::setUp();

      $config_path = getenv('DRUPAL_SELENIUM_CONFIG');
      if (empty($config_path)) {
        print("\n\nNo test config file specified, aborting!\n\n");
        $this->assertTrue(FALSE);
      }
      include $config_path;
      $this->temporary_admin_pass = $admin_pwd;
      $this->assertTrue(!empty($this->temporary_admin_pass));
    }

    public function testFrontpage() {
      $this->url('/');
      $this->assertContains('Let\'s change the world!', $this->title());
      $this->assertContains('Let\'s change the world!',
      $this->byCssSelector('body')->text());
    }

    public function testAccessRights($path = '/node/add/action') {
      $this->url($path);
      $this->assertContains('Access denied', $this->title());
    }

    public function testActionCreation($path = '/node/add/action', $title = 'Create Action') {
      $this->login();

      $this->url($path);
      $this->assertContains($title, $this->title());
 
      $title = $this->byName('title');
      $title->clear();
      $title->value('Support Selenium!');
      $this->clickOnElement('edit-next');
      $this->clickOnElement('edit-next');
      $this->clickOnElement('edit-next');

      $this->byCssSelector('.form-item-thank-you-node-type input[value=node]')->click();
      $this->byName('thank_you_node[node_form][title]')->value('Thanks!');
      $this->clickOnElement('edit-next');
      $this->clickOnElement('edit-return');
      $this->assertTrue(TRUE);
    }

    /**
      * @depends testActionCreation
      */
    public function testActinOnFrontpage() {
      $this->url('/');
      $this->assertContains('Support Selenium!',
      $this->byCssSelector('body')->text());
    }
}
