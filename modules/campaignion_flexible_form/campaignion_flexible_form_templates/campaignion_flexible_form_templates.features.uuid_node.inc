<?php

/**
 * @file
 * campaignion_flexible_form_templates.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function campaignion_flexible_form_templates_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'title' => 'Default Flexible Form',
  'log' => '',
  'status' => 0,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'webform',
  'language' => 'en',
  'created' => 1343052630,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '93a8faff-aad2-401a-9817-f6f3b578b9bd',
  'action_template' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'body' => array(),
  'field_main_image' => array(),
  'field_reference_to_campaign' => array(),
  'field_thank_you_pages' => array(),
  'opengraph_meta_image' => array(),
  'pgbar_default' => array(
    'und' => array(
      0 => array(
        'options' => array(
          'target' => array(
            'target' => array(
              0 => 500,
              1 => 2000,
              2 => 5000,
              3 => 10000,
              4 => 20000,
            ),
            'threshold' => 90,
            'offset' => 0,
          ),
          'texts' => array(
            'full_intro_message' => 'Thanks for your support!',
            'full_status_message' => 'We’ve reached our goal of !target supporters.',
            'intro_message' => 'We need !target supporters.',
            'status_message' => '!current of !target are supporting us. Will you help us reach another !needed?',
          ),
          'display' => array(
            'template' => 'pgbar',
          ),
        ),
        'state' => 1,
      ),
    ),
  ),
  'recent_supporters' => array(
    'und' => array(
      0 => array(
        'options' => array(
          'name_display' => 0,
          'visible_count' => 6,
          'cycle_toggle' => 0,
          'country_toggle' => 1,
          'comment_toggle' => 0,
        ),
        'toggle' => 0,
      ),
    ),
  ),
  'supporter_tags' => array(),
  'webform' => array(
    'nid' => 3,
    'next_serial' => 1,
    'confirmation' => '',
    'confirmation_format' => NULL,
    'redirect_url' => '<confirmation>',
    'status' => 1,
    'block' => 0,
    'allow_draft' => 0,
    'auto_save' => 0,
    'submit_notice' => 1,
    'confidential' => 0,
    'submit_text' => 'Sign up now!',
    'submit_limit' => -1,
    'submit_interval' => -1,
    'total_submit_limit' => -1,
    'total_submit_interval' => -1,
    'progressbar_bar' => 1,
    'progressbar_page_number' => 0,
    'progressbar_percent' => 0,
    'progressbar_pagebreak_labels' => 1,
    'progressbar_include_confirmation' => 0,
    'progressbar_label_first' => 'Start',
    'progressbar_label_confirmation' => 'Complete',
    'preview' => 0,
    'preview_next_button_label' => '',
    'preview_prev_button_label' => '',
    'preview_title' => '',
    'preview_message' => '',
    'preview_message_format' => NULL,
    'preview_excluded_components' => array(),
    'confirm_email_request_lifetime' => 7776000,
    'confirm_email_delete_submissions' => 0,
    'first_button_text' => 'Next',
    'next_button_text' => 'Next',
    'webform_ajax' => 1,
    'record_exists' => TRUE,
    'roles' => array(
      0 => 1,
      1 => 2,
    ),
    'emails' => array(
      1 => array(
        'nid' => 3,
        'eid' => 1,
        'email' => 3,
        'subject' => 'Thank you for your support!',
        'from_name' => 'default',
        'from_address' => 'default',
        'template' => '<p>Hi [submission:values:first_name],</p>
<p>Thank you for supporting us!</p>
<p>Have a great day!<br>
	Your Supporter Service Team</p>
',
        'excluded_components' => array(),
        'html' => 1,
        'attachments' => 0,
        'exclude_empty' => 0,
        'extra' => FALSE,
        'status' => 0,
      ),
      2 => array(
        'nid' => 3,
        'eid' => 2,
        'email' => 3,
        'subject' => 'Please confirm your email address!',
        'from_name' => 'default',
        'from_address' => 'default',
        'template' => '<p>Hi [submission:values:first_name],</p>
<p>Almost there! Just one more click to confirm your support: [submission:confirm_url]</p>
<p>Best,<br>
	Your Supporter Service Team</p>
',
        'excluded_components' => array(),
        'html' => 1,
        'attachments' => 0,
        'exclude_empty' => 0,
        'extra' => FALSE,
        'status' => 0,
      ),
      3 => array(
        'nid' => 3,
        'eid' => 3,
        'email' => 'you@example.com',
        'subject' => 'New submission!',
        'from_name' => 'default',
        'from_address' => 'default',
        'template' => '<p>Submitted on [current-date:short]</p>
<p>Submitted by [submission:values:first_name] [submission:values:last_name]</p>
<p>Submitted values are:</p>
<p>[submission:values]</p>
<p>The results of this submission may be viewed at:</p>
<p>[submission:url]</p>
<p><br>
	Have a great day! ☺ ☀</p>
',
        'excluded_components' => array(),
        'html' => 1,
        'attachments' => 0,
        'exclude_empty' => 0,
        'extra' => FALSE,
        'status' => 0,
      ),
    ),
    'components' => array(
      1 => array(
        'cid' => 1,
        'pid' => 0,
        'form_key' => 'first_name',
        'name' => 'First name',
        'type' => 'textfield',
        'value' => '[current-page:query:p3]',
        'extra' => array(
          'width' => '',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'disabled' => 0,
          'unique' => FALSE,
          'title_display' => 'before',
          'description' => '',
          'attributes' => array(),
          'private' => 0,
          'conditional_component' => '',
          'conditional_operator' => '=',
          'conditional_values' => '',
          'description_above' => FALSE,
          'placeholder' => '',
          'analysis' => FALSE,
          'minlength' => '',
        ),
        'required' => 1,
        'weight' => 0,
      ),
      2 => array(
        'cid' => 2,
        'pid' => 0,
        'form_key' => 'last_name',
        'name' => 'Last name',
        'type' => 'textfield',
        'value' => '[current-page:query:p4]',
        'extra' => array(
          'width' => '',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'disabled' => 0,
          'unique' => FALSE,
          'title_display' => 'before',
          'description' => '',
          'attributes' => array(),
          'private' => 0,
          'conditional_component' => '',
          'conditional_operator' => '=',
          'conditional_values' => '',
          'description_above' => FALSE,
          'placeholder' => '',
          'analysis' => FALSE,
          'minlength' => '',
        ),
        'required' => 1,
        'weight' => 1,
      ),
      3 => array(
        'cid' => 3,
        'pid' => 0,
        'form_key' => 'email',
        'name' => 'Email address',
        'type' => 'email',
        'value' => '[current-page:query:p5]',
        'extra' => array(
          'width' => '',
          'unique' => TRUE,
          'disabled' => 0,
          'title_display' => 'before',
          'description' => '',
          'attributes' => array(),
          'private' => 0,
          'conditional_component' => '',
          'conditional_operator' => '=',
          'conditional_values' => '',
          'multiple' => 0,
          'format' => 'short',
          'description_above' => FALSE,
          'placeholder' => '',
          'analysis' => FALSE,
        ),
        'required' => 1,
        'weight' => 2,
      ),
    ),
    'conditionals' => array(),
  ),
  'date' => '2012-07-23 16:10:30 +0200',
  'user_uuid' => '59e16a84-5bfa-438b-be8f-782a0af74750',
);
  return $nodes;
}
