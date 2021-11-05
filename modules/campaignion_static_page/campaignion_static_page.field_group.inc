<?php

/**
 * @file
 * campaignion_static_page.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function campaignion_static_page_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_advanced_settings|node|static_page|form';
  $field_group->group_name = 'group_advanced_settings';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'static_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'layout',
      1 => 'metatags',
      2 => 'opengraph_meta_image',
      3 => 'path',
      4 => 'redirect',
      5 => 'xmlsitemap',
    ),
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'classes' => 'group-advanced-settings field-group-fieldset field-group-heading field-group-no-label',
        'description' => '',
        'required_fields' => 1,
      ),
      'label' => 'Advanced settings',
    ),
    'format_type' => 'fieldset',
    'label' => 'Advanced settings',
    'weight' => '5',
  );
  $field_groups['group_advanced_settings|node|static_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content|node|static_page|form';
  $field_group->group_name = 'group_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'static_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'body',
      1 => 'field_main_image',
    ),
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'classes' => 'group-content field-group-fieldset field-group-heading',
        'description' => '',
        'required_fields' => 1,
      ),
      'label' => 'Content',
    ),
    'format_type' => 'fieldset',
    'label' => 'Content',
    'weight' => '4',
  );
  $field_groups['group_content|node|static_page|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Advanced settings');
  t('Content');

  return $field_groups;
}
