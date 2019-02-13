<?php

/**
 * @file
 * campaignion_static_page.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function campaignion_static_page_ctools_plugin_api($module = NULL, $api = NULL) {
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
function campaignion_static_page_node_info() {
  $items = array(
    'static_page' => array(
      'name' => t('Static page'),
      'base' => 'node_content',
      'description' => t('This is your common web page. It\'s for sites that don\'t change very often like the "About us" page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
