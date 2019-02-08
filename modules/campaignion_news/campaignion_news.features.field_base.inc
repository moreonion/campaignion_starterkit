<?php

/**
 * @file
 * campaignion_news.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function campaignion_news_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_related_action'.
  $field_bases['field_related_action'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_related_action',
    'global_block_settings' => 1,
    'indexes' => array(
      'nid' => array(
        0 => 'nid',
      ),
    ),
    'locked' => 0,
    'module' => 'node_reference',
    'settings' => array(
      'referenceable_types' => array(
        'campaign' => 0,
        'news' => 0,
        'petition' => 'petition',
        'static_page' => 0,
        'thank_you_page' => 0,
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
    'type' => 'node_reference',
  );

  return $field_bases;
}
