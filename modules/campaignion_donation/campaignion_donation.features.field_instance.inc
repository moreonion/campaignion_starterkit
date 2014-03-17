<?php
/**
 * @file
 * campaignion_donation.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function campaignion_donation_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-donation-body'
  $field_instances['node-donation-body'] = array(
    'bundle' => 'donation',
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
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'exclude_cv' => 0,
    'field_name' => 'body',
    'label' => 'Body',
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

  // Exported field_instance: 'node-donation-field_donation_pgbar'
  $field_instances['node-donation-pgbar_default'] = array(
    'bundle' => 'donation',
    'default_value' => array(
      0 => array(
        'state' => 1,
        'options' => array(
          'display' => array(
            'template' => '',
          ),
          'pgbar_default__und__0__options__active_tab' => 'edit-pgbar-default-und-0-options-target',
          'target' => array(
            'offset' => 0,
            'target' => '1000,10000',
            'threshold' => 90,
          ),
          'texts' => array(
            'full_intro_message' => 'Thanks for your support!',
            'full_status_message' => 'We\'ve reached our goal of !target supports.',
            'intro_message' => 'We need !target signatures.',
            'status_message' => 'Already !current of !target signed the petition.',
          ),
        ),
      ),
    ),
    'deleted' => 0,
    'description' => 'Display a progress bar for your donation.',
    'display' => array(
      'cck_blocks' => array(
        'label' => 'hidden',
        'module' => 'pgbar',
        'settings' => array(),
        'type' => 'pgbar',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'pgbar',
        'settings' => array(),
        'type' => 'pgbar',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'exclude_cv' => 0,
    'field_name' => 'pgbar_default',
    'label' => 'Progress bar',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'exclude_cv' => FALSE,
      'source' => 'webform_submissions.inc',
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

  // Exported field_instance: 'node-donation-field_logo_area'
  $field_instances['node-donation-field_logo_area'] = array(
    'bundle' => 'donation',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'gets displayed in the sidebar.',
    'display' => array(
      'cck_blocks' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
    ),
    'entity_type' => 'node',
    'exclude_cv' => 0,
    'field_name' => 'field_logo_area',
    'label' => 'Short Info',
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
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'node-donation-field_main_image'
  $field_instances['node-donation-field_main_image'] = array(
    'bundle' => 'donation',
    'deleted' => 0,
    'description' => 'Add a large main image or a video to your donation.',
    'display' => array(
      'cck_blocks' => array(
        'label' => 'hidden',
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
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'file_entity',
        'settings' => array(
          'file_view_mode' => 'media_preview',
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
      'file_extensions' => 'png gif jpg jpeg mp4 mpeg flv mov wma',
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
        'browser_plugins' => array(
          'upload' => 'upload',
          'media_default--media_browser_1' => 'media_default--media_browser_1',
          'media_default--media_browser_my_files' => 'media_default--media_browser_my_files',
          'media_internet' => 'media_internet',
        ),
        'progress_indicator' => 'throbber',
      ),
      'type' => 'media_generic',
      'weight' => -10,
    ),
  );

  // Exported field_instance: 'node-donation-field_reference_to_campaign'
  $field_instances['node-donation-field_reference_to_campaign'] = array(
    'bundle' => 'donation',
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
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'exclude_cv' => 0,
    'field_name' => 'field_reference_to_campaign',
    'label' => 'Reference to campaign',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'exclude_cv' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'autocomplete_match' => 'contains',
        'autocomplete_path' => 'node_reference/autocomplete',
        'size' => 60,
      ),
      'type' => 'options_select',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-donation-field_show_recent_supporters'
  $field_instances['node-donation-field_show_recent_supporters'] = array(
    'bundle' => 'donation',
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

  // Exported field_instance: 'node-donation-field_thank_you_pages'
  $field_instances['node-donation-field_thank_you_pages'] = array(
    'bundle' => 'donation',
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
        'module' => 'field_reference_or_redirect',
        'settings' => array(),
        'type' => 'reference_or_redirect_formatter',
        'weight' => 3,
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
      'weight' => 8,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Add a large main image or a video to your donation.');
  t('Background info');
  t('Body');
  t('Display a progress bar for your donation.');
  t('Large image or video');
  t('Progress bar');
  t('Read more link text');
  t('Reference to campaign');
  t('Short Info');
  t('Thank you pages');
  t('Display a recent supporters box.');
  t('gets displayed in the sidebar.');

  return $field_instances;
}
