<?php

/**
 * @file
 * campaignion_petition.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function campaignion_petition_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_advanced_settings|node|petition|form';
  $field_group->group_name = 'group_advanced_settings';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'petition';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'action_template',
      1 => 'field_thank_you_pages',
      2 => 'layout',
      3 => 'metatags',
      4 => 'opengraph_meta_image',
      5 => 'path',
      6 => 'redirect',
      7 => 'supporter_tags',
      8 => 'webform_template',
      9 => 'xmlsitemap',
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
    'weight' => '9',
  );
  $field_groups['group_advanced_settings|node|petition|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content|node|petition|form';
  $field_group->group_name = 'group_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'petition';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'body',
      1 => 'field_main_image',
      2 => 'field_form_intro',
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
    'weight' => '6',
  );
  $field_groups['group_content|node|petition|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_recent_supporters|node|petition|form';
  $field_group->group_name = 'group_recent_supporters';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'petition';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'recent_supporters',
    ),
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'classes' => 'group-recent-supporters field-group-fieldset field-group-heading',
        'description' => '',
        'required_fields' => 1,
      ),
      'label' => 'Recent supporters',
    ),
    'format_type' => 'fieldset',
    'label' => 'Recent supporters',
    'weight' => '8',
  );
  $field_groups['group_recent_supporters|node|petition|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Advanced settings');
  t('Content');
  t('Recent supporters');

  return $field_groups;
}
