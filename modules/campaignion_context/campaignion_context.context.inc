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
  $context->name = 'region_content_bottom_default';
  $context->description = 'Default context for region content_bottom';
  $context->tag = 'default';
  $context->conditions = array(
    'context' => array(
      'values' => array(
        '~region_content_bottom_default' => '~region_content_bottom_default',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Default context for region content_bottom');
  t('default');
  $export['region_content_bottom_default'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'region_content_default';
  $context->description = 'Default context for region content';
  $context->tag = 'default';
  $context->conditions = array(
    'context' => array(
      'values' => array(
        '~region_content_overwrite*' => '~region_content_overwrite*',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Default context for region content');
  t('default');
  $export['region_content_default'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'region_content_top_default';
  $context->description = 'Default context for region content_top';
  $context->tag = 'default';
  $context->conditions = array(
    'context' => array(
      'values' => array(
        '~region_content_top_overwrite*' => '~region_content_top_overwrite*',
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
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Default context for region content_top');
  t('default');
  $export['region_content_top_default'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'region_featured_default';
  $context->description = 'Default context for region featured';
  $context->tag = 'default';
  $context->conditions = array(
    'context' => array(
      'values' => array(
        '~region_featured_overwrite*' => '~region_featured_overwrite*',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Default context for region featured');
  t('default');
  $export['region_featured_default'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'region_footer_default';
  $context->description = 'Default context for region footer';
  $context->tag = 'default';
  $context->conditions = array(
    'context' => array(
      'values' => array(
        '~region_footer_overwrite*' => '~region_footer_overwrite*',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Default context for region footer');
  t('default');
  $export['region_footer_default'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'region_header_default';
  $context->description = 'Default context for region header';
  $context->tag = 'default';
  $context->conditions = array(
    'context' => array(
      'values' => array(
        '~region_header_overwrite*' => '~region_header_overwrite*',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Default context for region header');
  t('default');
  $export['region_header_default'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'region_highlighted_default';
  $context->description = 'Default context for region highlighted';
  $context->tag = 'default';
  $context->conditions = array(
    'context' => array(
      'values' => array(
        '~region_highlighted_overwrite*' => '~region_highlighted_overwrite*',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Default context for region highlighted');
  t('default');
  $export['region_highlighted_default'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'region_page_bottom_default';
  $context->description = 'Default context for region page_bottom';
  $context->tag = 'default';
  $context->conditions = array(
    'context' => array(
      'values' => array(
        '~region_page_bottom_overwrite*' => '~region_page_bottom_overwrite*',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Default context for region page_bottom');
  t('default');
  $export['region_page_bottom_default'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'region_page_top_default';
  $context->description = 'Default context for region page_top';
  $context->tag = 'default';
  $context->conditions = array(
    'context' => array(
      'values' => array(
        '~region_page_top_overwrite*' => '~region_page_top_overwrite*',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Default context for region page_top');
  t('default');
  $export['region_page_top_default'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'region_sidebar_first_default';
  $context->description = 'Default context for region sidebar_first';
  $context->tag = 'default';
  $context->conditions = array(
    'context' => array(
      'values' => array(
        '~region_sidebar_first_overwrite*' => '~region_sidebar_first_overwrite*',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Default context for region sidebar_first');
  t('default');
  $export['region_sidebar_first_default'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'region_sidebar_second_default';
  $context->description = 'Default context for region sidebar_second';
  $context->tag = 'default';
  $context->conditions = array(
    'context' => array(
      'values' => array(
        '~region_sidebar_second_overwrite*' => '~region_sidebar_second_overwrite*',
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
        'cck_blocks-pgbar_default' => array(
          'module' => 'cck_blocks',
          'delta' => 'pgbar_default',
          'region' => 'sidebar_second',
          'weight' => '-10',
          'title' => '<none>',
        ),
        'webform_block-current' => array(
          'module' => 'webform_block',
          'delta' => 'current',
          'region' => 'sidebar_second',
          'weight' => '-9',
          'title' => '<none>',
        ),
        'recent_supporters-recent_supporters' => array(
          'module' => 'recent_supporters',
          'delta' => 'recent_supporters',
          'region' => 'sidebar_second',
          'weight' => '-8',
          'title' => '<none>',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Default context for region sidebar_second');
  t('default');
  $export['region_sidebar_second_default'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'site_wide';
  $context->description = 'context applied site wide';
  $context->tag = 'Sitewide';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Sitewide');
  t('context applied site wide');
  $export['site_wide'] = $context;

  return $export;
}
