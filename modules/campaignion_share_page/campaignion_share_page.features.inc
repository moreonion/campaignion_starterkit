<?php
/**
 * @file
 * campaignion_share_page.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function campaignion_share_page_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
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
function campaignion_share_page_node_info() {
  $items = array(
    'share_page' => array(
      'name' => t('Share page'),
      'base' => 'node_content',
      'description' => t('Share pages are used to encourage your supporters to spread information about your campaign on social media.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
