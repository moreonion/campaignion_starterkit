<?php

/**
 * @file
 * campaignion_donation_type.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function campaignion_donation_type_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__donation';
  $strongarm->value = array(
    'extra_fields' => array(
      'display' => array(
        'language' => array(
          'cck_blocks' => array(
            'visible' => FALSE,
            'weight' => '5',
          ),
          'default' => array(
            'visible' => FALSE,
            'weight' => '5',
          ),
          'teaser' => array(
            'visible' => FALSE,
            'weight' => '4',
          ),
        ),
        'webform' => array(
          'cck_blocks' => array(
            'visible' => TRUE,
            'weight' => '3',
          ),
          'default' => array(
            'visible' => FALSE,
            'weight' => '4',
          ),
          'teaser' => array(
            'visible' => FALSE,
            'weight' => '6',
          ),
        ),
      ),
      'form' => array(
        'language' => array(
          'weight' => '0',
        ),
        'metatags' => array(
          'weight' => '7',
        ),
        'path' => array(
          'weight' => '7',
        ),
        'redirect' => array(
          'weight' => '4',
        ),
        'title' => array(
          'weight' => '1',
        ),
        'webform_template' => array(
          'weight' => '10',
        ),
        'xmlsitemap' => array(
          'weight' => '12',
        ),
      ),
    ),
    'view_modes' => array(
      'cck_blocks' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
  );
  $export['field_bundle_settings_node__donation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_extended_donation';
  $strongarm->value = '1';
  $export['i18n_node_extended_donation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_options_donation';
  $strongarm->value = array(
    0 => 'current',
    1 => 'required',
  );
  $export['i18n_node_options_donation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_donation';
  $strongarm->value = 2;
  $export['language_content_type_donation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_donation';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_donation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_donation';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_donation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_donation';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_donation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_donation';
  $strongarm->value = '0';
  $export['node_preview_donation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_donation';
  $strongarm->value = 0;
  $export['node_submitted_donation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'webform_node_donation';
  $strongarm->value = 1;
  $export['webform_node_donation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_settings_node_donation';
  $strongarm->value = array(
    'priority' => '0.5',
    'status' => '1',
  );
  $export['xmlsitemap_settings_node_donation'] = $strongarm;

  return $export;
}
