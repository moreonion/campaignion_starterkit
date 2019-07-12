<?php

/**
 * Implements hook_user_login().
 */
function campaignion_starterkit_user_login(&$edit, $account) {
  if (in_array('editor', $account->roles) || in_array('administrator', $account->roles)) {
    $edit['redirect'] = '<front>';
  }
}

function campaignion_starterkit_field_widget_form_alter(&$element, &$form_state, $context) {
  if ($context['field']['type'] == 'pgbar') {
    $field = &$element['options']['display']['template'];
    $field['#type'] = 'select';
    $field['#options'] = array(
      'pgbar' => t('Progress bar'),
      'thermometer' => t('Thermometer'),
    );
    if (!$field['#default_value'])
      $field['#default_value'] = 'pgbar';
  }
}

/**
 * Implements hook_form_FORM_ID_alter().
 * Implements hook_form_node_form_alter().
 *
 * Deactivate node revisions.
 */
function campaignion_starterkit_form_node_form_alter(&$form, &$form_state) {
  $form['revision_information']['#access'] = FALSE;
}
