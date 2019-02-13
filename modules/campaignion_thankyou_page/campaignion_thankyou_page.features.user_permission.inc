<?php

/**
 * @file
 * campaignion_thankyou_page.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function campaignion_thankyou_page_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create thank_you_page content'.
  $permissions['create thank_you_page content'] = array(
    'name' => 'create thank_you_page content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any thank_you_page content'.
  $permissions['delete any thank_you_page content'] = array(
    'name' => 'delete any thank_you_page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own thank_you_page content'.
  $permissions['delete own thank_you_page content'] = array(
    'name' => 'delete own thank_you_page content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any thank_you_page content'.
  $permissions['edit any thank_you_page content'] = array(
    'name' => 'edit any thank_you_page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own thank_you_page content'.
  $permissions['edit own thank_you_page content'] = array(
    'name' => 'edit own thank_you_page content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  return $permissions;
}
