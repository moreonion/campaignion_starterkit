<?php

/**
 * @file
 * campaignion_email_to_target_type.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function campaignion_email_to_target_type_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_email_to_target_options'.
  $field_bases['field_email_to_target_options'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_email_to_target_options',
    'global_block_settings' => 1,
    'indexes' => array(),
    'locked' => 0,
    'module' => 'campaignion_email_to_target',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'email_to_target_options',
  );

  // Exported field_base: 'field_no_target_message'.
  $field_bases['field_no_target_message'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_no_target_message',
    'global_block_settings' => 1,
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_long',
  );

  return $field_bases;
}
