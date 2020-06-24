<?php

use \Drupal\campaignion\CRM\Import\Source\ArraySource;
use \Drupal\campaignion\ContactTypeManager;

class ImportTest extends \Drupal\Tests\DrupalWebTestCase {
  public function testFullSupporterImport() {
    $source = new ArraySource(array(
      'email' => 'tester1@example.com',
      'first_name' => 'tester',
      'last_name' => 'example',
      'title' => 'The Tester',
    ));
    $importer = ContactTypeManager::instance()->importer('campaignion_action_taken');
    $contact = $importer->findOrCreateContact($source);
    $changed = $importer->import($source, $contact);

    $this->assertTrue($changed);
    $this->assertTrue(!empty($contact));

    // Full import should import fields.
    $this->assertEquals('The Tester', $contact->wrap()->field_title->value());
    $this->assertNull($contact->contact_id);
    $contact->save();
    $this->assertGreaterThan(0, $contact->contact_id);
  }

  public function testActivitySupporterImport() {
    $source = new ArraySource(array(
      'email' => 'tester2@example.com',
      'first_name' => 'tester',
      'last_name' => 'example',
      'title' => 'The Tester',
    ));
    $importer = ContactTypeManager::instance()->importer('campaignion_activity');
    $contact = $importer->findOrCreateContact($source);
    $changed = $importer->import($source, $contact);

    $this->assertTrue($changed);
    $this->assertTrue(!empty($contact));

    // Minimal import should not import any fields.
    $this->assertEmpty($contact->wrap()->field_title->value());
    $this->assertNull($contact->contact_id);
    $contact->save();
    $this->assertGreaterThan(0, $contact->contact_id);
  }

  public function testLanguageFieldImport() {
    $source = new ArraySource(array(
      'email' => 'tester4@example.com',
      'language' => 'en',
    ));
    $importer = ContactTypeManager::instance()->importer('campaignion_action_taken');
    $contact = $importer->findOrCreateContact($source);
    $changed = $importer->import($source, $contact);
    $this->assertEquals('en', $contact->wrap()->field_preferred_language->value());
  }
}
