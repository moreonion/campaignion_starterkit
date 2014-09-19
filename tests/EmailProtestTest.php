<?php

class EmailProtestTest extends \Drupal\Tests\DrupalSeleniumTestCase {
    public $temporary_admin_pass = 'DrushDlDrupal';


    public function testFrontpage()
    {
      $this->url('/');
      $this->assertContains('Let\'s change the world!', $this->title());
      $this->assertContains('Let\'s change the world!',
        $this->byCssSelector('body')->text());
    }

    public function testEmailProtestCreation() {
      $this->url('/node/add/email-protest');
      $this->assertContains('Access denied', $this->title());

      $this->login();

      $this->url('/node/add/email-protest');
      $this->assertContains('Create Email Protest', $this->title());

      $title = $this->byName('title');
      $title->clear();
      $title->value('Support Selenium!');
      $this->clickOnElement('edit-next');

      $this->byName('field_protest_target[und][0][email_protest_target][first_name]')->value('Protest');
      $this->byName('field_protest_target[und][0][email_protest_target][last_name]')->value('Target');
      $this->byName('field_protest_target[und][0][email_protest_target][email]')->value('pro@target.com');
      $this->clickOnElement('edit-next');
      $this->clickOnElement('edit-next');
      $this->clickOnElement('edit-next');

      $this->byCssSelector('.form-item-thank-you-node-type input[value=node]')->click();
      $this->byName('thank_you_node[node_form][title]')->value('Thanks!');
      $this->clickOnElement('edit-next');
      $this->clickOnElement('edit-return');
    }

    public function testEmailProtestOnFrontpage() {
      $this->logout();
      $this->url('/');
      $this->assertContains('Support Selenium!',
        $this->byCssSelector('body')->text());
      $this->login();
    }

    public function testEmailProtestPage() {
      $this->url('/support-selenium');
      $this->assertContains('Support Selenium!', $this->title());

      $this->byName('submitted[first_name]')->value('Fire');
      $this->byName('submitted[last_name]')->value('Chrome');
      $this->byName('submitted[email]')->value('firefox@example.com');
      $this->byName('submitted[your_message][email_subject]')->value('Stop this!');
      $this->byName('submitted[your_message][email_body]')->value('Some very convincing arguments against it.');

      $this->byCssSelector('input[value="Take action now!"]')->click();
      $this->assertContains('Thanks', $this->title());

      $this->url('/support-selenium');
      $this->assertContains('Fire C', $this->byCssSelector('.recent-supporters')->text());
    }

    public function testManageSupporters() {
      $this->url('/admin/supporters');

      $supporters = $this->byId('campaignion-manage-form')->text();
      $this->assertContains('Fire Chrome', $supporters);
      $this->assertContains('firefox@example.com', $supporters);
    }
}
