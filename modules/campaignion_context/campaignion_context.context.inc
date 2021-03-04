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
      'values' => array(
        'email_to_target' => 'email_to_target',
        'petition' => 'petition',
        'webform' => 'webform',
        'donation' => 'donation',
      ),
      'options' => array(
        'node_form' => '0',
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
          'module' => 'cck_blocks',
          'delta' => 'field_form_intro',
          'region' => 'sidebar_first',
          'weight' => '-10',
          'title' => '<none>',
        ),
        'cck_blocks-pgbar_default' => array(
          'module' => 'cck_blocks',
          'delta' => 'pgbar_default',
          'region' => 'sidebar_first',
          'weight' => '-8',
          'title' => '<none>',
        ),
        'webform_block-current' => array(
          'module' => 'webform_block',
          'delta' => 'current',
          'region' => 'sidebar_first',
          'weight' => '-6',
          'title' => '<none>',
        ),
        'recent_supporters-recent_supporters' => array(
          'module' => 'recent_supporters',
          'delta' => 'recent_supporters',
          'region' => 'sidebar_second',
          'weight' => '-4',
          'title' => '<none>',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Default context for action pages.');
  t('Default');
  $export['action_pages'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'action_pages_overwrite_cover_2col_layout';
  $context->description = 'Place blocks differently for actions using cover-2col layout.';
  $context->tag = 'Layout';
  $context->conditions = array(
    'campaignion_layout_context_condition_layout' => array(
      'values' => array(
        'cover-2col' => 'cover-2col',
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
        'recent_supporters-recent_supporters' => array(
          'module' => 'recent_supporters',
          'delta' => 'recent_supporters',
          'region' => 'content_bottom',
          'weight' => '-2',
          'title' => '',
        ),
        'cck_blocks-field_form_intro' => array(
          'module' => 'cck_blocks',
          'delta' => 'field_form_intro',
          'region' => 'sidebar_second',
          'weight' => '-10',
          'title' => '<none>',
        ),
        'cck_blocks-pgbar_default' => array(
          'module' => 'cck_blocks',
          'delta' => 'pgbar_default',
          'region' => 'sidebar_second',
          'weight' => '-8',
          'title' => '<none>',
        ),
        'webform_block-current' => array(
          'module' => 'webform_block',
          'delta' => 'current',
          'region' => 'sidebar_second',
          'weight' => '-6',
          'title' => '<none>',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Layout');
  t('Place blocks differently for actions using cover-2col layout.');
  $export['action_pages_overwrite_cover_2col_layout'] = $context;

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
        'views-actions-block' => array(
          'module' => 'views',
          'delta' => 'actions-block',
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
      'values' => array(
        'share_page' => 'share_page',
        'thank_you_page' => 'thank_you_page',
      ),
      'options' => array(
        'node_form' => '0',
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
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Default context for share and thank-you pages.');
  t('Default');
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
      'values' => array(
        'share_page' => 'share_page',
        'thank_you_page' => 'thank_you_page',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'share_light-current_page' => array(
          'module' => 'share_light',
          'delta' => 'current_page',
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
          'module' => 'cck_blocks',
          'delta' => 'field_main_image',
          'region' => 'content_top',
          'weight' => '-10',
          'title' => '<none>',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Default site wide context.');
  t('Default');
  $export['site_wide'] = $context;

  return $export;
}
