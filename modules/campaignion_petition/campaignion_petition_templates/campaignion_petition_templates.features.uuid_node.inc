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
        'value' => '<h2>H2 level heading: paragraphs and links</h2>
<p>Are you familiar with our Helpcenter yet? <a href="https://support.more-onion.com/hc/en-us" target="_blank">Click here</a> to browse topics that will answer FAQ\'s on Impact Stack!</p>
<h3>H3 level heading: lists</h3>
<ol>
	<li>first list element</li>
	<li>second list element</li>
	<li>third list element</li>
</ol>
<ul>
	<li>first list element</li>
	<li>second list element</li>
	<li>third list element</li>
</ul>
<h4>H4 level heading: blockquotes</h4>
<blockquote>Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.</blockquote>
<p><cite>Famous person</cite></p>
<h5>H5 level heading: letter</h5>
<div class="letter">
	<h5>Message heading</h5>
	<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.</p>
	<p>Yours,<br>Firstname Lastname</p>
</div>
<h6>H6 level heading: snippets</h6>
<h3>Accordion</h3>
<ul class="accordion" data-accordion="u1j8g7-accordion" data-allow-all-closed="true" data-multi-expand="true" role="tablist">
	<li class="accordion-item is-active" data-accordion-item="" role="presentation"><a aria-controls="tws6k5-accordion" aria-expanded="true" aria-selected="true" class="accordion-title" href="#" id="tws6k5-accordion-label" role="tab">Accordion 1</a>
		<div aria-hidden="false" aria-labelledby="tws6k5-accordion-label" class="accordion-content" data-tab-content="" id="tws6k5-accordion" role="tabpanel" style="display: block;">
			<p>Panel 1. Lorem ipsum dolor</p>
			<p>Starts in the open state due to using the <code>is-active</code> state class.</p>
		</div>
	</li>
	<li class="accordion-item" data-accordion-item="" role="presentation"><a aria-controls="u6xqr7-accordion" aria-expanded="false" aria-selected="false" class="accordion-title" href="#" id="u6xqr7-accordion-label" role="tab">Accordion 2 has a very long and not very interesting title (but it wraps the line to see how it is wrapping)</a>
		<div aria-hidden="true" aria-labelledby="u6xqr7-accordion-label" class="accordion-content" data-tab-content="" id="u6xqr7-accordion" role="tabpanel">
			<p>Panel 2. Lorem ipsum dolor</p>
			<a href="#">Go to top of page</a>
    </div>
	</li>
</ul>
<h3>Toggle element</h3>
<p><a aria-controls="more" aria-expanded="false" data-close="" data-open="more" data-toggle-element="" role="button">Click to read more</a></p>
<div class="toggle-element-hidden" data-toggle-element="" id="more">
	<p>This will show up on click and can’t be closed again, the link is gone.</p>
	<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.</p>
</div>
<p><a aria-controls="toggle-paragraph" aria-expanded="false" data-toggle="toggle-paragraph" role="button">Toggle a paragraph on click.</a></p>
<p class="toggle-element-hidden" data-toggle-element="" id="toggle-paragraph">Paragraph that can be toggled on and off.</p>
<h3>Sticky button</h3>
<p>A sticky button will appear when the user scrolls down the page, and allows them to jump back up to the form. This is useful if you have a lot of content on your page and you want the user to be able to get back to the form as soon as they\'re ready, without scrolling back up. You can add a sticky button to your page by adding the right code snippet.</p>
<div class="sticky-cta"><a class="expanded primary button data-smooth-scroll" href="#form">Take action!</a></div>
',
        'summary' => '<h3>This is the custom social media &amp; Campaignion teaser text</h3><p>Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.</p>',
        'format' => 'full_html_with_editor',
      ),
    ),
  ),
  'field_form_intro' => array(),
  'field_main_image' => array(),
  'field_reference_to_campaign' => array(),
  'field_thank_you_pages' => array(),
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
    'first_button_text' => 'Next',
    'next_button_text' => 'Next',
    'confirm_email_request_lifetime' => 7776000,
    'confirm_email_delete_submissions' => 0,
    'webform_ajax' => 1,
    'record_exists' => TRUE,
    'roles' => array(),
    'emails' => array(
      1 => array(
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
  'path' => array(
    'pathauto' => FALSE,
    'alias' => 'content/default-petition-form-template-do-not-delete',
  ),
  'date' => '2012-07-23 14:10:35 +0000',
  'user_uuid' => '9dbdd05e-9e99-4f34-a31b-8685d3f6bcc3',
);
  return $nodes;
}
