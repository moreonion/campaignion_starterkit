<?php

/**
 * @file
 * campaignion_flexible_form.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function campaignion_flexible_form_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_advanced_settings|node|webform|form';
  $field_group->group_name = 'group_advanced_settings';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'webform';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Advanced settings',
    'weight' => '8',
    'children' => array(
      0 => 'action_template',
      1 => 'field_thank_you_pages',
      2 => 'supporter_tags',
      3 => 'webform_template',
      4 => 'path',
      5 => 'xmlsitemap',
      6 => 'layout',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Advanced settings',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-advanced-settings field-group-fieldset field-group-heading field-group-no-label',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_advanced_settings|node|webform|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content|node|webform|form';
  $field_group->group_name = 'group_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'webform';
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
      'label' => 'Content',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-content field-group-fieldset field-group-heading',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_content|node|webform|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_recent_supporters|node|webform|form';
  $field_group->group_name = 'group_recent_supporters';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'webform';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Recent supporters',
    'weight' => '7',
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
  $field_groups['group_recent_supporters|node|webform|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Advanced settings');
  t('Content');
  t('Recent supporters');

  return $field_groups;
}
