<?php

/**
 * @file
 * campaignion_roles.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function campaignion_roles_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'roleassign_roles';
  $strongarm->value = array(
    3 => '3',
    4 => '4',
  );
  $export['roleassign_roles'] = $strongarm;

  return $export;
}
