<?php

/**
 * @file
 * campaignion_roles.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function campaignion_roles_user_default_roles() {
  $roles = array();

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 2,
  );

  // Exported role: editor.
  $roles['editor'] = array(
    'name' => 'editor',
    'weight' => 3,
  );

  // Exported role: supporter.
  $roles['supporter'] = array(
    'name' => 'supporter',
    'weight' => 4,
  );

  return $roles;
}
