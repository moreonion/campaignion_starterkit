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
  $field_group->identifier = 'group_add|node|campaign|form';
  $field_group->group_name = 'group_add';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'campaign';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_only_published';
  $field_group->data = array(
    'label' => 'Add another section',
    'weight' => '5',
    'children' => array(),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Add another section',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_add|node|campaign|form'] = $field_group;

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
    'label' => 'Advanced settings',
    'weight' => '5',
    'children' => array(
      0 => 'path',
      1 => 'xmlsitemap',
      2 => 'layout',
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
    'label' => 'Public campaign page',
    'weight' => '3',
    'children' => array(
      0 => 'field_public_page',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Public campaign page',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-campaign-page field-group-fieldset field-group-heading',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
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
    'label' => 'Public campaign page only',
    'weight' => '4',
    'children' => array(
      0 => 'body',
      1 => 'field_main_image',
      2 => 'layout_background_image',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
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
