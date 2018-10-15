<?php
/**
 * @file
 * campaignion_email_protest_type.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function campaignion_email_protest_type_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-email_protest-action_template'.
  $field_instances['node-email_protest-action_template'] = array(
    'bundle' => 'email_protest',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'If this is checked this action will be selectable as a template when creating new actions',
    'display' => array(
      'cck_blocks' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'action_template',
    'label' => 'This is a template',
    'required' => FALSE,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'node-email_protest-body'.
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
        'weight' => 9,
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
      'custom_remove' => '',
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
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-email_protest-field_main_image'.
  $field_instances['node-email_protest-field_main_image'] = array(
    'bundle' => 'email_protest',
    'deleted' => 0,
    'description' => 'Add a large main image or a video to your email protest.',
    'display' => array(
      'cck_blocks' => array(
        'label' => 'hidden',
        'module' => 'file_entity',
        'settings' => array(
          'file_view_mode' => 'default',
        ),
        'type' => 'file_rendered',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'file_entity',
        'settings' => array(
          'file_view_mode' => 'teaser',
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
      'custom_remove' => '',
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
          'media_default--media_browser_1' => 'media_default--media_browser_1',
          'media_default--media_browser_my_files' => 'media_default--media_browser_my_files',
          'media_internet' => 'media_internet',
          'upload' => 'upload',
        ),
        'progress_indicator' => 'throbber',
      ),
      'type' => 'media_generic',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-email_protest-field_protest_target'.
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
        'weight' => 11,
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
      'custom_remove' => '',
      'exclude_cv' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'campaignion_protest_target',
      'settings' => array(),
      'type' => 'email_protest_target',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-email_protest-field_protest_target_options'.
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
        'weight' => 8,
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
      'custom_remove' => '',
      'exclude_cv' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-email_protest-field_reference_to_campaign'.
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
        'weight' => 7,
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
      'custom_remove' => '',
      'exclude_cv' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-email_protest-field_thank_you_pages'.
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
        'weight' => 4,
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
      'custom_remove' => '',
      'exclude_cv' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_reference_or_redirect',
      'settings' => array(),
      'type' => 'reference_or_redirect_widget',
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'node-email_protest-opengraph_meta_image'.
  $field_instances['node-email_protest-opengraph_meta_image'] = array(
    'bundle' => 'email_protest',
    'custom_add_another' => '',
    'custom_remove' => '',
    'deleted' => 0,
    'description' => 'Add an image to be shown on your social media teasers.',
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
        'weight' => 13,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'opengraph_meta_image',
    'label' => 'Open Graph image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'custom_add_another' => '',
      'custom_remove' => '',
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '200x200',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'media',
      'settings' => array(
        'allowed_schemes' => array(
          'public' => 'public',
          'vimeo' => 0,
          'youtube' => 0,
        ),
        'allowed_types' => array(
          'audio' => 0,
          'document' => 0,
          'image' => 'image',
          'video' => 0,
        ),
        'browser_plugins' => array(
          'media_default--media_browser_1' => 'media_default--media_browser_1',
          'media_default--media_browser_my_files' => 0,
          'media_internet' => 0,
          'upload' => 'upload',
          'youtube' => 0,
        ),
        'progress_indicator' => 'throbber',
      ),
      'type' => 'media_generic',
      'weight' => 15,
    ),
  );

  // Exported field_instance: 'node-email_protest-pgbar_default'.
  $field_instances['node-email_protest-pgbar_default'] = array(
    'bundle' => 'email_protest',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => array(
      0 => array(
        'state' => 1,
        'options' => array(
          'display' => array(
            'template' => 'pgbar',
          ),
          'pgbar_default__und__0__options__active_tab' => 'edit-pgbar-default-und-0-options-display',
          'target' => array(
            'offset' => 0,
            'target' => array(
              0 => 500,
              1 => 1000,
              2 => 5000,
              3 => 10000,
              4 => 25000,
              5 => 50000,
            ),
            'threshold' => 90,
          ),
          'texts' => array(
            'full_intro_message' => 'Thanks for your support!',
            'full_status_message' => 'We’ve reached our goal of !target emails.',
            'intro_message' => 'We have to send !target emails to win this campaign.',
            'status_message' => '!current of !target emails have been sent. Will you help us send another !needed?',
          ),
        ),
      ),
    ),
    'deleted' => 0,
    'description' => 'Display a counter, like a progress bar or thermometer showing how many people have signed this email protest.',
    'display' => array(
      'cck_blocks' => array(
        'label' => 'hidden',
        'module' => 'pgbar',
        'settings' => array(),
        'type' => 'pgbar',
        'weight' => 1,
      ),
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
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
    'label' => 'Counter',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'source' => 'webform_submission_count',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'pgbar',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'pgbar',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-email_protest-recent_supporters'.
  $field_instances['node-email_protest-recent_supporters'] = array(
    'bundle' => 'email_protest',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => array(
      0 => array(
        'toggle' => 1,
        'options' => array(
          'country_toggle' => 0,
          'cycle_toggle' => 1,
          'visible_count' => 6,
        ),
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'cck_blocks' => array(
        'label' => 'hidden',
        'module' => 'recent_supporters',
        'settings' => array(),
        'type' => 'recent_supporters',
        'weight' => 3,
      ),
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
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
    'field_name' => 'recent_supporters',
    'label' => 'Display a recent supporters box.',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'recent_supporters',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'recent_supporters',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-email_protest-supporter_tags'.
  $field_instances['node-email_protest-supporter_tags'] = array(
    'bundle' => 'email_protest',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Supporters submitting this form will be automatically tagged with these tags.',
    'display' => array(
      'cck_blocks' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'supporter_tags',
    'label' => 'Tag supporters',
    'required' => FALSE,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 10,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Add a large main image or a video to your email protest.');
  t('Add an image to be shown on your social media teasers.');
  t('Add your protest target to the list');
  t('Body');
  t('Counter');
  t('Display a counter, like a progress bar or thermometer showing how many people have signed this email protest.');
  t('Display a recent supporters box.');
  t('If this is checked this action will be selectable as a template when creating new actions');
  t('Large image or video');
  t('Open Graph image');
  t('Related campaign');
  t('Supporters submitting this form will be automatically tagged with these tags.');
  t('Tag supporters');
  t('Thank you pages');
  t('This is a template');
  t('Who will be targeted by this protest');
  t('You can specify 1 or more protest targets (name and email address) that will be the target person(s) of this email protest (they will receive the emails)');

  return $field_instances;
}
