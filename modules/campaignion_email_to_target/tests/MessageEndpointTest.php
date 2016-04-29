<?php

namespace Drupal\campaignion_email_to_target;


class MessageEndpointTest extends \DrupalWebTestCase {

  public function tearDown() {
    db_delete('campaignion_email_to_target_messages')->execute();
    db_delete('campaignion_email_to_target_filters')->execute();
  }

  public function test_put_oneMessage_emptyNode() {
    $data[] = [
      'subject' => 'Test Subject',
      'header' => 'Test header',
      'message' => 'Test message',
      'footer' => 'Test footer',
      'filters' => [
        ['type' => 'test', 'something' => 'something else'],
      ],
    ];
    $fakenode = (object) ['nid' => 30551];
    $endpoint = new MessageEndpoint($fakenode);
    $answer = $endpoint->put($data);
    $tpls = MessageTemplate::byNid($fakenode->nid);
    $this->assertEquals(1, count($tpls));
    $m = $answer[array_keys($answer)[0]];
    unset($m['id']);
    foreach ($m['filters'] as &$filter) {
      unset($filter['id']);
    }
    $this->assertEquals($data[0], $m);
  }

}
