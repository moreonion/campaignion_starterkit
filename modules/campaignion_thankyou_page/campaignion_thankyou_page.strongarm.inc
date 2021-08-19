<?php

/**
 * @file
 * campaignion_thankyou_page.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function campaignion_thankyou_page_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__thank_you_page';
  $strongarm->value = array(
    'extra_fields' => array(
      'display' => array(
        'language' => array(
          'cck_blocks' => array(
            'visible' => FALSE,
            'weight' => '0',
          ),
          'default' => array(
            'visible' => FALSE,
            'weight' => '5',
          ),
          'teaser' => array(
            'visible' => FALSE,
            'weight' => '2',
          ),
        ),
      ),
      'form' => array(
        'language' => array(
          'weight' => '0',
        ),
        'metatags' => array(
          'weight' => '10',
        ),
        'path' => array(
          'weight' => '6',
        ),
        'redirect' => array(
          'weight' => '9',
        ),
        'title' => array(
          'weight' => '1',
        ),
        'xmlsitemap' => array(
          'weight' => '7',
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
  $export['field_bundle_settings_node__thank_you_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_extended_thank_you_page';
  $strongarm->value = '1';
  $export['i18n_node_extended_thank_you_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_options_thank_you_page';
  $strongarm->value = array(
    0 => 'current',
    1 => 'required',
  );
  $export['i18n_node_options_thank_you_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_thank_you_page';
  $strongarm->value = 2;
  $export['language_content_type_thank_you_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_thank_you_page';
  $strongarm->value = array();
  $export['menu_options_thank_you_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_thank_you_page';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_thank_you_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_thank_you_page';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_thank_you_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_thank_you_page';
  $strongarm->value = '0';
  $export['node_preview_thank_you_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_thank_you_page';
  $strongarm->value = 0;
  $export['node_submitted_thank_you_page'] = $strongarm;

  return $export;
}
