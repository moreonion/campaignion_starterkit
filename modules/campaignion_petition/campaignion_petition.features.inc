<?php
/**
 * @file
 * campaignion_petition.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function campaignion_petition_ctools_plugin_api() {
  list($module, $api) = func_get_args();
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
      'description' => t('Advocacy Engine Petitions-Inhaltstyp'),
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
  );
  return $items;
}
