<?php

/**
 * @file
 * campaignion_share_page.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function campaignion_share_page_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_advanced_settings|node|share_page|form';
  $field_group->group_name = 'group_advanced_settings';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'share_page';
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
    'weight' => '8',
  );
  $field_groups['group_advanced_settings|node|share_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content|node|share_page|form';
  $field_group->group_name = 'group_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'share_page';
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
    'weight' => '5',
  );
  $field_groups['group_content|node|share_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_overlay_options|node|share_page|form';
  $field_group->group_name = 'group_overlay_options';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'share_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'group_overlay',
    ),
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'classes' => 'group-overlay-options field-group-fieldset field-group-heading',
        'description' => '',
        'id' => '',
        'required_fields' => 1,
      ),
      'label' => 'Overlay options',
    ),
    'format_type' => 'fieldset',
    'label' => 'Overlay options',
    'weight' => '7',
  );
  $field_groups['group_overlay_options|node|share_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_overlay|node|share_page|form';
  $field_group->group_name = 'group_overlay';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'share_page';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_overlay_options';
  $field_group->data = array(
    'children' => array(
      0 => 'campaignion_overlay_options',
    ),
    'format_settings' => array(
      'formatter' => 'collapsed',
      'instance_settings' => array(
        'classes' => 'group-overlay field-group-fieldset',
        'description' => '',
        'id' => '',
        'required_fields' => 1,
      ),
      'label' => 'Overlay',
    ),
    'format_type' => 'fieldset',
    'label' => 'Overlay',
    'weight' => '7',
  );
  $field_groups['group_overlay|node|share_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_share_block|node|share_page|form';
  $field_group->group_name = 'group_share_block';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'share_page';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_share';
  $field_group->data = array(
    'children' => array(
      0 => 'share_light',
    ),
    'format_settings' => array(
      'formatter' => 'collapsed',
      'instance_settings' => array(
        'classes' => 'group-share-block field-group-fieldset',
        'description' => '',
        'required_fields' => 1,
      ),
      'label' => 'Share block',
    ),
    'format_type' => 'fieldset',
    'label' => 'Share block',
    'weight' => '10',
  );
  $field_groups['group_share_block|node|share_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_share|node|share_page|form';
  $field_group->group_name = 'group_share';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'share_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'group_share_block',
    ),
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'classes' => 'group-share field-group-fieldset field-group-heading',
        'description' => '',
        'required_fields' => 1,
      ),
      'label' => 'Share options',
    ),
    'format_type' => 'fieldset',
    'label' => 'Share options',
    'weight' => '6',
  );
  $field_groups['group_share|node|share_page|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Advanced settings');
  t('Content');
  t('Overlay');
  t('Overlay options');
  t('Share block');
  t('Share options');

  return $field_groups;
}
