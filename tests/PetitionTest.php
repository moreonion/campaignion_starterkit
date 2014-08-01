<?php
/**
  * @file
  * implementation for Petition tests
  */

require_once dirname(__FILE__) . '/ActionCommon.php';

class PetitionTest extends ActionCommon {
    public function testActionCreation($path = '/node/add/petition', $title = 'Create Petition') {
      parent::testActionCreation($path, $title);
    }

    public function testAccessRights($path = '/node/add/petition') {
      parent::testAccessRights($path);
    }

    /**
      * @depends testActionCreation
      */
    public function testPetitionSubmit() {
      $this->url('/support-selenium');
      $this->assertContains('Support Selenium!', $this->title());

      $this->byName('submitted[first_name]')->value('Fire');
      $this->byName('submitted[last_name]')->value('Chrome');
      $this->byName('submitted[email]')->value('firefox@example.com');

      $this->byCssSelector('input[value="Take action now!"]')->click();
      $this->assertContains('Thanks', $this->title());
    }

    /**
      * @depends testPetitionSubmit
      */
    public function testRecentSupporter() {
      $this->url('/support-selenium');
      $this->assertContains('Fire C', $this->byCssSelector('.recent-supporters')->text());
    }

    /**
      * @depends testPetitionSubmit
      */
    public function testManageSupporters() {
      $this->login();
      $this->url('/admin/supporters');

      $supporters = $this->byId('campaignion-manage-form')->text();
      $this->assertContains('Fire Chrome', $supporters);
      $this->assertContains('firefox@example.com', $supporters);
    }
}