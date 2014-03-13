<?php
/**
 * @file
 * campaignion_thankyou_page.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function campaignion_thankyou_page_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function campaignion_thankyou_page_node_info() {
  $items = array(
    'thank_you_page' => array(
      'name' => t('Thank You page'),
      'base' => 'node_content',
      'description' => t('Thank You pages are displayed to users that just have taken an action / have donated. This is the plate to thank your supporters and ask them to share or do some other action / donate.'),
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
  );
  return $items;
}
