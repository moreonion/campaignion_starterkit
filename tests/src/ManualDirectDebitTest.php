<?php

namespace Drupal\campaignion_starterkit\Tests;

class ManualDirectDebitTest extends \Drupal\Tests\DrupalSeleniumTestCase {
  protected $driver;

  public function __construct() {
    parent::__construct();
    $this->driver = new ActionDriver($this, 'donation', 'Create Donation', array(
      'Content'   => new DefaultContentStepConfig($this, 'Support Selenium!'),
      'Form'      => new WizardStepConfig($this),
      'Emails'    => new WizardStepConfig($this),
      'Thank you' => new DefaultThankyouStepConfig($this),
      'Confirm'   => new WizardStepConfig($this),
    ));
  }

  public function testCreateDonation() {
    $this->driver->createAction();
  }

  /**
   * @depends testCreateDonation
   */
  public function testDonationManualDirectDebit() {
    $this->timeouts()->implicitWait(5000);

    $this->url('/support-selenium');
    $this->assertContains('Support Selenium!', $this->title());

    $this->byName('submitted[amount][donation_amount]')->value('50');
    $this->byCssSelector('.form-item-submitted-amount-donation-interval input[value="1"]')->click();
    $this->byCssSelector('input[value="Make your donation!"]')->click();

    $this->byName('submitted[first_name]')->value('Fire');
    $this->byName('submitted[last_name]')->value('Chrome');
    $this->byName('submitted[email]')->value('firefox@example.com');
    $this->byCssSelector('input[value="Next"]')->click();

    $this->byName('submitted[paymethod_select][payment_method_all_forms][Drupalmanual-direct-debitAccountDataController][holder]')->value('Fire Chrome');
    $this->byName('submitted[paymethod_select][payment_method_all_forms][Drupalmanual-direct-debitAccountDataController][ibanbic][iban]')->value('AT611904300234573201');
    $this->byName('submitted[paymethod_select][payment_method_all_forms][Drupalmanual-direct-debitAccountDataController][ibanbic][bic]')->value('UNCRIT2B912');
    $this->byCssSelector('input[value="Donate now!"]')->click();
    $this->waitUntil(function($this) {
      return (bool) strpos($this->title(), 'Thanks');
    });
  }

  /**
   * @depends testDonationManualDirectDebit
   */
  public function testRecentSupporter() {
    $this->url('/support-selenium');
    $this->assertContains('Fire C', $this->byCssSelector('.recent-supporters')->text());
  }

  /**
   * @depends testDonationManualDirectDebit
   */
  public function testManageSupporters() {
    $this->login();
    $this->url('/admin/supporters');

    $supporters = $this->byId('campaignion-manage-form')->text();
    $this->assertContains('Fire Chrome', $supporters);
    $this->assertContains('firefox@example.com', $supporters);
  }

  protected function waitForUserInput() {
    if(trim(fgets(fopen("php://stdin","r"))) != chr(13)) return;
  }
}
