<?php

/**
 * @file
 * campaignion_protest_target_contact_type.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function campaignion_protest_target_contact_type_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'campaignion_protest_target_contact_type';
  $strongarm->value = 'email_protest_target';
  $export['campaignion_protest_target_contact_type'] = $strongarm;

  return $export;
}
