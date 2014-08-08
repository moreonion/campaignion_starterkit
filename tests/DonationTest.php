<?php
/**
  * @file
  * implementation for Donation tests
  */

require_once dirname(__FILE__) . '/ActionCommon.php';
require_once dirname(__FILE__) . '/DefaultContentStepConfig.php';
require_once dirname(__FILE__) . '/StripeFormStepConfig.php';

class DonationTest extends ActionCommon {
    protected $addActionPath = '/node/add/donation';
    protected $wizardTitle   = 'Create Donation';

    public function testStripeMethodConfig() {
      $this->login();
      $this->url('/admin/config/services/payment/method/add/%5CDrupal%5Cstripe_payment%5CCreditCardController');
      $this->assertContains('Add Stripe Credit Card payment method', $this->title());

      $this->byLabel('Title (specific)')->value('Test Stripe');
      $this->byLabel('Private key')->value($this->config['stripe_private_key']);
      $this->byLabel('Public key')->value($this->config['stripe_public_key']);
      $this->clickOnElement('edit-save');
    }

    public function testCreateDonation() {
      $this->createAction();
    }

    /**
      * @depends testStripeMethodConfig
      */
    public function testCreateStripeDonation() {
      $this->timeouts()->implicitWait(5000);
      $this->wizardStepsConfigs['Content'] = new DefaultContentStepConfig($this, 'Test Stripe!');
      $this->wizardStepsConfigs['Form']    = new StripeFormStepConfig($this);
      $this->createAction();
    }

    /**
      * @depends testCreateDonation
      */
    public function testDonationOnFrontPage() {
      $this->actionOnFrontpage();
    }

    /**
      * @depends testCreateStripeDonation
      */
    public function testStripeDonationOnFrontPage() {
      $this->actionOnFrontpage('Test Stripe!');
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
      //TODO find out why we need to scroll down
      $this->keys(PHPUnit_Extensions_Selenium2TestCase_Keys::PAGEDOWN);
      sleep(1);
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
    }

    /**
      * @depends testCreateStripeDonation
      * @depends testStripeMethodConfig
      */
    public function testDonationStripe() {
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
}
