<?php

/**
 * @file
 * campaignion_flexible_form.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function campaignion_flexible_form_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'action_template'.
  $field_bases['action_template'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'action_template',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => '',
        1 => '',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_boolean',
  );

  // Exported field_base: 'field_form_intro'.
  $field_bases['field_form_intro'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_form_intro',
    'global_block_settings' => 2,
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

  // Exported field_base: 'pgbar_default'.
  $field_bases['pgbar_default'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'pgbar_default',
    'global_block_settings' => 2,
    'indexes' => array(),
    'locked' => 0,
    'module' => 'pgbar',
    'settings' => array(
      'style' => NULL,
    ),
    'translatable' => 0,
    'type' => 'pgbar',
  );

  // Exported field_base: 'recent_supporters'.
  $field_bases['recent_supporters'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'recent_supporters',
    'global_block_settings' => 2,
    'indexes' => array(),
    'locked' => 0,
    'module' => 'recent_supporters',
    'settings' => array(
      'style' => NULL,
    ),
    'translatable' => 0,
    'type' => 'recent_supporters',
  );

  return $field_bases;
}
