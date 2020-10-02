<?php

/**
 * @file
 * campaignion_petition_templates.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function campaignion_petition_templates_uuid_features_default_content() {
  $nodes = array();
  $nodes[] = array(
  'title' => 'Default Petition Form TEMPLATE - DO NOT DELETE',
  'log' => '',
  'status' => 0,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'petition',
  'language' => 'en',
  'created' => 1343052635,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '2825470e-e582-414d-b01c-e6e71a028075',
  'action_template' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<h2>Cat ipsum dolor sit amet</h2><p>the dog smells bad. Kitty power!</p><ol><li>Play riveting piece</li><li>on synthesizer keyboard</li><li>leave dead animals as gifts</li></ol><p>Peer out window, chatter at birds, lure them to mouth plays league of legends poop in the plant pot.</p><p><strong>Sit on the laptop. Play time.</strong></p><p>Leave dead animals as gifts sweet beast, yet eat and than sleep on your face so meow all night having their mate disturbing sleeping humans but claws in your leg so shake treat bag.</p><h3>Eat the fat cats food</h3><ul><li>wake up</li><li>wander around the house</li><li>make large amounts of noise</li><li>jump on top of your human\'s bed and fall asleep</li></ul><p>Mark territory howl uncontrollably for no reason spill litter box, scratch at owner, destroy all furniture.Please stop looking at your phone and pet me chew foot, cats making all the muffins yet hola te quiero where is my slave?</p><p><a href="https://www.youtube.com/watch?v=xfarzNic3fU" target="_blank">Then cats take over the world</a> play riveting piece on synthesizer keyboard fall asleep on the washing machine, purr for no reason but cat not kitten around for meow meow, i tell my human.</p>',
        'summary' => '<h3>This is the custom social media &amp; Campaignion teaser text</h3><p>Leave dead animals as gifts sweet beast, yet eat and than sleep on your face so meow all night having their mate disturbing sleeping humans but claws in your leg so shake treat bag.</p>',
        'format' => 'full_html_with_editor',
        'safe_summary' => '<h3>This is the custom social media &amp; Campaignion teaser text</h3><p>Leave dead animals as gifts sweet beast, yet eat and than sleep on your face so meow all night having their mate disturbing sleeping humans but claws in your leg so shake treat bag.</p>',
      ),
    ),
  ),
  'field_main_image' => array(),
  'field_reference_to_campaign' => array(),
  'field_thank_you_pages' => array(
    'und' => array(
      0 => array(
        'type' => NULL,
        'node_reference_nid' => 5,
      ),
      1 => array(
        'type' => NULL,
        'node_reference_nid' => 6,
      ),
    ),
  ),
  'layout' => array(),
  'layout_background_image' => array(),
  'opengraph_meta_image' => array(),
  'pgbar_default' => array(
    'und' => array(
      0 => array(
        'options' => array(
          'target' => array(
            'target' => array(
              0 => 200,
              1 => 500,
              2 => 1000,
            ),
            'threshold' => 90,
            'offset' => 0,
          ),
          'texts' => array(
            'intro_message' => 'We need !target signatures.',
            'status_message' => 'Already !current of !target have signed the petition. Will you help us get !needed more?',
            'full_intro_message' => 'Thanks for your support!',
            'full_status_message' => 'We’ve reached our goal of !target supports.',
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
          'cycle_toggle' => 1,
          'country_toggle' => 1,
          'comment_toggle' => 0,
        ),
        'toggle' => 1,
      ),
    ),
  ),
  'supporter_tags' => array(),
  'webform' => array(
    'nid' => 4,
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
    'submit_text' => 'Take action now!',
    'submit_limit' => -1,
    'submit_interval' => -1,
    'total_submit_limit' => -1,
    'total_submit_interval' => -1,
    'progressbar_bar' => 1,
    'progressbar_page_number' => 1,
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
    'roles' => array(),
    'emails' => array(
      1 => array(
        'nid' => 4,
        'eid' => 1,
        'email' => 3,
        'subject' => 'Thank you for your support!',
        'from_name' => 'default',
        'from_address' => 'default',
        'template' => '<p>Hi [submission:values:first_name],</p>
<p>Thank you for supporting us!</p>
<p>Have a great day!<br>
	Your Supporter Service Team</p>

<h2>Share this action!</h2>
<div class="content">
	<ul class="share-light">
		<li class="email first"><a data-share="email" href="https://LINK HERE" target="_blank" title="Share this via E-Mail!"><span>E-Mail</span></a></li>
		<li class="facebook"><a data-share="facebook" href="https://www.facebook.com/sharer.php?u=https%3A//LINK HERE" target="_blank" title="Share this via Facebook!"><span>Facebook</span></a></li>
		<li class="twitter last"><a data-share="twitter" href="http://twitter.com/share?text=&amp;url=https%3A//LINK HERE" target="_blank" title="Share this via Twitter!"><span>Twitter</span></a></li>
	</ul>
</div>
',
        'excluded_components' => array(),
        'html' => 1,
        'attachments' => 0,
        'exclude_empty' => 0,
        'extra' => FALSE,
        'status' => 1,
      ),
      2 => array(
        'nid' => 4,
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
        'status' => 1,
      ),
      3 => array(
        'nid' => 4,
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
  'date' => '2012-07-23 16:10:35 +0200',
  'user_uuid' => '59e16a84-5bfa-438b-be8f-782a0af74750',
);
  $nodes[] = array(
  'title' => 'Please confirm your email',
  'log' => '',
  'status' => 0,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'thank_you_page',
  'language' => 'en',
  'created' => 1491564270,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '462065c5-a9dc-4f7b-9cee-24617f5084b5',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Please check you email inbox and click on the confirmation link we have sent you.</p>
',
        'summary' => '',
        'format' => 'full_html_with_editor',
        'safe_summary' => '',
      ),
    ),
  ),
  'campaignion_overlay_options' => array(),
  'field_main_image' => array(),
  'field_reference_to_campaign' => array(),
  'layout' => array(),
  'layout_background_image' => array(),
  'share_light' => array(
    'und' => array(
      0 => array(
        'toggle' => 0,
        'options' => array(
          'subject' => 'Share this action!',
          'image' => array(
            'fid' => 0,
          ),
          'counter_toggle' => 1,
          'channels' => array(
            'email' => array(
              'toggle' => TRUE,
            ),
            'facebook' => array(
              'toggle' => TRUE,
            ),
            'twitter' => array(
              'toggle' => TRUE,
              'text' => '',
            ),
          ),
          'link' => array(
            'path' => '',
          ),
        ),
      ),
    ),
  ),
  'date' => '2017-04-07 13:24:30 +0200',
  'user_uuid' => '59e16a84-5bfa-438b-be8f-782a0af74750',
);
  $nodes[] = array(
  'title' => 'Thank you! You’re awesome!',
  'log' => '',
  'status' => 0,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'thank_you_page',
  'language' => 'en',
  'created' => 1491564270,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '0e6c7ce6-5701-4c17-b306-be7eba55dfe8',
  'body' => array(),
  'campaignion_overlay_options' => array(),
  'field_main_image' => array(),
  'field_reference_to_campaign' => array(),
  'layout' => array(),
  'layout_background_image' => array(),
  'share_light' => array(
    'und' => array(
      0 => array(
        'toggle' => 1,
        'options' => array(
          'subject' => 'Share this action!',
          'image' => array(
            'fid' => 0,
          ),
          'counter_toggle' => 1,
          'channels' => array(
            'email' => array(
              'toggle' => TRUE,
            ),
            'facebook' => array(
              'toggle' => TRUE,
            ),
            'twitter' => array(
              'toggle' => TRUE,
              'text' => 'Tweet tweet for kittens!',
            ),
          ),
          'link' => array(
            'path' => '',
          ),
        ),
      ),
    ),
  ),
  'date' => '2017-04-07 13:24:30 +0200',
  'user_uuid' => '59e16a84-5bfa-438b-be8f-782a0af74750',
);
  return $nodes;
}
