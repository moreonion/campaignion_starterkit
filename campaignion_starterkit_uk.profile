<?php

/**
 * Implements hook_user_login().
 */
function campaignion_starterkit_uk_user_login(&$edit, $account) {
  if (in_array('editor', $account->roles) || in_array('administrator', $account->roles)) {
    $edit['redirect'] = '<front>';
  }
}

/**
 * Implements hook_ctools_plugin_api().
 */
function campaignion_starterkit_uk_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}

function campaignion_starterkit_uk_field_widget_form_alter(&$element, &$form_state, $context) {
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
function campaignion_starterkit_uk_form_node_form_alter(&$form, &$form_state) {
  $form['revision_information']['#access'] = FALSE;
}
