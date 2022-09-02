<?php

/**
 * @file
 * campaignion_email_to_target_type.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function campaignion_email_to_target_type_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-email_to_target-action_template'.
  $field_instances['node-email_to_target-action_template'] = array(
    'bundle' => 'email_to_target',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'If this is checked this action will be selectable as a template when creating new actions',
    'display' => array(
      'cck_blocks' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
      'default' => array(
        'label' => 'above',
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

  // Exported field_instance: 'node-email_to_target-body'.
  $field_instances['node-email_to_target-body'] = array(
    'bundle' => 'email_to_target',
    'default_value' => NULL,
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
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
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
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-email_to_target-field_admin_title'.
  $field_instances['node-email_to_target-field_admin_title'] = array(
    'bundle' => 'email_to_target',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => array(
      0 => array(
        'value' => '',
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
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 16,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_admin_title',
    'label' => 'Internal page title',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'node-email_to_target-field_email_to_target_options'.
  $field_instances['node-email_to_target-field_email_to_target_options'] = array(
    'bundle' => 'email_to_target',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => array(
      0 => array(
        'dataset_name' => 'mp',
        'users_may_edit' => 1,
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
    'field_name' => 'field_email_to_target_options',
    'label' => 'Options',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'campaignion_email_to_target',
      'settings' => array(),
      'type' => 'email_to_target_options',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-email_to_target-field_form_intro'.
  $field_instances['node-email_to_target-field_form_intro'] = array(
    'bundle' => 'email_to_target',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => array(
      0 => array(
        'value' => '',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'cck_blocks' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 15,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_form_intro',
    'label' => 'Form intro',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
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
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-email_to_target-field_main_image'.
  $field_instances['node-email_to_target-field_main_image'] = array(
    'bundle' => 'email_to_target',
    'custom_add_another' => '',
    'custom_remove' => '',
    'deleted' => 0,
    'description' => 'Add a large main image or a video to your email_to_target.',
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
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_main_image',
    'label' => 'Main image or video',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'custom_add_another' => '',
      'custom_remove' => '',
      'default_image' => 0,
      'exclude_cv' => FALSE,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg mp4 mpeg flv mov wma',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
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
          'document' => 0,
          'image' => 'image',
          'video' => 'video',
        ),
        'browser_plugins' => array(
          'media_default--media_browser_1' => 'media_default--media_browser_1',
          'media_default--media_browser_my_files' => 'media_default--media_browser_my_files',
          'media_internet' => 'media_internet',
          'upload' => 'upload',
        ),
      ),
      'type' => 'media_generic',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-email_to_target-field_no_target_message'.
  $field_instances['node-email_to_target-field_no_target_message'] = array(
    'bundle' => 'email_to_target',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => array(
      0 => array(
        'value' => 'There don’t seem to be any targets available for you right now.',
      ),
    ),
    'deleted' => 0,
    'description' => 'It’s helpful if you add to this message a way for supporters to get in touch with you. That way if they don’t have a target they can bring this to your attention.',
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
    'field_name' => 'field_no_target_message',
    'label' => 'This message is shown to supporters if we can’t find a target for them to email.',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
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
      'weight' => 11,
    ),
  );

  // Exported field_instance:
  // 'node-email_to_target-field_reference_to_campaign'.
  $field_instances['node-email_to_target-field_reference_to_campaign'] = array(
    'bundle' => 'email_to_target',
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
        'weight' => 6,
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
      'settings' => array(
        'use_select2' => FALSE,
      ),
      'type' => 'options_select',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-email_to_target-field_thank_you_pages'.
  $field_instances['node-email_to_target-field_thank_you_pages'] = array(
    'bundle' => 'email_to_target',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'cck_blocks' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
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

  // Exported field_instance: 'node-email_to_target-layout'.
  $field_instances['node-email_to_target-layout'] = array(
    'bundle' => 'email_to_target',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => array(
      0 => array(
        'theme' => NULL,
        'layout' => NULL,
        'reversed' => 0,
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
    'field_name' => 'layout',
    'label' => 'Theme & Layout',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'campaignion_layout',
      'settings' => array(),
      'type' => 'layout_selector',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-email_to_target-layout_background_image'.
  $field_instances['node-email_to_target-layout_background_image'] = array(
    'bundle' => 'email_to_target',
    'custom_add_another' => '',
    'custom_remove' => '',
    'deleted' => 0,
    'description' => 'Layout specific banner or background image.',
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
    'field_name' => 'layout_background_image',
    'label' => 'Large image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'custom_add_another' => '',
      'custom_remove' => '',
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '500 KB',
      'max_resolution' => '',
      'min_resolution' => '1500x800',
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
          'media_default--media_browser_1' => 0,
          'media_default--media_browser_my_files' => 0,
          'media_internet' => 0,
          'upload' => 0,
        ),
      ),
      'type' => 'media_generic',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-email_to_target-layout_headline'.
  $field_instances['node-email_to_target-layout_headline'] = array(
    'bundle' => 'email_to_target',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => array(
      0 => array(
        'value' => '',
        'format' => 'plain_text',
      ),
    ),
    'deleted' => 0,
    'description' => 'Display a big headline on the banner or background.',
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
        'weight' => 17,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'layout_headline',
    'label' => 'Headline',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-email_to_target-opengraph_meta_image'.
  $field_instances['node-email_to_target-opengraph_meta_image'] = array(
    'bundle' => 'email_to_target',
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
        'weight' => 14,
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
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'node-email_to_target-pgbar_default'.
  $field_instances['node-email_to_target-pgbar_default'] = array(
    'bundle' => 'email_to_target',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => array(
      0 => array(
        'state' => 1,
        'options' => array(
          'display' => array(
            'template' => 'pgbar',
          ),
          'pgbar_default__und__0__options__active_tab' => 'edit-pgbar-default-und-0-options-target',
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
    'description' => 'Display a counter, like a progress bar or thermometer for your donation.',
    'display' => array(
      'cck_blocks' => array(
        'label' => 'hidden',
        'module' => 'pgbar',
        'settings' => array(),
        'type' => 'pgbar',
        'weight' => 2,
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
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-email_to_target-recent_supporters'.
  $field_instances['node-email_to_target-recent_supporters'] = array(
    'bundle' => 'email_to_target',
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
        'weight' => 4,
      ),
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
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
      'active' => 1,
      'module' => 'recent_supporters',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'recent_supporters',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-email_to_target-supporter_tags'.
  $field_instances['node-email_to_target-supporter_tags'] = array(
    'bundle' => 'email_to_target',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Supporters submitting this form will be automatically tagged with these tags.',
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
  t('Add a large main image or a video to your email_to_target.');
  t('Add an image to be shown on your social media teasers.');
  t('Body');
  t('Counter');
  t('Display a big headline on the banner or background.');
  t('Display a counter, like a progress bar or thermometer for your donation.');
  t('Display a recent supporters box.');
  t('Form intro');
  t('Headline');
  t('If this is checked this action will be selectable as a template when creating new actions');
  t('Internal page title');
  t('It’s helpful if you add to this message a way for supporters to get in touch with you. That way if they don’t have a target they can bring this to your attention.');
  t('Large image');
  t('Layout specific banner or background image.');
  t('Main image or video');
  t('Open Graph image');
  t('Options');
  t('Related campaign');
  t('Supporters submitting this form will be automatically tagged with these tags.');
  t('Tag supporters');
  t('Thank you pages');
  t('Theme & Layout');
  t('This is a template');
  t('This message is shown to supporters if we can’t find a target for them to email.');

  return $field_instances;
}
