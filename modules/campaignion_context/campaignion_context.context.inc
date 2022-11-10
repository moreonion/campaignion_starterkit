<?php

/**
 * @file
 * campaignion_context.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function campaignion_context_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'action_pages';
  $context->description = 'Default context for action pages.';
  $context->tag = 'Default';
  $context->conditions = array(
    'context' => array(
      'values' => array(
        '~action_pages_overwrite*' => '~action_pages_overwrite*',
      ),
    ),
    'node' => array(
      'options' => array(
        'node_form' => '0',
      ),
      'values' => array(
        'donation' => 'donation',
        'email_to_target' => 'email_to_target',
        'petition' => 'petition',
        'match_to_target' => 'match_to_target',
        'webform' => 'webform',
      ),
    ),
    'path' => array(
      'values' => array(
        '~node/*/share' => '~node/*/share',
        '~node/*/webform-continue/*' => '~node/*/webform-continue/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'cck_blocks-field_form_intro' => array(
          'delta' => 'field_form_intro',
          'module' => 'cck_blocks',
          'region' => 'sidebar_first',
          'title' => '<none>',
          'weight' => '-10',
        ),
        'cck_blocks-pgbar_default' => array(
          'delta' => 'pgbar_default',
          'module' => 'cck_blocks',
          'region' => 'sidebar_first',
          'title' => '<none>',
          'weight' => '-8',
        ),
        'recent_supporters-recent_supporters' => array(
          'delta' => 'recent_supporters',
          'module' => 'recent_supporters',
          'region' => 'sidebar_second',
          'title' => '<none>',
          'weight' => '-4',
        ),
        'webform_block-current' => array(
          'delta' => 'current',
          'module' => 'webform_block',
          'region' => 'sidebar_first',
          'title' => '<none>',
          'weight' => '-6',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Default');
  t('Default context for action pages.');
  $export['action_pages'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'frontpage';
  $context->description = '';
  $context->tag = 'Path';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-actions_promoted-block' => array(
          'delta' => 'actions_promoted-block',
          'module' => 'views',
          'region' => 'content_bottom',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Path');
  $export['frontpage'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'share_pages';
  $context->description = 'Default context for share and thank-you pages.';
  $context->tag = 'Default';
  $context->conditions = array(
    'context' => array(
      'values' => array(
        '~share_pages_overwrite*' => '~share_pages_overwrite*',
      ),
    ),
    'node' => array(
      'options' => array(
        'node_form' => '0',
      ),
      'values' => array(
        'share_page' => 'share_page',
        'thank_you_page' => 'thank_you_page',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'share_light-current_page' => array(
          'delta' => 'current_page',
          'module' => 'share_light',
          'region' => 'content_bottom',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Default');
  t('Default context for share and thank-you pages.');
  $export['share_pages'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'share_pages_overwrite';
  $context->description = 'Display share block in form container for some layouts.';
  $context->tag = 'Layout';
  $context->conditions = array(
    'campaignion_layout_context_condition_layout' => array(
      'values' => array(
        'cover-2col' => 'cover-2col',
      ),
    ),
    'node' => array(
      'options' => array(
        'node_form' => '0',
      ),
      'values' => array(
        'share_page' => 'share_page',
        'thank_you_page' => 'thank_you_page',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'share_light-current_page' => array(
          'delta' => 'current_page',
          'module' => 'share_light',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Display share block in form container for some layouts.');
  t('Layout');
  $export['share_pages_overwrite'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'site_wide';
  $context->description = 'Default site wide context.';
  $context->tag = 'Default';
  $context->conditions = array(
    'context' => array(
      'values' => array(
        '~site_wide_overwrite*' => '~site_wide_overwrite*',
      ),
    ),
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'cck_blocks-field_main_image' => array(
          'delta' => 'field_main_image',
          'module' => 'cck_blocks',
          'region' => 'content_top',
          'title' => '<none>',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Default');
  t('Default site wide context.');
  $export['site_wide'] = $context;

  return $export;
}
