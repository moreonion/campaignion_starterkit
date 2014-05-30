<?php

class PetitionTest extends DrupalSeleniumTestCase {
    public function testFrontpage()
    {
      $this->url('/');
      $this->assertContains('Let\'s change the world!', $this->title());
      $this->assertContains('Let\'s change the world!',
        $this->byCssSelector('body')->text());
    }

    public function testPetitionCreation() {
      $this->url('/node/add/petition');
      $this->assertContains('Access denied', $this->title());

      $this->login();

      $this->url('/node/add/petition');
      $this->assertContains('Create Petition', $this->title());

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
    }

    public function testPetitionOnFrontpage() {
      $this->url('/');
      $this->assertContains('Support Selenium!',
        $this->byCssSelector('body')->text());
    }

    public function testPetitionPage() {
      $this->url('/support-selenium');
      $this->assertContains('Support Selenium!', $this->title());
    }

    public function login() {
      $this->url('/user');
      $this->assertContains('User account', $this->title());
      $this->byName('name')->value('admin');
      $this->byName('pass')->value('DrushDlDrupal');
      $this->clickOnElement('edit-submit');

      $this->assertContains('admin', $this->title());
    }

    public function takeScreenshot() {
      $file = fopen('screenshot.png', 'wb');
      fwrite($file, $this->currentScreenshot());
      fclose($file);
    }
}
