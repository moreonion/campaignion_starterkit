<?php
class ActionTemplateTest extends \DrupalUnitTestCase {
  public function testNewPetitionGetsTemplateApplied() {
    $node = (object) array(
      'type' => 'petition',
    );
    node_object_prepare($node);
    node_save($node);
    $this->assertGreaterThan(0, count($node->webform['components']), 'No components in the node object after node_save().');
    $node = node_load($node->nid, NULL, TRUE);
    $this->assertGreaterThan(0, count($node->webform['components']), 'No components in the node object after reloading.');
  }

  public function testNewPetitionWithFields_doesntGetTemplate() {
    require_once drupal_get_path('module', 'webform') . '/components/textfield.inc';
    $node = (object) array(
      'type' => 'petition',
    );
    node_object_prepare($node);
    $components[1] = array(
      'form_key' => 'first_name',
      'name' => __FUNCTION__,
      'type' => 'textfield',
    ) + _webform_defaults_textfield();
    $node->webform['components'] = $components;
    node_save($node);
    $this->assertEqual(__FUNCTION__, $node->webform['components'][1]['name'], 'Components changed after node_save()');
    $node = node_load($node->nid, NULL, TRUE);
    $this->assertEqual(__FUNCTION__, $node->webform['components'][1]['name'], 'Components changed after node_load().');
  }
}
