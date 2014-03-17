<?php
/**
 * @file
 * campaignion_email_protest.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function campaignion_email_protest_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-email_protest-body'
  $field_instances['node-email_protest-body'] = array(
    'bundle' => 'email_protest',
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
          'trim_length' => 400,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => FALSE,
    'settings' => array(
      'custom_add_another' => '',
      'display_summary' => TRUE,
      'exclude_cv' => FALSE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 220,
    ),
  );

  // Exported field_instance: 'node-email_protest-pgbar_default'
  $field_instances['node-email_protest-pgbar_default'] = array(
    'bundle' => 'email_protest',
    'default_value' => array(
      0 => array(
        'state' => 1,
        'options' => array(
          'display' => array(
            'template' => 'pgbar',
          ),
          'pgbar_default__und__0__options__active_tab' => 'edit-pgbar-default-und-0-options-texts',
          'target' => array(
            'offset' => 0,
            'target' => '500,2000,5000,10000,20000',
            'threshold' => 90,
          ),
          'texts' => array(
            'full_intro_message' => 'Thanks for your support!',
            'full_status_message' => 'We\'ve reached our goal of !target emails.',
            'intro_message' => 'We have to send !target emails to succeed.',
            'status_message' => 'Already !current of !target emails have been sent.',
          ),
        ),
      ),
    ),
    'deleted' => 0,
    'description' => 'Display a progress bar for your email protest.',
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

  // Exported field_instance: 'node-email_protest-field_main_image'
  $field_instances['node-email_protest-field_main_image'] = array(
    'bundle' => 'email_protest',
    'deleted' => 0,
    'description' => 'Add a large main image or a video to your email protest.',
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
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'file_entity',
        'settings' => array(
          'file_view_mode' => 'media_small',
        ),
        'type' => 'file_rendered',
        'weight' => 0,
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

  // Exported field_instance: 'node-email_protest-field_protest_target'
  $field_instances['node-email_protest-field_protest_target'] = array(
    'bundle' => 'email_protest',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'You can specify 1 or more protest targets (name and email address) that will be the target person(s) of this email protest (they will receive the emails)',
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
    'field_name' => 'field_protest_target',
    'label' => 'Add your protest target to the list',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => 'Add another target',
      'exclude_cv' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'campaignion_protest_target',
      'settings' => array(),
      'type' => 'email_protest_target',
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'node-email_protest-field_protest_target_options'
  $field_instances['node-email_protest-field_protest_target_options'] = array(
    'bundle' => 'email_protest',
    'default_value' => array(
      0 => array(
        'value' => 'preselect',
      ),
    ),
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
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
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
    'field_name' => 'field_protest_target_options',
    'label' => 'Who will be targeted by this protest',
    'required' => 1,
    'settings' => array(
      'custom_add_another' => '',
      'exclude_cv' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'node-email_protest-field_reference_to_campaign'
  $field_instances['node-email_protest-field_reference_to_campaign'] = array(
    'bundle' => 'email_protest',
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

  // Exported field_instance: 'node-email_protest-field_show_recent_supporters'
  $field_instances['node-email_protest-field_show_recent_supporters'] = array(
    'bundle' => 'email_protest',
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

  // Exported field_instance: 'node-email_protest-field_thank_you_pages'
  $field_instances['node-email_protest-field_thank_you_pages'] = array(
    'bundle' => 'email_protest',
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
        'weight' => 7,
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
      'weight' => 11,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Add a large main image or a video to your email protest.');
  t('Add your protest target to the list');
  t('Body');
  t('Display a progress bar for your email protest.');
  t('Large image or video');
  t('Progress bar');
  t('Related campaign');
  t('Display a recent supporters box.');
  t('Thank you pages');
  t('Who will be targeted by this protest');
  t('You can specify 1 or more protest targets (name and email address) that will be the target person(s) of this email protest (they will receive the emails)');

  return $field_instances;
}
