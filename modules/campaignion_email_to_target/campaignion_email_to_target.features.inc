<?php
/**
 * @file
 * campaignion_email_to_target.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function campaignion_email_to_target_ctools_plugin_api($module = NULL, $api = NULL) {
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
function campaignion_email_to_target_node_info() {
  $items = array(
    'email_to_target' => array(
      'name' => t('Petition'),
      'base' => 'node_content',
      'description' => t('Petitions can be used to collect signatures for a specifc cause through a form that you can customize.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
