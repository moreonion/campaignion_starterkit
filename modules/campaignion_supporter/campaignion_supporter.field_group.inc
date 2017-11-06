<?php
/**
 * @file
 * campaignion_supporter.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function campaignion_supporter_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_mp_data|redhen_contact|contact|form';
  $field_group->group_name = 'group_mp_data';
  $field_group->entity_type = 'redhen_contact';
  $field_group->bundle = 'contact';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'MP data',
    'weight' => '41',
    'children' => array(
      0 => 'mp_country',
      1 => 'mp_party',
      2 => 'mp_salutation',
      3 => 'mp_constituency',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-mp-data field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_mp_data|redhen_contact|contact|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('MP data');

  return $field_groups;
}
