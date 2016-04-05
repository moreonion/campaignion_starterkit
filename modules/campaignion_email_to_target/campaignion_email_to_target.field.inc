<?php

use \Drupal\campaignion_email_to_target\Api\Client;

/**
 * Implements hook_field_info().
 */
function campaignion_email_to_target_field_info() {
  $info['email_to_target_message'] = [
    'label' => t('Email to target message'),
    'description' => t('Allows you to configure messages for Email-To-Target actions.'),
    'settings' => [],
    'default_widget' => 'email_to_target_message',
    'default_formatter' => 'email_to_target_message',
  ];
  $info['email_to_target_options'] = [
    'label' => t('Email to target options'),
    'description' => t('Stores options for Email-To-Target actions.'),
    'settings' => [],
    'default_widget' => 'email_to_target_options',
    'default_formatter' => 'email_to_target_options',
  ];
  return $info;
}

/**
 * Implements hook_field_widget_info().
 */
function campaignion_email_to_target_field_widget_info() {
  $info['email_to_target_message'] = [
    'label' => t('Email to target message'),
    'field types' => ['email_to_target_message'],
    'settings' => [],
    'behaviors' => [
      'multiple values' => FIELD_BEHAVIOR_DEFAULT,
      'default values' => FIELD_BEHAVIOR_DEFAULT,
    ],
  ];
  $info['email_to_target_options'] = [
    'label' => t('Email to target options'),
    'field types' => ['email_to_target_options'],
    'settings' => [],
    'behaviors' => [
      'multiple values' => FIELD_BEHAVIOR_DEFAULT,
      'default values' => FIELD_BEHAVIOR_DEFAULT,
    ],
  ];
  return $info;
}

/**
 * Implements hook_field_formatter_info().
 */
function campaignion_email_to_target_field_formatter_info() {
  $info['email_to_target'] = array(
    'label' => t('No output.'),
    'field types' => ['email_to_target_message', 'email_to_target_options'],
  );
  return $info;
}

/**
 * Implements hook_field_is_empty().
 */
function campaignion_email_to_target_field_is_empty($item, $field) {
  return FALSE;
}

/**
 * Implements hook_field_widget_form().
 */
function campaignion_email_to_target_field_widget_form(&$form, &$form_state, $field, $instance, $langcode, $items, $delta, $element) {
  $item = isset($items[$delta]) ? $items[$delta] : array();
  if (isset($instance['default_value'][$delta]) && !isset($items[$delta])) {
    $item = $instance['default_value'][$delta];
  }

  if ($field['type'] == 'email_to_target_options') {
    return _campaignion_email_to_target_options_field_widget_form($item);
  }
  else {
    return _campaignion_email_to_target_message_field_widget_form($item);
  }
}

function _campaignion_email_to_target_options_field_widget_form($item) {
  $defaults = [
    'dataset_name' => '',
    'users_may_edit' => '',
  ];
  $item = drupal_array_merge_deep($defaults, $item);

  $options = [];
  try {
    $api = Client::fromConfig();
    foreach ($api->getDatasetList() as $ds) {
      $options[$ds->key] = $ds->title;
    }
  }
  catch (\Exception $e) {
    watchdog_exception('campaignion_email_to_target', $e);
    drupal_set_message(t('We are sorry! The service is temporary unavailable. The administrators have been informed. Please try again in a few minutes …'), 'error');
  }
  $element['dataset_name'] = [
    '#type' => 'select',
    '#title' => t('Dataset'),
    '#options' => $options,
    '#default_value' => $item['dataset_name'],
  ];
  $element['users_may_edit'] = [
    '#type' => 'checkbox',
    '#title' => t('Users may edit the message'),
    '#default_value' => $item['users_may_edit'],
  ];
  return $element;
}

function _campaignion_email_to_target_message_field_widget_form($item) {
  $defaults = [
    'subject' => '',
    'header' => '',
    'message' => '',
    'footer' => '',
  ];
  $item = drupal_array_merge_deep($defaults, $item);

  $element['subject'] = [
    '#type' => 'textfield',
    '#title' => t('Subject line'),
    '#default_value' => $item['subject'],
  ];
  $element['header'] = [
    '#type' => 'textarea',
    '#title' => t('Message head'),
    '#description' => t("Fixed part of the message displayed above the user's message. Hint: This is where the salutation goes."),
    '#default_value' => $item['header'],
  ];
  $element['message'] = [
    '#type' => 'textarea',
    '#title' => t('Message body'),
    '#default_value' => $item['message'],
  ];
  $element['footer'] = [
    '#type' => 'textarea',
    '#title' => t('Message footer'),
    '#description' => t("Fixed part of the message displayed below the user's message."),
    '#default_value' => $item['footer'],
  ];
  $element['token_help'] = [
    '#theme' => 'token_tree',
    '#token_types' => ['webform-tokens', 'email-to-target'],
    '#global_types' => FALSE,
  ];
  return $element;
}

/**
 * Implements hook_field_formatter_view().
 */
function campaignion_email_to_target_field_formatter_view($entity_type, $entity, $field, $instance, $langcode, $items, $display) {
  return [];
}