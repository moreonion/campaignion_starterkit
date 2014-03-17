<?php
/**
 * @file
 * campaignion_static_page.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function campaignion_static_page_ctools_plugin_api() {
  list($module, $api) = func_get_args();
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
      'description' => t('This is your common static page, for sites that don\'t change often. Mostly used for static content, like legal info or the about section of your project.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
