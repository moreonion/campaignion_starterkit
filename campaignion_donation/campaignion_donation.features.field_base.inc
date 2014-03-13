<?php
/**
 * @file
 * campaignion_donation.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function campaignion_donation_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_logo_area'
  $field_bases['field_logo_area'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_logo_area',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
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

  return $field_bases;
}
