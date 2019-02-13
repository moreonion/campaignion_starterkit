<?php

/**
 * @file
 * campaignion_flexible_form.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function campaignion_flexible_form_ctools_plugin_api($module = NULL, $api = NULL) {
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
function campaignion_flexible_form_node_info() {
  $items = array(
    'webform' => array(
      'name' => t('Flexible Form'),
      'base' => 'node_content',
      'description' => t('Create a new form like a "volunteer now" signup form, an event signup or a questionnaire for your supporters.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
