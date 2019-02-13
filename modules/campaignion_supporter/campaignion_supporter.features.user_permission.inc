<?php

/**
 * @file
 * campaignion_supporter.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function campaignion_supporter_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access redhen'.
  $permissions['access redhen'] = array(
    'name' => 'access redhen',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'redhen',
  );

  // Exported permission: 'access redhen contacts'.
  $permissions['access redhen contacts'] = array(
    'name' => 'access redhen contacts',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'redhen_contact',
  );

  // Exported permission: 'administer redhen'.
  $permissions['administer redhen'] = array(
    'name' => 'administer redhen',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'redhen',
  );

  // Exported permission: 'administer redhen contacts'.
  $permissions['administer redhen contacts'] = array(
    'name' => 'administer redhen contacts',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'redhen_contact',
  );

  // Exported permission: 'administer redhen_contact types'.
  $permissions['administer redhen_contact types'] = array(
    'name' => 'administer redhen_contact types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'redhen_contact',
  );

  // Exported permission: 'delete redhen contact revisions'.
  $permissions['delete redhen contact revisions'] = array(
    'name' => 'delete redhen contact revisions',
    'roles' => array(),
    'module' => 'redhen_contact',
  );

  // Exported permission: 'delete terms in supporter_tags'.
  $permissions['delete terms in supporter_tags'] = array(
    'name' => 'delete terms in supporter_tags',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit own redhen contact'.
  $permissions['edit own redhen contact'] = array(
    'name' => 'edit own redhen contact',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'redhen_contact',
  );

  // Exported permission: 'edit redhen contact revisions'.
  $permissions['edit redhen contact revisions'] = array(
    'name' => 'edit redhen contact revisions',
    'roles' => array(),
    'module' => 'redhen_contact',
  );

  // Exported permission: 'edit terms in supporter_tags'.
  $permissions['edit terms in supporter_tags'] = array(
    'name' => 'edit terms in supporter_tags',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'manage redhen contacts'.
  $permissions['manage redhen contacts'] = array(
    'name' => 'manage redhen contacts',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'redhen_contact',
  );

  // Exported permission: 'view own redhen contact'.
  $permissions['view own redhen contact'] = array(
    'name' => 'view own redhen contact',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'redhen_contact',
  );

  // Exported permission: 'view redhen contact revisions'.
  $permissions['view redhen contact revisions'] = array(
    'name' => 'view redhen contact revisions',
    'roles' => array(),
    'module' => 'redhen_contact',
  );

  return $permissions;
}
