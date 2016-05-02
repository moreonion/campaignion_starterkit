<?php

namespace Drupal\campaignion_email_to_target;


class MessageEndpointTest extends \DrupalWebTestCase {

  public function tearDown() {
    db_delete('campaignion_email_to_target_messages')->execute();
    db_delete('campaignion_email_to_target_filters')->execute();
  }

  public function test_put_oneMessage_emptyNode() {
    $data[] = [
      'type' => 'message',
      'label' => 'My test message',
      'message' => [
        'subject' => 'Test Subject',
        'header' => 'Test header',
        'message' => 'Test message',
        'footer' => 'Test footer',
      ],
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

  public function test_put_withExistingData() {
    $tpl1 = new Messagetemplate(['nid' => 1, 'subject' => 'First']);
    $tpl2 = new Messagetemplate(['nid' => 1, 'subject' => 'Second', 'weight' => 1]);
    $tpl3 = new Messagetemplate(['nid' => 1, 'subject' => 'Third', 'weight' => 2]);
    $tpl1->save(); $tpl2->save(); $tpl3->save();

    $message_ids = [$tpl1->id, $tpl2->id, $tpl3->id];

    $fakenode = (object) ['nid' => 1];
    $endpoint = new MessageEndpoint($fakenode);

    $answer = $endpoint->put([
      ['subject' => 'New first'],
      ['id' => $tpl1->id, 'subject' => 'Was first is now second'],
      ['id' => $tpl2->id, 'subject' => 'Was second is now third'],
    ]);

    $a_messages = [];
    $a_subjects = [];
    foreach ($answer as $m) {
      $a_messages[] = ['id' => $m['id'], 'subject' => $m['message']['subject']];
      $a_subjects[] = $m['message']['subject'];
    }
    $this->assertEqual([
      'New first',
      'Was first is now second',
      'Was second is now third',
    ], $a_subjects);
    $this->assertEqual($tpl2->id, $answer[2]['id']);
  }

}
