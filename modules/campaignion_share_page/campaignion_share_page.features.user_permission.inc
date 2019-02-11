<?php

/**
 * @file
 * campaignion_share_page.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function campaignion_share_page_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create share_page content'.
  $permissions['create share_page content'] = array(
    'name' => 'create share_page content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any share_page content'.
  $permissions['delete any share_page content'] = array(
    'name' => 'delete any share_page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own share_page content'.
  $permissions['delete own share_page content'] = array(
    'name' => 'delete own share_page content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any share_page content'.
  $permissions['edit any share_page content'] = array(
    'name' => 'edit any share_page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own share_page content'.
  $permissions['edit own share_page content'] = array(
    'name' => 'edit own share_page content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  return $permissions;
}
