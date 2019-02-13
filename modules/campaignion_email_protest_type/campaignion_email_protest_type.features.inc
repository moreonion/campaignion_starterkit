<?php

/**
 * @file
 * campaignion_email_protest_type.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function campaignion_email_protest_type_ctools_plugin_api($module = NULL, $api = NULL) {
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
function campaignion_email_protest_type_node_info() {
  $items = array(
    'email_protest' => array(
      'name' => t('Email Protest'),
      'base' => 'node_content',
      'description' => t('Email protests are actions that allow your supporters to send emails to a campaign target (via a form on a page).'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
