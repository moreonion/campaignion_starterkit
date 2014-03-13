<?php
/**
 * @file
 * campaignion_form_templates.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function campaignion_form_templates_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function campaignion_form_templates_node_info() {
  $items = array(
    'webform_template_type' => array(
      'name' => t('Form Template'),
      'base' => 'node_content',
      'description' => t('Nodes of this content type feature as template for webform fields'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
