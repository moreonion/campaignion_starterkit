<?php

namespace Drupal\campaignion_email_to_target;

use \Drupal\little_helpers\Webform\Submission;


class FilterTest extends \DrupalWebTestCase {

  public function tearDown() {
    db_delete('campaignion_email_to_target_filters')->execute();
  }

  public function test_put_oneMessage_emptyNode() {
    $f = Filter::fromArray(['type' => 'test', 'config' => 'something']);
    $this->assertEquals(['config' => 'something'], $f->config);
    $f->message_id = 1;
    $f->weight = 0;
    $f->save();
    $fs = Filter::byMessageIds([1]);
    $this->assertCount(1, $fs);
    $this->assertEquals(['config' => 'something'], array_values($fs)[0]->config);
  }

}


class FilterUnitTest extends \DrupalUnitTestCase {
  public function test_match_byName() {
    $f = Filter::fromArray(['type' => 'target-attribute', 'attributeName' => 'first_name', 'operator' => '==', 'value' => 'test']);
    $submission = $this->getMockBuilder('\\Drupal\\little_helpers\\Webform\\Submission')
      ->disableOriginalConstructor()->getMock();
    $this->assertTrue($f->match(['first_name' => 'test'], $submission));
    $this->assertFalse($f->match(['first_name' => 'notest'], $submission));
  }
}
