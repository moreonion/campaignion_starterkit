<?php

/**
 * @file
 * campaignion_thankyou_page.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function campaignion_thankyou_page_ctools_plugin_api($module = NULL, $api = NULL) {
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
function campaignion_thankyou_page_node_info() {
  $items = array(
    'thank_you_page' => array(
      'name' => t('Thank You page'),
      'base' => 'node_content',
      'description' => t('Your supporters will land on thank you pages after taking action or making a donation.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
