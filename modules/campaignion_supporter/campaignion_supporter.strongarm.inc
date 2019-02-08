<?php

/**
 * @file
 * campaignion_supporter.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function campaignion_supporter_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'campaignion_source_tags_new_tags';
  $strongarm->value = 0;
  $export['campaignion_source_tags_new_tags'] = $strongarm;

  return $export;
}
