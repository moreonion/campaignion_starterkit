<?php

use \Drupal\campaignion\ContactManager;

class ExportTest extends \DrupalIntegratedWebTestCase {
  function testManageExport_withBasicSupporter() {
    $manager = ContactManager::instance();
    $exporter = $manager->exporter('campaignion_manage');
    $contact = new \RedhenContact(array(
      'first_name' => 'First name',
      'last_name' => 'Last name',
      'type' => 'contact',
    ));
    $contact->setEmail('first@last.com', 1, 0);
    $exporter->setContact($manager->cast($contact));
    $this->assertEquals('first@last.com', $exporter->value('redhen_contact_email'));
    $this->assertEquals('First name', $exporter->value('first_name'));
    $this->assertEquals('Last name', $exporter->value('last_name'));
  }
}
