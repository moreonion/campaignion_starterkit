<?php
/**
 * @file
 * campaignion_starterkit.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function campaignion_starterkit_context_default_contexts() {
  $export = array();
  
  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'frontpage';
  $context->description = '';
  $context->tag = 'path triggered';
  $context->conditions['path']['values']['<front>'] = '<front>';
  $context->reactions['block']['blocks']['views-actions-block'] = array(
    'module' => 'views',
    'delta' => 'actions-block',
    'region' => 'content',
    'weight' => '-10',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('path triggered');
  $export['frontpage'] = $context;

  return $export;
}