<?php
/**
 * @file
 * campaignion_donation.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function campaignion_donation_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function campaignion_donation_node_info() {
  $items = array(
    'donation' => array(
      'name' => t('Donation'),
      'base' => 'node_content',
      'description' => t('Donation pages can be used to collect donations online. It\'s like a landing page with a donation form that you can customize.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
