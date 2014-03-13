<?php
/**
 * @file
 * campaignion_email_protest.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function campaignion_email_protest_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function campaignion_email_protest_node_info() {
  $items = array(
    'email_protest' => array(
      'name' => t('Email Protest'),
      'base' => 'node_content',
      'description' => t('Advocacy Engine Email Protest content type'),
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
  );
  return $items;
}
