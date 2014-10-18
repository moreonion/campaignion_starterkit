<?php
/**
 * @file
 * implementation for Donation tests
 */

namespace Drupal\campaignion_starterkit\Tests;

class StripeDonationTest extends \Drupal\Tests\DrupalSeleniumTestCase {
  public function __construct() {
  parent::__construct();
    $this->driver = new ActionDriver($this, 'donation', 'Create Donation', array(
      'Content'   => new DefaultContentStepConfig($this, 'Test Stripe!'),
      'Form'      => new StripeFormStepConfig($this),
      'Emails'    => new WizardStepConfig($this),
      'Thank you' => new DefaultThankyouStepConfig($this),
      'Confirm'   => new WizardStepConfig($this),
    ));
  }
  /**
   * @requires function stripe_payment_payment_method_controller_info
   */
  public function testStripeMethodConfig() {
    $this->login();
    $this->url('/admin/config/services/payment/method/add/%5CDrupal%5Cstripe_payment%5CCreditCardController');
    $this->assertContains('Add Stripe Credit Card payment method', $this->title());

    $this->byLabel('Title (specific)')->value('Test Stripe');
    $this->byLabel('Private key')->value($this->config['stripe_private_key']);
    $this->byLabel('Public key')->value($this->config['stripe_public_key']);
    $this->clickOnElement('edit-save');
    $this->logout();
  }


  /**
   * @depends testStripeMethodConfig
   */
  public function testCreateDonation() {
    $this->timeouts()->implicitWait(5000);
    $this->driver->createAction();
  }

  /**
   * @depends testCreateDonation
   * @depends testStripeMethodConfig
   */
  public function testDonationStripe() {
    $this->timeouts()->implicitWait(5000);

    $this->url('/test-stripe');
    $this->assertContains('Test Stripe!', $this->title());
    $this->byName('submitted[amount][donation_amount]')->value('50');
    $this->byCssSelector('.form-item-submitted-amount-donation-interval input[value="1"]')->click();
    //TODO find out why we need to scroll down
    $this->keys(\PHPUnit_Extensions_Selenium2TestCase_Keys::PAGEDOWN);
    sleep(1);
    $this->byCssSelector('input[value="Make your donation!"]')->click();
    $this->byName('submitted[first_name]')->value('Fire');
    $this->byName('submitted[last_name]')->value('Chrome');
    $this->byName('submitted[email]')->value('firefox@example.com');
    $this->byCssSelector('input[value="Next"]')->click();

    $payment_form = 'submitted[paymethod_select][payment_method_all_forms][Drupalstripe-paymentCreditCardController]';
    $this->select($this->byName($payment_form . '[issuer]'))->selectOptionByValue('visa');
    $this->byName($payment_form . '[credit_card_number]')->value('4242424242424242');
    $this->byName($payment_form . '[secure_code]')->value('123');
    $this->byName($payment_form . '[expiry_date][month]')->value('01');
    $this->byName($payment_form . '[expiry_date][year]')->value('2016');

    $this->byCssSelector('input[value="Donate now!"]')->click();
    $this->takeScreenshot('after-payment');
    $this->waitUntil(function($this) {
        return (bool) strpos($this->title(), 'Thanks');
      });
  }
}
