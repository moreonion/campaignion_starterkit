<?php

/**
 * @file
 * campaignion_static_page.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function campaignion_static_page_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create static_page content'.
  $permissions['create static_page content'] = array(
    'name' => 'create static_page content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any static_page content'.
  $permissions['delete any static_page content'] = array(
    'name' => 'delete any static_page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own static_page content'.
  $permissions['delete own static_page content'] = array(
    'name' => 'delete own static_page content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any static_page content'.
  $permissions['edit any static_page content'] = array(
    'name' => 'edit any static_page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own static_page content'.
  $permissions['edit own static_page content'] = array(
    'name' => 'edit own static_page content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  return $permissions;
}
