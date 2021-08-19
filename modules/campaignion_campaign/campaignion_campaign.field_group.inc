<?php

/**
 * @file
 * campaignion_campaign.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function campaignion_campaign_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_advanced_settings|node|campaign|form';
  $field_group->group_name = 'group_advanced_settings';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'campaign';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'layout',
      1 => 'path',
      2 => 'xmlsitemap',
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
    'weight' => '6',
  );
  $field_groups['group_advanced_settings|node|campaign|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_campaign_page|node|campaign|form';
  $field_group->group_name = 'group_campaign_page';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'campaign';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'field_public_page',
    ),
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'classes' => 'group-campaign-page field-group-fieldset field-group-heading',
        'description' => '',
        'required_fields' => 1,
      ),
      'label' => 'Public campaign page',
    ),
    'format_type' => 'fieldset',
    'label' => 'Public campaign page',
    'weight' => '4',
  );
  $field_groups['group_campaign_page|node|campaign|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_only_published|node|campaign|form';
  $field_group->group_name = 'group_only_published';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'campaign';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'body',
      1 => 'field_main_image',
      2 => 'layout_background_image',
    ),
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'effect' => 'none',
        'label_element' => 'h3',
        'required_fields' => 1,
        'show_label' => 1,
        'speed' => 'fast',
      ),
    ),
    'format_type' => 'div',
    'label' => 'Public campaign page only',
    'weight' => '5',
  );
  $field_groups['group_only_published|node|campaign|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Add another section');
  t('Advanced settings');
  t('Public campaign page');
  t('Public campaign page only');

  return $field_groups;
}
