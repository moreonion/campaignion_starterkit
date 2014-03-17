<?php
/**
 * @file
 * campaignion_flexible_form.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function campaignion_flexible_form_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-webform-body'
  $field_instances['node-webform-body'] = array(
    'bundle' => 'webform',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'cck_blocks' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'node',
    'exclude_cv' => 0,
    'field_name' => 'body',
    'label' => 'Main text',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'display_summary' => 1,
      'exclude_cv' => FALSE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 220,
    ),
  );

  // Exported field_instance: 'node-webform-field_intro'
  $field_instances['node-webform-field_intro'] = array(
    'bundle' => 'webform',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'cck_blocks' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'exclude_cv' => 0,
    'field_name' => 'field_intro',
    'label' => 'Introduction',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'exclude_cv' => FALSE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-webform-field_main_image'
  $field_instances['node-webform-field_main_image'] = array(
    'bundle' => 'webform',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'cck_blocks' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'file_entity',
        'settings' => array(
          'file_view_mode' => 'default',
        ),
        'type' => 'file_rendered',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'file_entity',
        'settings' => array(
          'file_view_mode' => 'media_small',
        ),
        'type' => 'file_rendered',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'exclude_cv' => 0,
    'field_name' => 'field_main_image',
    'label' => 'Large image or video',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'custom_add_another' => '',
      'default_image' => 0,
      'exclude_cv' => FALSE,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg mp4 flv mov wma mpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'media',
      'settings' => array(
        'allowed_schemes' => array(
          'public' => 'public',
          'vimeo' => 'vimeo',
          'youtube' => 'youtube',
        ),
        'allowed_types' => array(
          'audio' => 0,
          'default' => 0,
          'image' => 'image',
          'video' => 'video',
        ),
        'progress_indicator' => 'throbber',
        'browser_plugins' => array(
          'upload' => 'upload',
          'media_default--media_browser_1' => 'media_default--media_browser_1',
          'media_default--media_browser_my_files' => 'media_default--media_browser_my_files',
          'media_internet' => 'media_internet',
        ),
      ),
      'type' => 'media_generic',
      'weight' => -10,
    ),
  );

  // Exported field_instance: 'node-webform-field_reference_to_campaign'
  $field_instances['node-webform-field_reference_to_campaign'] = array(
    'bundle' => 'webform',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'cck_blocks' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'node',
    'exclude_cv' => 0,
    'field_name' => 'field_reference_to_campaign',
    'label' => 'Related campaign',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'exclude_cv' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-webform-field_show_recent_supporters'
  $field_instances['node-webform-field_show_recent_supporters'] = array(
    'bundle' => 'webform',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
      ),
    ),
    'entity_type' => 'node',
    'exclude_cv' => 0,
    'field_name' => 'recent_supporters',
    'label' => 'Display a recent supporters box.',
    'required' => 0,
    'settings' => array(),
    'widget' => array(
      'active' => 1,
      'module' => 'campaignion_recent_supporters',
      'settings' => array(),
      'type' => 'recent_supporters',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-webform-field_thank_you_pages'
  $field_instances['node-webform-field_thank_you_pages'] = array(
    'bundle' => 'webform',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'cck_blocks' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'node',
    'exclude_cv' => 0,
    'field_name' => 'field_thank_you_pages',
    'label' => 'Thank you pages',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'exclude_cv' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_reference_or_redirect',
      'settings' => array(),
      'type' => 'reference_or_redirect_widget',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-webform-field_webform_pgbar'
  $field_instances['node-webform-field_webform_pgbar'] = array(
    'bundle' => 'webform',
    'default_value' => array(
      0 => array(
        'target' => 100,
      ),
    ),
    'deleted' => 0,
    'description' => 'Display a progress bar for your webform.',
    'display' => array(
      'cck_blocks' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'pgbar',
        'settings' => array(),
        'type' => 'pgbar',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'pgbar',
        'settings' => array(),
        'type' => 'pgbar',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'pgbar_default',
    'label' => 'Progress bar',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'exclude_cv' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'pgbar',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'pgbar',
      'weight' => 230,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Display a progress bar for your webform.');
  t('Introduction');
  t('Large image or video');
  t('Main text');
  t('Progress bar');
  t('Related campaign');
  t('Display a recent supporters box.');
  t('Thank you pages');

  return $field_instances;
}
