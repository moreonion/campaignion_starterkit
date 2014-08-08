<?php
/**
  * @file
  * implementation for form wizard step configurations
  */

require_once dirname(__FILE__) . '/WizardStepConfig.php';

class FormStepConfig extends WizardStepConfig {
  public function configure() {
    $this->createMinimalSupporterForm();
  }

  public function createMinimalSupporterForm() {
    $this->testCase->assertContains('Drag a field from the palette to add it to this form.', $this->testCase->byCssSelector('.form-builder-wrapper span')->text());
    $this->testCase->byLinkText('First Name')->click();
    $this->testCase->byLinkText('Last Name')->click();
    $this->testCase->byLinkText('E-mail')->click();
  }

  public function createNationalSupporterForm() {
    $this->testCase->assertContains('Drag a field from the palette to add it to this form.', $this->testCase->byCssSelector('.form-builder-wrapper span')->text());
    $this->testCase->byLinkText('Salutation')->click();
    $this->testCase->byLinkText('Title')->click();
    $this->testCase->byLinkText('Gender')->click();

    $this->createMinimalSupporterForm();

    $this->testCase->byLinkText('Newsletter')->click();
    $this->testCase->byLinkText('Date of birth')->click();
    $this->testCase->byLinkText('Snail Mail Opt-In')->click();
    $this->testCase->byLinkText('Mobile number')->click();
    $this->testCase->byLinkText('Phone number')->click();
    $this->testCase->byLinkText('Street address')->click();
    $this->testCase->byLinkText('ZIP code')->click();
    $this->testCase->byLinkText('City')->click();
    $this->testCase->byLinkText('Region')->click();
  }

  public function createInternationalSupporterForm() {
    $this->createNationalSupporterForm();
    $this->testCase->byLinkText('Country')->click();
  }

  public function createAmountIntervalForm() {
    $this->testCase->assertContains('Drag a field from the palette to add it to this form.', $this->testCase->byCssSelector('.form-builder-wrapper span')->text());
    $this->testCase->byLinkText('Donation amount')->click();
    $this->testCase->byLinkText('Donation interval')->click();
  }

  public function createPaymethodselectForm() {
    $this->testCase->byLinkText('Payment method')->click();
  }

  public function configurePaymethodselectStripe() {
    //$this->testCase->byXPath("//label[contains(.,'Payment Method Selector')]/..")->click();
    $this->testCase->byCssSelector('.payment-method-form legend span')->click();
    $this->testCase->assertTrue($this->testCase->byId('form-builder-field-configure')->displayed());
    $this->testCase->byXPath("//span[contains(., 'Options')]")->click();
    $this->testCase->byXPath("//label[contains(., 'Test Stripe')]")->click();
    $this->testCase->select($this->testCase->byLabel('Select a currency code'))->selectOptionByValue('USD');
    $this->testCase->byLabel('Select the component from which to read the amount')->click();
    $this->testCase->byLabel('Quantity')->value('1');
    $this->testCase->byLabel('Tax rate')->value('0');
    $this->testCase->byCssSelector('.webform-paymethod-select-line-item-description input')->value('Stripe Test');
    $this->testCase->takeScreenshot();
  }
}