<?php

/**
 * @file
 * campaignion_petition.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function campaignion_petition_ctools_plugin_api($module = NULL, $api = NULL) {
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
function campaignion_petition_node_info() {
  $items = array(
    'petition' => array(
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
