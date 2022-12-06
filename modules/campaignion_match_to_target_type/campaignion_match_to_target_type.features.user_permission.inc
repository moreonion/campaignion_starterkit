<?php

/**
 * @file
 * campaignion_match_to_target_type.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function campaignion_match_to_target_type_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create match_to_target content'.
  $permissions['create match_to_target content'] = array(
    'name' => 'create match_to_target content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any match_to_target content'.
  $permissions['delete any match_to_target content'] = array(
    'name' => 'delete any match_to_target content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own match_to_target content'.
  $permissions['delete own match_to_target content'] = array(
    'name' => 'delete own match_to_target content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any match_to_target content'.
  $permissions['edit any match_to_target content'] = array(
    'name' => 'edit any match_to_target content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own match_to_target content'.
  $permissions['edit own match_to_target content'] = array(
    'name' => 'edit own match_to_target content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  return $permissions;
}
