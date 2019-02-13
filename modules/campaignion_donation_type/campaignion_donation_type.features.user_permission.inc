<?php

/**
 * @file
 * campaignion_donation_type.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function campaignion_donation_type_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create donation content'.
  $permissions['create donation content'] = array(
    'name' => 'create donation content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'currency.currency.administer'.
  $permissions['currency.currency.administer'] = array(
    'name' => 'currency.currency.administer',
    'roles' => array(),
    'module' => 'currency',
  );

  // Exported permission: 'currency.currency_exchanger.administer'.
  $permissions['currency.currency_exchanger.administer'] = array(
    'name' => 'currency.currency_exchanger.administer',
    'roles' => array(),
    'module' => 'currency',
  );

  // Exported permission: 'currency.currency_locale_pattern.administer'.
  $permissions['currency.currency_locale_pattern.administer'] = array(
    'name' => 'currency.currency_locale_pattern.administer',
    'roles' => array(),
    'module' => 'currency',
  );

  // Exported permission: 'delete any donation content'.
  $permissions['delete any donation content'] = array(
    'name' => 'delete any donation content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own donation content'.
  $permissions['delete own donation content'] = array(
    'name' => 'delete own donation content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any donation content'.
  $permissions['edit any donation content'] = array(
    'name' => 'edit any donation content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own donation content'.
  $permissions['edit own donation content'] = array(
    'name' => 'edit own donation content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'payment.global.administer'.
  $permissions['payment.global.administer'] = array(
    'name' => 'payment.global.administer',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'payment',
  );

  // Exported permission: 'payment.payment.administer'.
  $permissions['payment.payment.administer'] = array(
    'name' => 'payment.payment.administer',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'payment',
  );

  // Exported permission: 'payment.payment.delete.any'.
  $permissions['payment.payment.delete.any'] = array(
    'name' => 'payment.payment.delete.any',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'payment',
  );

  // Exported permission: 'payment.payment.delete.own'.
  $permissions['payment.payment.delete.own'] = array(
    'name' => 'payment.payment.delete.own',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'payment',
  );

  // Exported permission: 'payment.payment.update.any'.
  $permissions['payment.payment.update.any'] = array(
    'name' => 'payment.payment.update.any',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'payment',
  );

  // Exported permission: 'payment.payment.update.own'.
  $permissions['payment.payment.update.own'] = array(
    'name' => 'payment.payment.update.own',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'payment',
  );

  // Exported permission: 'payment.payment.view.any'.
  $permissions['payment.payment.view.any'] = array(
    'name' => 'payment.payment.view.any',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'payment',
  );

  // Exported permission: 'payment.payment.view.own'.
  $permissions['payment.payment.view.own'] = array(
    'name' => 'payment.payment.view.own',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'payment',
  );

  // Exported permission: 'payment.payment_method.delete.any'.
  $permissions['payment.payment_method.delete.any'] = array(
    'name' => 'payment.payment_method.delete.any',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'payment',
  );

  // Exported permission: 'payment.payment_method.delete.own'.
  $permissions['payment.payment_method.delete.own'] = array(
    'name' => 'payment.payment_method.delete.own',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'payment',
  );

  // Exported permission: 'payment.payment_method.update.any'.
  $permissions['payment.payment_method.update.any'] = array(
    'name' => 'payment.payment_method.update.any',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'payment',
  );

  // Exported permission: 'payment.payment_method.update.own'.
  $permissions['payment.payment_method.update.own'] = array(
    'name' => 'payment.payment_method.update.own',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'payment',
  );

  // Exported permission: 'payment.payment_method.view.any'.
  $permissions['payment.payment_method.view.any'] = array(
    'name' => 'payment.payment_method.view.any',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'payment',
  );

  // Exported permission: 'payment.payment_method.view.own'.
  $permissions['payment.payment_method.view.own'] = array(
    'name' => 'payment.payment_method.view.own',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'payment',
  );

  // Exported permission: 'payment.payment_status.view'.
  $permissions['payment.payment_status.view'] = array(
    'name' => 'payment.payment_status.view',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'payment',
  );

  // Exported permission: 'payment.rules.administer'.
  $permissions['payment.rules.administer'] = array(
    'name' => 'payment.rules.administer',
    'roles' => array(),
    'module' => 'payment',
  );

  return $permissions;
}
