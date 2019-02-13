<?php

/**
 * @file
 * campaignion_conf.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function campaignion_conf_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "file_entity" && $api == "file_default_displays") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function campaignion_conf_image_default_styles() {
  $styles = array();

  // Exported image style: full.
  $styles['full'] = array(
    'label' => 'full',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 550,
          'height' => 340,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: teaser.
  $styles['teaser'] = array(
    'label' => 'teaser',
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 350,
          'height' => 220,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
