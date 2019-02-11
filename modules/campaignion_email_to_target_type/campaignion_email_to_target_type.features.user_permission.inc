<?php

/**
 * @file
 * campaignion_email_to_target_type.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function campaignion_email_to_target_type_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create email_to_target content'.
  $permissions['create email_to_target content'] = array(
    'name' => 'create email_to_target content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any email_to_target content'.
  $permissions['delete any email_to_target content'] = array(
    'name' => 'delete any email_to_target content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own email_to_target content'.
  $permissions['delete own email_to_target content'] = array(
    'name' => 'delete own email_to_target content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any email_to_target content'.
  $permissions['edit any email_to_target content'] = array(
    'name' => 'edit any email_to_target content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own email_to_target content'.
  $permissions['edit own email_to_target content'] = array(
    'name' => 'edit own email_to_target content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view email_to_target messages'.
  $permissions['view email_to_target messages'] = array(
    'name' => 'view email_to_target messages',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'campaignion_email_to_target',
  );

  return $permissions;
}
