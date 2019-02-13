<?php

/**
 * @file
 * campaignion_thankyou_page.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function campaignion_thankyou_page_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_thank_you_pages'.
  $field_bases['field_thank_you_pages'] = array(
    'active' => 1,
    'cardinality' => 2,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_thank_you_pages',
    'global_block_settings' => 1,
    'indexes' => array(),
    'locked' => 0,
    'module' => 'field_reference_or_redirect',
    'settings' => array(
      'referenceable_types' => array(
        'campaign' => 0,
        'petition' => 0,
        'static_page' => 0,
        'thank_you_page' => 'thank_you_page',
        'webform' => 0,
        'webform_template_type' => 0,
      ),
      'view' => array(
        'args' => array(),
        'display_name' => '',
        'view_name' => '',
      ),
    ),
    'translatable' => 0,
    'type' => 'reference_or_redirect',
  );

  // Exported field_base: 'share_light'.
  $field_bases['share_light'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'share_light',
    'global_block_settings' => 1,
    'indexes' => array(),
    'locked' => 0,
    'module' => 'share_light',
    'settings' => array(
      'style' => NULL,
    ),
    'translatable' => 0,
    'type' => 'share_light',
  );

  return $field_bases;
}
