<?php

/**
 * @file
 * campaignion_campaign.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function campaignion_campaign_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access non-public campaign page'.
  $permissions['access non-public campaign page'] = array(
    'name' => 'access non-public campaign page',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'campaignion_campaign',
  );

  // Exported permission: 'create campaign content'.
  $permissions['create campaign content'] = array(
    'name' => 'create campaign content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any campaign content'.
  $permissions['delete any campaign content'] = array(
    'name' => 'delete any campaign content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own campaign content'.
  $permissions['delete own campaign content'] = array(
    'name' => 'delete own campaign content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any campaign content'.
  $permissions['edit any campaign content'] = array(
    'name' => 'edit any campaign content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own campaign content'.
  $permissions['edit own campaign content'] = array(
    'name' => 'edit own campaign content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  return $permissions;
}
