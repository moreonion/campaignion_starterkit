<?php

namespace Drupal\campaignion_email_to_target;


class MessageTemplateTest extends \DrupalUnitTestCase {
  public function test_toArray() {
    $t = new MessageTemplate([
      'subject' => 'Test Subject',
      'label' => 'Test label',
    ]);
    $this->assertEqual([
      'id' => NULL,
      'type' => 'message',
      'label' => 'Test label',
      'filters' => [],
      'subject' => 'Test Subject',
      'header' => '',
      'message' => '',
      'footer' => '',
    ], $t->toArray());
  }

  public function test_construct_fromArray() {
    $data = [
      'type' => 'message',
      'label' => 'Test label',
      'filters' => [],
      'subject' => 'Test Subject',
      'header' => '',
      'message' => '',
      'footer' => '',
    ];
    $t = new MessageTemplate($data);
    $this->assertEqual('Test Subject', $t->subject);
  }
}
