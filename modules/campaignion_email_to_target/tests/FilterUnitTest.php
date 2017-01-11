<?php

namespace Drupal\campaignion_email_to_target;

class FilterUnitTest extends \DrupalUnitTestCase {

  public function test_match_byName() {
    $f = Filter::fromArray(['type' => 'target-attribute', 'config' => ['attributeName' => 'first_name', 'operator' => '==', 'value' => 'test']]);
    $this->assertTrue($f->match(['first_name' => 'test'], []));
    $this->assertFalse($f->match(['first_name' => 'notest'], []));
  }

  public function test_match_nonExistingAttribute_doesNotMatch() {
    $f = Filter::fromArray(['type' => 'target-attribute', 'config' => ['attributeName' => 'contact.first_name', 'operator' => '==', 'value' => 'test']]);
    $this->assertFalse($f->match([], []));
  }

}

