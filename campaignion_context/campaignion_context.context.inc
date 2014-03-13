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
  $context->name = 'current_webform_embedded';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'context_get' => array(
      'values' => array(
        'embed=1' => 'embed=1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'cck_blocks-pgbar_default' => array(
          'module' => 'cck_blocks',
          'delta' => 'pgbar_default',
          'region' => 'widget',
          'weight' => '-19',
        ),
        'webform_block-current' => array(
          'module' => 'webform_block',
          'delta' => 'current',
          'region' => 'widget',
          'weight' => '-18',
        ),
      ),
    ),
    'theme_html' => array(
      'class' => 'embedded-webform no-aetoolbar',
    ),
  );
  $context->condition_mode = 0;
  $export['current_webform_embedded'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'donation_form';
  $context->description = '';
  $context->tag = 'theme';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'donation' => 'donation',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('theme');
  $export['donation_form'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'landing_page';
  $context->description = '';
  $context->tag = 'theme';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'donation' => 'donation',
        'petition' => 'petition',
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
        'cck_blocks-field_background_info' => array(
          'module' => 'cck_blocks',
          'delta' => 'field_background_info',
          'region' => 'header',
          'weight' => '-10',
        ),
        'cck_blocks-field_read_more_link_text' => array(
          'module' => 'cck_blocks',
          'delta' => 'field_read_more_link_text',
          'region' => 'header',
          'weight' => '-10',
        ),
        'cck_blocks-body' => array(
          'module' => 'cck_blocks',
          'delta' => 'body',
          'region' => 'content_top',
          'weight' => '-10',
        ),
        'cck_blocks-field_main_image' => array(
          'module' => 'cck_blocks',
          'delta' => 'field_main_image',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'cck_blocks-field_donation_pgbar' => array(
          'module' => 'cck_blocks',
          'delta' => 'field_donation_pgbar',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
        'cck_blocks-field_logo_area' => array(
          'module' => 'cck_blocks',
          'delta' => 'field_logo_area',
          'region' => 'sidebar_second',
          'weight' => '9',
        ),
        'campaignion_views_interface-who_signed_module' => array(
          'module' => 'campaignion_views_interface',
          'delta' => 'who_signed_module',
          'region' => 'sidebar_second',
          'weight' => '10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('theme');
  $export['landing_page'] = $context;

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
  $context->reactions = array();
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
  $context->name = 'region_header_overwrite_landing';
  $context->description = '';
  $context->tag = 'Landing page';
  $context->conditions = array(
    'context' => array(
      'values' => array(
        'landing_page' => 'landing_page',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Landing page');
  $export['region_header_overwrite_landing'] = $context;

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
  );
  $context->reactions = array();
  $context->condition_mode = 0;

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
