<?php
/**
  * @file
  * implementation for Donation tests
  */

require_once dirname(__FILE__) . '/ActionCommon.php';

class DonationTest extends ActionCommon {
    public function testActionCreation($path = '/node/add/donation', $title = 'Create Donation') {
      parent::testActionCreation($path, $title);
    }

    public function testAccessRights($path = '/node/add/donation') {
      parent::testAccessRights($path);
    }

    /**
      * @depends testActionCreation
      */
    public function testDonationSubmit() {
      $this->timeouts()->implicitWait(5000);

      $this->url('/support-selenium');
      $this->assertContains('Support Selenium!', $this->title());

      $this->byName('submitted[amount][donation_amount]')->value('50');
      //$this->byCssSelector('.form-item-submitted-amount-donation-interval input[value="1"]')->click();
      $this->byCssSelector('input[value="Make your donation!"]')->click();

      $this->byName('submitted[first_name]')->value('Fire');
      $this->byName('submitted[last_name]')->value('Chrome');
      $this->byName('submitted[email]')->value('firefox@example.com');
      $this->byCssSelector('input[value="Next"]')->click();

      $this->byName('submitted[paymethod_select][payment_method_all_forms][Drupalmanual-direct-debitAccountDataController][holder]')->value('Fire Chrome');
      $this->byName('submitted[paymethod_select][payment_method_all_forms][Drupalmanual-direct-debitAccountDataController][ibanbic][iban]')->value('AT611904300234573201');
      $this->byName('submitted[paymethod_select][payment_method_all_forms][Drupalmanual-direct-debitAccountDataController][ibanbic][bic]')->value('UNCRIT2B912');
      $this->byCssSelector('input[value="Donate now!"]')->click();

      sleep(2); // wait for thank you page to load
      $this->assertContains('Thanks', $this->title());

      $this->url('/support-selenium');
      $this->assertContains('Fire C', $this->byCssSelector('.recent-supporters')->text());
    }

    /**
      * @depends testDonationSubmit
      */
    public function testManageSupporters() {
      $this->login();
      $this->url('/admin/supporters');

      $supporters = $this->byId('campaignion-manage-form')->text();
      $this->assertContains('Fire Chrome', $supporters);
      $this->assertContains('firefox@example.com', $supporters);
    }
}
