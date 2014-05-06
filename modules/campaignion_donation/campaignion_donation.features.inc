<?php
/**
 * @file
 * campaignion_donation.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function campaignion_donation_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function campaignion_donation_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
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

/**
 * Implements hook_default_payment_method().
 */
function campaignion_donation_default_payment_method() {
  $items = array();
  $items['manual_direct_debit'] = entity_import('payment_method', '{
    "controller_data" : [],
    "enabled" : true,
    "name" : "manual_direct_debit",
    "title_specific" : "Manual direct debit",
    "title_generic" : "Direct debit",
    "uid" : 1,
    "controller_class_name" : "\\\\Drupal\\\\manual_direct_debit\\\\AccountDataController"
  }');
  return $items;
}
