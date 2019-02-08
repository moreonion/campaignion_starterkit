<?php

/**
 * @file
 * campaignion_protest_target_contact_type.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function campaignion_protest_target_contact_type_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_redhen_contact_type().
 */
function campaignion_protest_target_contact_type_default_redhen_contact_type() {
  $items = array();
  $items['email_protest_target'] = entity_import('redhen_contact_type', '{
    "name" : "email_protest_target",
    "label" : "Email Protest Target",
    "locked" : "0",
    "weight" : "0",
    "data" : null
  }');
  return $items;
}
