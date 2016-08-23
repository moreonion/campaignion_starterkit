<?php

$roles = array(
                                                          'anonymous user', 'authenticated user', 'administrator', 'editor', 'supporter',
);
$matrix = array(
  // Block
  'block' => array(
    'administer blocks'                          => array(NULL,             NULL,                 TRUE,            NULL,     NULL,        ),
  ),
  // Campaignion action
  'campaignion_action' => array(
    'campaignion view test-mode'                 => array(TRUE,             TRUE,                 NULL,            NULL,     NULL,        ),
    'campaignion view test-mode link'            => array(NULL,             NULL,                 TRUE,            TRUE,     NULL,        ),
  ),
  // Campaign Content Type
  'campaignion_campaign' => array(
    'access non-public campaign page'            => array(NULL,             NULL,                 TRUE,            TRUE,     NULL,        ),
  ),
  // Campaignion Toolbar
  'campaignion_bar' => array(
    'access campaignion bar'                     => array(NULL,             NULL,                 TRUE,            TRUE,     NULL,        ),
  ),
  // Campaignion email to target
  'campaignion_email_to_target' => array(
    'view email_to_target messages'              => array(NULL,             NULL,                 TRUE,            NULL      NULL,        ),
  ),
  // Comment
  'comment' => array(
    'administer comments'                        => array(NULL,             NULL,                 TRUE,            NULL,     NULL,        ),
    'access comments'                            => array(TRUE,             TRUE,                 NULL,            NULL,     NULL,        ),
    'post comments'                              => array(NULL,             TRUE,                 NULL,            NULL,     NULL,        ),
    'skip comment approval'                      => array(NULL,             NULL,                 TRUE,            NULL,     NULL,        ),
    'edit own comments'                          => array(NULL,             NULL,                 TRUE,            NULL,     NULL,        ),
  ),
  // Content translation
  'translation' => array(
    'translate content'                          => array(NULL,             NULL,                 TRUE,            TRUE,     NULL,        ),
  ),
  // Contextual links
  'contextual' => array(
    'access contextual links'                    => array(NULL,             NULL,                 TRUE,            NULL,     NULL,        ),
  ),
  // Email-to-Target actions
  'campaignion_email_to_target' => array(
    'view email_to_target messages'              => array(NULL,             NULL,                 TRUE,            TRUE,     NULL,        ),
  ),
  // Features
  'features' => array(
    'administer features'                        => array(NULL,             NULL,                 NULL,            NULL,     NULL,        ),
    'manage features'                            => array(NULL,             NULL,                 NULL,            NULL,     NULL,        ),
    'generate features'                          => array(NULL,             NULL,                 NULL,            NULL,     NULL,        ),
  ),
  // Field collection
  'field_collection' => array(
    'administer field collections'               => array(NULL,             NULL,                 NULL,            NULL,     NULL,        ),
  ),
  // Fieldgroup
  'field_group' => array(
    'administer fieldgroups'                     => array(NULL,             NULL,                 NULL,            NULL,     NULL,        ),
  ),
  // File entity
  'file_entity' => array(
    'bypass file access'                         => array(NULL,             NULL,                 TRUE,            NULL,     NULL,        ),
    'administer file types'                      => array(NULL,             NULL,                 NULL,            NULL,     NULL,        ),
    'administer files'                           => array(NULL,             NULL,                 TRUE,            NULL,     NULL,        ),
    'create files'                               => array(NULL,             NULL,                 TRUE,            TRUE,     NULL,        ),
    'view own private files'                     => array(NULL,             NULL,                 NULL,            TRUE,     NULL,        ),
    'view own files'                             => array(NULL,             NULL,                 NULL,            TRUE,     NULL,        ),
    'view private files'                         => array(NULL,             NULL,                 NULL,            NULL,     NULL,        ),
    'view files'                                 => array(NULL,             NULL,                 TRUE,            TRUE,     NULL,        ),
    'edit own image files'                       => array(NULL,             NULL,                 NULL,            TRUE,     NULL,        ),
    'edit any image files'                       => array(NULL,             NULL,                 TRUE,            NULL,     NULL,        ),
    'delete own image files'                     => array(NULL,             NULL,                 NULL,            TRUE,     NULL,        ),
    'delete any image files'                     => array(NULL,             NULL,                 TRUE,            NULL,     NULL,        ),
    'download own image files'                   => array(NULL,             NULL,                 NULL,            TRUE,     NULL,        ),
    'download any image files'                   => array(NULL,             NULL,                 TRUE,            NULL,     NULL,        ),
    'edit own video files'                       => array(NULL,             NULL,                 NULL,            TRUE,     NULL,        ),
    'edit any video files'                       => array(NULL,             NULL,                 TRUE,            NULL,     NULL,        ),
    'delete own video files'                     => array(NULL,             NULL,                 NULL,            TRUE,     NULL,        ),
    'delete any video files'                     => array(NULL,             NULL,                 TRUE,            NULL,     NULL,        ),
    'download own video files'                   => array(NULL,             NULL,                 NULL,            TRUE,     NULL,        ),
    'download any video files'                   => array(NULL,             NULL,                 TRUE,            NULL,     NULL,        ),
    'edit own audio files'                       => array(NULL,             NULL,                 NULL,            TRUE,     NULL,        ),
    'edit any audio files'                       => array(NULL,             NULL,                 TRUE,            NULL,     NULL,        ),
    'delete own audio files'                     => array(NULL,             NULL,                 NULL,            TRUE,     NULL,        ),
    'delete any audio files'                     => array(NULL,             NULL,                 TRUE,            NULL,     NULL,        ),
    'download own audio files'                   => array(NULL,             NULL,                 NULL,            TRUE,     NULL,        ),
    'download any audio files'                   => array(NULL,             NULL,                 TRUE,            NULL,     NULL,        ),
    'edit own document files'                    => array(NULL,             NULL,                 NULL,            TRUE,     NULL,        ),
    'edit any document files'                    => array(NULL,             NULL,                 TRUE,            NULL,     NULL,        ),
    'delete own document files'                  => array(NULL,             NULL,                 NULL,            TRUE,     NULL,        ),
    'delete any document files'                  => array(NULL,             NULL,                 TRUE,            NULL,     NULL,        ),
    'download own document files'                => array(NULL,             NULL,                 NULL,            TRUE,     NULL,        ),
    'download any document files'                => array(NULL,             NULL,                 TRUE,            NULL,     NULL,        ),
  ),
  // Filter
  'filter' => array(
    'use text format full_html_with_editor'      => array(NULL,             TRUE,                 TRUE,            TRUE,     TRUE,        ),
  ),
  // Forward
  'forward' => array(
    'access forward'                             => array(TRUE,             TRUE,                 NULL,            NULL,     NULL,        ),
    'override email address'                     => array(NULL,             NULL,                 TRUE,            TRUE,     NULL,        ),
  ),
  // Honeypot
  'honeypot' => array(
    'bypass honeypot protection'                 => array(NULL,             NULL,                 TRUE,            NULL,     NULL,        ),
  ),
  // String translation
  'i18n_string' => array(
    'translate user-defined strings'             => array(NULL,             NULL,                 TRUE,            NULL,     NULL,        ),
  ),
  // Locale
  'locale' => array(
    'administer languages'                       => array(NULL,             NULL,                 TRUE,            NULL,     NULL,        ),
    'translate interface'                        => array(NULL,             NULL,                 TRUE,            NULL,     NULL,        ),
  ),
  // Localization client
  'l10n_client' => array(
    'use on-page translation'                    => array(NULL,             NULL,                 TRUE,            NULL,     NULL,        ),
  ),
  // Media
  'media' => array(
    'administer media'                           => array(NULL,             NULL,                 TRUE,            TRUE,     NULL,        ),
    'view media'                                 => array(TRUE,             TRUE,                 NULL,            NULL,     NULL,        ),
    'edit media'                                 => array(NULL,             NULL,                 TRUE,            TRUE,     NULL,        ),
    'import media'                               => array(NULL,             NULL,                 TRUE,            TRUE,     NULL,        ),
  ),
  // Media Internet Sources
  'media_internet' => array(
    'add media from remote sources'              => array(NULL,             NULL,                 TRUE,            TRUE,     NULL,        ),
  ),
  // Menu
  'menu' => array(
    'administer menu'                            => array(NULL,             NULL,                 TRUE,            TRUE,     NULL,        ),
  ),
  // Meta tags
  'metatag' => array(
    'administer meta tags'                       => array(NULL,             NULL,                 TRUE,            NULL,     NULL,        ),
    'edit meta tags'                             => array(NULL,             NULL,                 TRUE,            NULL,     NULL,        ),
  ),
  // Multilingual content
  'i18n_node' => array(
    'administer content translations'            => array(NULL,             NULL,                 TRUE,            TRUE,     NULL,        ),
  ),
  // Node
  'node' => array(
    'bypass node access'                         => array(NULL,             NULL,                 TRUE,            NULL,     NULL,        ),
    'administer nodes'                           => array(NULL,             NULL,                 TRUE,            TRUE,     NULL,        ),
    'access content overview'                    => array(NULL,             NULL,                 TRUE,            TRUE,     NULL,        ),
    'access content'                             => array(TRUE,             TRUE,                 NULL,            NULL,     NULL,        ),
    'view own unpublished content'               => array(NULL,             NULL,                 TRUE,            TRUE,     NULL,        ),
    'view revisions'                             => array(NULL,             NULL,                 TRUE,            TRUE,     NULL,        ),
    'revert revisions'                           => array(NULL,             NULL,                 TRUE,            NULL,     NULL,        ),
    'delete revisions'                           => array(NULL,             NULL,                 TRUE,            NULL,     NULL,        ),
    'create campaign content'                    => array(NULL,             NULL,                 TRUE,            TRUE,     NULL,        ),
    'edit own campaign content'                  => array(NULL,             NULL,                 TRUE,            TRUE,     NULL,        ),
    'edit any campaign content'                  => array(NULL,             NULL,                 TRUE,            NULL,     NULL,        ),
    'delete own campaign content'                => array(NULL,             NULL,                 TRUE,            TRUE,     NULL,        ),
    'delete any campaign content'                => array(NULL,             NULL,                 TRUE,            NULL,     NULL,        ),
    'create donation content'                    => array(NULL,             NULL,                 TRUE,            TRUE,     NULL,        ),
    'edit own donation content'                  => array(NULL,             NULL,                 TRUE,            TRUE,     NULL,        ),
    'edit any donation content'                  => array(NULL,             NULL,                 TRUE,            NULL,     NULL,        ),
    'delete own donation content'                => array(NULL,             NULL,                 TRUE,            TRUE,     NULL,        ),
    'delete any donation content'                => array(NULL,             NULL,                 TRUE,            NULL,     NULL,        ),
    'create email_protest content'               => array(NULL,             NULL,                 TRUE,            TRUE,     NULL,        ),
    'edit own email_protest content'             => array(NULL,             NULL,                 TRUE,            TRUE,     NULL,        ),
    'edit any email_protest content'             => array(NULL,             NULL,                 TRUE,            NULL,     NULL,        ),
    'delete own email_protest content'           => array(NULL,             NULL,                 TRUE,            TRUE,     NULL,        ),
    'delete any email_protest content'           => array(NULL,             NULL,                 TRUE,            NULL,     NULL,        ),
    'create news content'                        => array(NULL,             NULL,                 TRUE,            TRUE,     NULL,        ),
    'edit own news content'                      => array(NULL,             NULL,                 TRUE,            TRUE,     NULL,        ),
    'edit any news content'                      => array(NULL,             NULL,                 TRUE,            NULL,     NULL,        ),
    'delete own news content'                    => array(NULL,             NULL,                 TRUE,            TRUE,     NULL,        ),
    'delete any news content'                    => array(NULL,             NULL,                 TRUE,            NULL,     NULL,        ),
    'create petition content'                    => array(NULL,             NULL,                 TRUE,            TRUE,     NULL,        ),
    'edit own petition content'                  => array(NULL,             NULL,                 TRUE,            TRUE,     NULL,        ),
    'edit any petition content'                  => array(NULL,             NULL,                 TRUE,            NULL,     NULL,        ),
    'delete own petition content'                => array(NULL,             NULL,                 TRUE,            TRUE,     NULL,        ),
    'delete any petition content'                => array(NULL,             NULL,                 TRUE,            NULL,     NULL,        ),
    'create static_page content'                 => array(NULL,             NULL,                 TRUE,            TRUE,     NULL,        ),
    'edit own static_page content'               => array(NULL,             NULL,                 TRUE,            TRUE,     NULL,        ),
    'edit any static_page content'               => array(NULL,             NULL,                 TRUE,            NULL,     NULL,        ),
    'delete own static_page content'             => array(NULL,             NULL,                 TRUE,            TRUE,     NULL,        ),
    'delete any static_page content'             => array(NULL,             NULL,                 TRUE,            NULL,     NULL,        ),
    'create thank_you_page content'              => array(NULL,             NULL,                 TRUE,            TRUE,     NULL,        ),
    'edit own thank_you_page content'            => array(NULL,             NULL,                 TRUE,            TRUE,     NULL,        ),
    'edit any thank_you_page content'            => array(NULL,             NULL,                 TRUE,            NULL,     NULL,        ),
    'delete own thank_you_page content'          => array(NULL,             NULL,                 TRUE,            TRUE,     NULL,        ),
    'delete any thank_you_page content'          => array(NULL,             NULL,                 TRUE,            NULL,     NULL,        ),
    'create webform_template_type content'       => array(NULL,             NULL,                 TRUE,            TRUE,     NULL,        ),
    'edit own webform_template_type content'     => array(NULL,             NULL,                 TRUE,            TRUE,     NULL,        ),
    'edit any webform_template_type content'     => array(NULL,             NULL,                 TRUE,            NULL,     NULL,        ),
    'delete own webform_template_type content'   => array(NULL,             NULL,                 TRUE,            TRUE,     NULL,        ),
    'delete any webform_template_type content'   => array(NULL,             NULL,                 TRUE,            NULL,     NULL,        ),
    'create webform content'                     => array(NULL,             NULL,                 TRUE,            TRUE,     NULL,        ),
    'edit own webform content'                   => array(NULL,             NULL,                 TRUE,            TRUE,     NULL,        ),
    'edit any webform content'                   => array(NULL,             NULL,                 TRUE,            NULL,     NULL,        ),
    'delete own webform content'                 => array(NULL,             NULL,                 TRUE,            TRUE,     NULL,        ),
    'delete any webform content'                 => array(NULL,             NULL,                 TRUE,            NULL,     NULL,        ),
  ),
  // Open Graph meta tags
  'opengraph_meta' => array(
    'administer Open Graph meta tags'            => array(NULL,             NULL,                 TRUE,            NULL,     NULL,        ),
    'edit Open Graph meta tags'                  => array(NULL,             NULL,                 TRUE,            TRUE,     NULL,        ),
  ),
  // Overlay
  'overlay' => array(
    'access overlay'                             => array(NULL,             NULL,                 TRUE,            TRUE,     NULL,        ),
  ),
  // Payment
  'payment' => array(
    'payment.global.administer'                  => array(NULL,             NULL,                 TRUE,            NULL,     NULL,        ),
    'payment.rules.administer'                   => array(NULL,             NULL,                 NULL,            NULL,     NULL,        ),
    'payment.payment.administer'                 => array(NULL,             NULL,                 TRUE,            NULL,     NULL,        ),
    'payment.payment.view.any'                   => array(NULL,             NULL,                 TRUE,            NULL,     NULL,        ),
    'payment.payment.view.own'                   => array(NULL,             NULL,                 NULL,            TRUE,     NULL,        ),
    'payment.payment.update.any'                 => array(NULL,             NULL,                 TRUE,            NULL,     NULL,        ),
    'payment.payment.update.own'                 => array(NULL,             NULL,                 NULL,            TRUE,     NULL,        ),
    'payment.payment.delete.any'                 => array(NULL,             NULL,                 TRUE,            NULL,     NULL,        ),
    'payment.payment.delete.own'                 => array(NULL,             NULL,                 NULL,            TRUE,     NULL,        ),
    'payment.payment_method.update.any'          => array(NULL,             NULL,                 TRUE,            NULL,     NULL,        ),
    'payment.payment_method.update.own'          => array(NULL,             NULL,                 NULL,            TRUE,     NULL,        ),
    'payment.payment_method.delete.any'          => array(NULL,             NULL,                 TRUE,            NULL,     NULL,        ),
    'payment.payment_method.delete.own'          => array(NULL,             NULL,                 NULL,            TRUE,     NULL,        ),
    'payment.payment_method.view.any'            => array(NULL,             NULL,                 TRUE,            NULL,     NULL,        ),
    'payment.payment_method.view.own'            => array(NULL,             NULL,                 NULL,            TRUE,     NULL,        ),
    'payment.payment_status.view'                => array(NULL,             NULL,                 TRUE,            NULL,     NULL,        ),
    'payment.payment_method.create.PaymentMethodBasicController'
                                                 => array(NULL,             NULL,                 TRUE,            NULL,     NULL,        ),
  ),
  // Path
  'path' => array(
    'administer url aliases'                     => array(NULL,             NULL,                 TRUE,            NULL,     NULL,        ),
    'create url aliases'                         => array(NULL,             NULL,                 TRUE,            TRUE,     NULL,        ),
  ),
  // RedHen
  'redhen' => array(
    'administer redhen'                          => array(NULL,             NULL,                 TRUE,            NULL,     NULL,        ),
    'access redhen'                              => array(NULL,             NULL,                 TRUE,            TRUE,     NULL,        ),
  ),
  // RedHen Activity
  'redhen_activity' => array(
    'access redhen activity'                     => array(NULL,             NULL,                 TRUE,            NULL,     NULL,        ),
  ),
  // RedHen Contacts
  'redhen_contact' => array(
    'administer redhen_contact types'            => array(NULL,             NULL,                 TRUE,            NULL,     NULL,        ),
    'administer redhen contacts'                 => array(NULL,             NULL,                 TRUE,            NULL,     NULL,        ),
    'manage redhen contacts'                     => array(NULL,             NULL,                 TRUE,            NULL,     NULL,        ),
    'access redhen contacts'                     => array(NULL,             NULL,                 TRUE,            NULL,     NULL,        ),
    'view own redhen contact'                    => array(NULL,             NULL,                 TRUE,            NULL,     NULL,        ),
    'edit own redhen contact'                    => array(NULL,             NULL,                 TRUE,            NULL,     NULL,        ),
  ),
  // RedHen Engagement
  'redhen_engagement' => array(
    'administer redhen engagements'              => array(NULL,             NULL,                 TRUE,            NULL,     NULL,        ),
  ),
  // RedHen Notes
  'redhen_note' => array(
    'administer redhen notes'                    => array(NULL,             NULL,                 TRUE,            NULL,     NULL,        ),
    'manage redhen notes'                        => array(NULL,             NULL,                 TRUE,            NULL,     NULL,        ),
    'access redhen notes'                        => array(NULL,             NULL,                 TRUE,            NULL,     NULL,        ),
  ),
  // Redhen Organizations
  'redhen_org' => array(
    'administer redhen_org types'                => array(NULL,             NULL,                 TRUE,            NULL,     NULL,        ),
    'administer redhen orgs'                     => array(NULL,             NULL,                 TRUE,            NULL,     NULL,        ),
    'manage redhen orgs'                         => array(NULL,             NULL,                 TRUE,            NULL,     NULL,        ),
    'access redhen orgs'                         => array(NULL,             NULL,                 TRUE,            NULL,     NULL,        ),
  ),
  // Redirect
  'redirect' => array(
    'administer redirects'                       => array(NULL,             NULL,                 TRUE,            NULL,     NULL,        ),
  ),
  // Revisioning
  'revisioning' => array(
    'view revision status messages'              => array(NULL,             NULL,                 TRUE,            NULL,     NULL,        ),
    'edit revisions'                             => array(NULL,             NULL,                 TRUE,            NULL,     NULL,        ),
    'publish revisions'                          => array(NULL,             NULL,                 TRUE,            NULL,     NULL,        ),
    'unpublish current revision'                 => array(NULL,             NULL,                 TRUE,            NULL,     NULL,        ),
  ),
  // Save Draft
  'save_draft' => array(
    'save draft'                                 => array(NULL,             NULL,                 TRUE,            TRUE,     NULL,        ),
  ),
  // Scheduler
  'scheduler' => array(
    'schedule (un)publishing of nodes'           => array(NULL,             NULL,                 TRUE,            TRUE,     NULL,        ),
  ),
  // Search
  'search' => array(
    'administer search'                          => array(NULL,             NULL,                 TRUE,            NULL,     NULL,        ),
    'search content'                             => array(TRUE,             TRUE,                 NULL,            NULL,     NULL,        ),
    'use advanced search'                        => array(NULL,             TRUE,                 NULL,            NULL,     NULL,        ),
  ),
  // Share Light
  'share_light' => array(
    'admin share_light global'                   => array(NULL,             NULL,                 TRUE,            NULL,     NULL,        ),
    'admin share_light own page'                 => array(NULL,             NULL,                 TRUE,            TRUE,     NULL,        ),
    'admin share_light all pages'                => array(NULL,             NULL,                 TRUE,            NULL,     NULL,        ),
    'admin share_light share page'               => array(TRUE,             TRUE,                 NULL,            NULL,     NULL,        ),
  ),
  // System
  'system' => array(
    'administer site configuration'              => array(NULL,             NULL,                 TRUE,            NULL,     NULL,        ),
    'access administration pages'                => array(NULL,             NULL,                 TRUE,            NULL,     NULL,        ),
    'view the administration theme'              => array(NULL,             NULL,                 TRUE,            TRUE,     NULL,        ),
  ),
  // Taxonomy
  'taxonomy' => array(
    'administer taxonomy'                        => array(NULL,             NULL,                 TRUE,            NULL,     NULL,        ),
    'edit terms in 1'                            => array(NULL,             NULL,                 TRUE,            NULL,     NULL,        ),
    'delete terms in 1'                          => array(NULL,             NULL,                 TRUE,            NULL,     NULL,        ),
  ),
  // User
  'user' => array(
    'administer permissions'                     => array(NULL,             NULL,                 NULL,            NULL,     NULL,        ),
    'administer users'                           => array(NULL,             NULL,                 TRUE,            NULL,     NULL,        ),
    'access user profiles'                       => array(NULL,             NULL,                 NULL,            NULL,     NULL,        ),
    'change own username'                        => array(NULL,             NULL,                 NULL,            NULL,     NULL,        ),
    'cancel account'                             => array(NULL,             NULL,                 TRUE,            TRUE,     NULL,        ),
    'select account cancellation method'         => array(NULL,             NULL,                 NULL,            NULL,     NULL,        ),
  ),
  // Views
  'views' => array(
    'administer views'                           => array(NULL,             NULL,                 TRUE,            NULL,     NULL,        ),
    'access all views'                           => array(NULL,             NULL,                 TRUE,            NULL,     NULL,        ),
  ),
  // Webform
  'webform' => array(
    'access all webform results'                 => array(NULL,             NULL,                 TRUE,            NULL,     NULL,        ),
    'access own webform results'                 => array(NULL,             NULL,                 TRUE,            TRUE,     NULL,        ),
    'edit all webform submissions'               => array(NULL,             NULL,                 TRUE,            NULL,     NULL,        ),
    'delete all webform submissions'             => array(NULL,             NULL,                 TRUE,            NULL,     NULL,        ),
    'access own webform submissions'             => array(NULL,             NULL,                 TRUE,            TRUE,     NULL,        ),
    'edit own webform submissions'               => array(NULL,             NULL,                 TRUE,            TRUE,     NULL,        ),
    'delete own webform submissions'             => array(NULL,             NULL,                 TRUE,            TRUE,     NULL,        ),
  ),
  // Weight
  'weight' => array(
    'assign node weight'                         => array(NULL,             NULL,                 TRUE,            TRUE,     NULL,        ),
  ),
  // Webform Widget
  'campaignion_webform_widget' => array(
    'access widget tab'                          => array(NULL,             NULL,                 TRUE,            NULL,     NULL,        ),
  ),
  // XML sitemap
  'xmlsitemap' => array(
    'administer xmlsitemap'                      => array(NULL,             NULL,                 TRUE,            NULL,     NULL,        ),
  ),
);
