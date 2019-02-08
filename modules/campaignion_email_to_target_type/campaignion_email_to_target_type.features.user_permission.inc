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
