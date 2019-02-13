<?php

/**
 * @file
 * campaignion_thankyou_page.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function campaignion_thankyou_page_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'thank_you_page';
  $context->description = '';
  $context->tag = 'theme';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'thank_you_page' => 'thank_you_page',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'share_light-current_page' => array(
          'module' => 'share_light',
          'delta' => 'current_page',
          'region' => 'content_bottom',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('theme');
  $export['thank_you_page'] = $context;

  return $export;
}
