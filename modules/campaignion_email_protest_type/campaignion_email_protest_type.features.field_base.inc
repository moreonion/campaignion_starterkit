<?php

/**
 * @file
 * campaignion_email_protest_type.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function campaignion_email_protest_type_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_protest_target'.
  $field_bases['field_protest_target'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_protest_target',
    'global_block_settings' => 1,
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'base',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'sort' => array(
          'type' => 'none',
        ),
        'target_bundles' => array(
          'email_protest_target' => 'email_protest_target',
        ),
      ),
      'profile2_private' => FALSE,
      'target_type' => 'redhen_contact',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  // Exported field_base: 'field_protest_target_options'.
  $field_bases['field_protest_target_options'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_protest_target_options',
    'global_block_settings' => 1,
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'preselect' => 'a fixed list of target(s) (supporter can\'t choose the target)',
        'choose_one' => 'allow the supporter to choose 1 target out of your list',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  return $field_bases;
}
