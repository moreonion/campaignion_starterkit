<?php

/**
 * @file
 * campaignion_email_to_target_type.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function campaignion_email_to_target_type_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_advanced_settings|node|email_to_target|form';
  $field_group->group_name = 'group_advanced_settings';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'email_to_target';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Advanced settings',
    'weight' => '7',
    'children' => array(
      0 => 'action_template',
      1 => 'field_thank_you_pages',
      2 => 'supporter_tags',
      3 => 'webform_template',
      4 => 'path',
      5 => 'xmlsitemap',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-advanced-settings field-group-fieldset field-group-heading field-group-no-label',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_advanced_settings|node|email_to_target|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content|node|email_to_target|form';
  $field_group->group_name = 'group_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'email_to_target';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '3',
    'children' => array(
      0 => 'body',
      1 => 'field_main_image',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-content field-group-fieldset field-group-heading',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_content|node|email_to_target|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_recent_supporters|node|email_to_target|form';
  $field_group->group_name = 'group_recent_supporters';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'email_to_target';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Recent supporters',
    'weight' => '6',
    'children' => array(
      0 => 'recent_supporters',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Recent supporters',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-recent-supporters field-group-fieldset field-group-heading',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_recent_supporters|node|email_to_target|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Advanced settings');
  t('Content');
  t('Recent supporters');

  return $field_groups;
}
