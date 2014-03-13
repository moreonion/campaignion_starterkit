<?php
/**
 * @file
 * campaignion_campaign.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function campaignion_campaign_field_group_info() {
  $export = array();

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
    'children' => array(
      0 => 'field_flexible',
    ),
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
  $export['group_add|node|campaign|form'] = $field_group;

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
    'weight' => '3',
    'children' => array(
      0 => 'body',
      1 => 'field_downloads',
      2 => 'field_intro',
      3 => 'field_main_image',
      4 => 'language',
      5 => 'metatags',
      6 => 'path',
      7 => 'redirect',
      8 => 'group_add',
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
  $export['group_only_published|node|campaign|form'] = $field_group;

  return $export;
}
