<?php

/**
 * @file
 * campaignion_petition.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function campaignion_petition_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create petition content'.
  $permissions['create petition content'] = array(
    'name' => 'create petition content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any petition content'.
  $permissions['delete any petition content'] = array(
    'name' => 'delete any petition content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own petition content'.
  $permissions['delete own petition content'] = array(
    'name' => 'delete own petition content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any petition content'.
  $permissions['edit any petition content'] = array(
    'name' => 'edit any petition content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own petition content'.
  $permissions['edit own petition content'] = array(
    'name' => 'edit own petition content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  return $permissions;
}
