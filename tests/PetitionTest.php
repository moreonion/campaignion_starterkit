<?php

class PetitionTest extends DrupalSeleniumTestCase {
    public $temporary_admin_pass = 'DrushDlDrupal';


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

      $this->byName('submitted[first_name]')->value('Fire');
      $this->byName('submitted[last_name]')->value('Chrome');
      $this->byName('submitted[email]')->value('firefox@example.com');

      $this->byCssSelector('input[value="Take action now!"]')->click();
      $this->assertContains('Thanks', $this->title());

      $this->url('/support-selenium');
      $this->assertContains('Fire C', $this->byCssSelector('.recent-supporters')->text());
    }

    public function testManageSupporters() {
      $this->login();
      $this->url('/admin/supporters');

      $supporters = $this->byId('campaignion-manage-form')->text();
      $this->assertContains('Fire Chrome', $supporters);
      $this->assertContains('firefox@example.com', $supporters);
    }
}
