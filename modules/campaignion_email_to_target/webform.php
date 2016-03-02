<?php

/**
 * @file
 * Webform module email_to_target_selector component.
 */

use \Drupal\little_helpers\Webform\Webform;

/**
 * Implements _webform_defaults_[component]().
 */
function _webform_defaults_e2t_selector() {
  return array(
    'name' => t('Select your targets'),
    'form_key' => 'email_to_target_selector',
    'pid' => 0,
    'weight' => 0,
    'value' => '',
    'mandatory' => 1,
    'extra' => array(
      'width' => '',
      'unique' => 0,
      'disabled' => 0,
      'title_display' => 0,
      'description' => '',
      'attributes' => array(),
      'private' => FALSE,
    ),
  );
}

/**
 * Implements _webform_edit_[component]().
 */
function _webform_edit_e2t_selector($component) {
  return [];
}

/**
 * Implements _webform_render_[component]().
 */
function _webform_render_e2t_selector($component, $value = NULL, $filter = TRUE) {
  $element = [
    '#type' => 'container',
    '#theme' => 'campaignion_email_to_target_selector_placeholder',
    '#title' => $component['name'],
    '#required' => TRUE,
    '#weight' => isset($component['weight']) == TRUE ? $component['weight'] : 0,
  ];
  return $element;
}

/**
 * Implements _webform_display_[component]().
 */
function _webform_display_e2t_selector($component, $value, $format = 'html') {
  dpm('Not implemented yet');
  return [
    '#markup' => isset($value[0]) ? $value[0] : '',
  ];
}

/**
 * Implements _webform_table_component().
 */
function _webform_table_e2t_selector($component, $value) {
  dpm('Not implemented yet');
  return check_plain(empty($value[0]) ? '' : $value[0]);
}


/**
 * Implements _webform_csv_headers_component().
 */
function _webform_csv_headers_e2t_selector($component, $export_options) {
  dpm('Not implemented yet');
  $header = array();
  $header[0] = '';
  $header[1] = '';
  $header[2] = $component['name'];
  return $header;
}

/**
 * Implements _webform_csv_data_component().
 */
function _webform_csv_data_e2t_selector($component, $export_options, $value) {
  dpm('Not implemented yet');
  return empty($value[0]) ? '' : $value[0];
}

/**
 * Implements _webform_form_builder_map_<webform-component>().
 */
function _webform_form_builder_map_e2t_selector() {
  return [
    'form_builder_type' => 'e2t_selector',
  ];
}
