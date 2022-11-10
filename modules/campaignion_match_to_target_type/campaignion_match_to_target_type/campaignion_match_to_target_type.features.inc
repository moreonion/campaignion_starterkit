<?php

/**
 * @file
 * campaignion_match_to_target_type.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function campaignion_match_to_target_type_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function campaignion_match_to_target_type_node_info() {
  $items = array(
    'match_to_target' => array(
      'name' => t('Match to target'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
