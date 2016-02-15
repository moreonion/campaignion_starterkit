<?php
/**
 * @file
 * campaignion_email_to_target_templates.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function campaignion_email_to_target_templates_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
