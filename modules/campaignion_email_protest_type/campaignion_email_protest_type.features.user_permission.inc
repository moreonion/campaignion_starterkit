<?php

/**
 * @file
 * campaignion_email_protest_type.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function campaignion_email_protest_type_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create email_protest content'.
  $permissions['create email_protest content'] = array(
    'name' => 'create email_protest content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any email_protest content'.
  $permissions['delete any email_protest content'] = array(
    'name' => 'delete any email_protest content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own email_protest content'.
  $permissions['delete own email_protest content'] = array(
    'name' => 'delete own email_protest content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any email_protest content'.
  $permissions['edit any email_protest content'] = array(
    'name' => 'edit any email_protest content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own email_protest content'.
  $permissions['edit own email_protest content'] = array(
    'name' => 'edit own email_protest content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  return $permissions;
}
