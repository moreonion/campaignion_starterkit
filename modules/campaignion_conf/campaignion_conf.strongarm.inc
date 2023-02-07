<?php

/**
 * @file
 * campaignion_conf.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function campaignion_conf_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'blockify_blocks';
  $strongarm->value = array(
    'blockify-actions' => 0,
    'blockify-breadcrumb' => 'blockify-breadcrumb',
    'blockify-feed-icons' => 'blockify-feed-icons',
    'blockify-logo' => 'blockify-logo',
    'blockify-messages' => 'blockify-messages',
    'blockify-page-title' => 'blockify-page-title',
    'blockify-site-name' => 'blockify-site-name',
    'blockify-site-slogan' => 'blockify-site-slogan',
    'blockify-tabs' => 0,
  );
  $export['blockify_blocks'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cck_blocks_field_form_intro_block_availability';
  $strongarm->value = 2;
  $export['cck_blocks_field_form_intro_block_availability'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cck_blocks_field_main_image_block_availability';
  $strongarm->value = 2;
  $export['cck_blocks_field_main_image_block_availability'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cck_blocks_pgbar_default_block_availability';
  $strongarm->value = 2;
  $export['cck_blocks_pgbar_default_block_availability'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'clientside_validation_default_settings';
  $strongarm->value = array(
    'error' => array(
      'error_element' => 'label',
      'prefix' => '',
      'scroll_speed' => '1000',
      'scrollto_errormessage' => 1,
      'suffix' => '',
    ),
    'error_placement' => array(
      'custom_error_function' => 'campaignion_foundation_errors',
      'error_placement_default' => '7',
      'jquery_selector' => '',
    ),
    'include_hidden' => array(
      'include_hidden' => '',
      'include_hidden_fields' => 0,
      'validate_tabs' => 0,
    ),
    'validate_options' => array(
      'captcha' => 1,
      'disable_html5' => 1,
      'show_messages' => '0',
      'validate_before_ajax' => '1',
      'validate_onblur' => '1',
      'validate_onblur_always' => '1',
      'validate_onkeyup' => '1',
      'validate_onsubmit' => '1',
    ),
  );
  $export['clientside_validation_default_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_hide_translation_links';
  $strongarm->value = 1;
  $export['i18n_hide_translation_links'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_default_language_none';
  $strongarm->value = '1';
  $export['i18n_node_default_language_none'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'payment_debug';
  $strongarm->value = 0;
  $export['payment_debug'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'redhen_admin_path';
  $strongarm->value = 1;
  $export['redhen_admin_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'share_light_email_message_message';
  $strongarm->value = '[share:sender] thought you would like to see this page from the [site:name] web site.';
  $export['share_light_email_message_message'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'share_light_email_message_message_format';
  $strongarm->value = 'plain_text';
  $export['share_light_email_message_message_format'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_admin_role';
  $strongarm->value = '3';
  $export['user_admin_role'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'webform_default_format';
  $strongarm->value = '1';
  $export['webform_default_format'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'webform_disabled_components';
  $strongarm->value = array(
    0 => 'grid',
  );
  $export['webform_disabled_components'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'webform_email_address_individual';
  $strongarm->value = 1;
  $export['webform_email_address_individual'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'webform_email_html_capable';
  $strongarm->value = 1;
  $export['webform_email_html_capable'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'webform_submission_access_control';
  $strongarm->value = 0;
  $export['webform_submission_access_control'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'webform_table';
  $strongarm->value = 1;
  $export['webform_table'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'webform_template_dest';
  $strongarm->value = array(
    'donation' => 'donation',
    'email_to_target' => 'email_to_target',
    'match_to_target' => 'match_to_target',
    'petition' => 'petition',
    'webform' => 'webform',
  );
  $export['webform_template_dest'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'webform_template_src';
  $strongarm->value = array(
    'donation' => 'donation',
    'email_to_target' => 'email_to_target',
    'match_to_target' => 'match_to_target',
    'petition' => 'petition',
    'webform' => 'webform',
  );
  $export['webform_template_src'] = $strongarm;

  return $export;
}
