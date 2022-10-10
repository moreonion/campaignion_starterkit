<?php

/**
 * @file
 * campaignion_match_to_target_type.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function campaignion_match_to_target_type_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_advanced_settings|node|match_to_target|form';
  $field_group->group_name = 'group_advanced_settings';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'match_to_target';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'action_template',
      1 => 'field_thank_you_pages',
      2 => 'layout',
      3 => 'opengraph_meta_image',
      4 => 'supporter_tags',
      5 => 'metatags',
      6 => 'path',
      7 => 'redirect',
      8 => 'xmlsitemap',
    ),
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'classes' => 'group-advanced-settings field-group-fieldset field-group-heading field-group-no-label',
        'description' => '',
        'id' => '',
        'required_fields' => 1,
      ),
    ),
    'format_type' => 'fieldset',
    'label' => 'Advanced settings',
    'weight' => '8',
  );
  $field_groups['group_advanced_settings|node|match_to_target|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content|node|match_to_target|form';
  $field_group->group_name = 'group_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'match_to_target';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'body',
      1 => 'field_form_intro',
      2 => 'field_main_image',
    ),
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'classes' => 'group-content field-group-fieldset field-group-heading',
        'description' => '',
        'id' => '',
        'required_fields' => 1,
      ),
    ),
    'format_type' => 'fieldset',
    'label' => 'Content',
    'weight' => '4',
  );
  $field_groups['group_content|node|match_to_target|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_recent_supporters|node|match_to_target|form';
  $field_group->group_name = 'group_recent_supporters';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'match_to_target';
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
    'weight' => '6',
  );
  $field_groups['group_recent_supporters|node|match_to_target|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Advanced settings');
  t('Content');
  t('Recent supporters');

  return $field_groups;
}
