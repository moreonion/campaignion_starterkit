api = 2
core = 7.x

projects[addressfield][version] = 1.1
; Federal states of AT and DE - https://drupal.org/node/1851908
projects[addressfield][patch][] = https://drupal.org/files/addressfield_1.0-beta3_federal_states_of_AT_and_DE.patch

projects[campaignion][version] = 1.0-beta22

projects[cck_blocks][version] = 1.1

projects[clientside_validation][version] = 1.41

projects[context][version] = 3.6
; Make block title configurable in contexts - https://drupal.org/node/795058
projects[context][patch][] = https://www.drupal.org/files/issues/795058-80-context-block-title_0.patch
; Fix previous patch to work with wildcards - https://drupal.org/node/1421104
projects[context][patch][] = https://drupal.org/files/issues/1421104-context_condition_context-fix-resolution-20.patch

projects[context_entity_field][version] = 1.1
; Allow filtering by view-mode. - https://drupal.org/node/2022197
projects[context_entity_field][patch][] = https://drupal.org/files/context_entity_field-view_mode-7.x-1.1.patch
; Node translation support for node_reference fields - https://drupal.org/node/2058625
projects[context_entity_field][patch][] = https://drupal.org/files/context_entity_field-support_18n_node.patch

projects[context_get][version] = 1.2

projects[ctools][version] = 1.7
; Patch auto-submit.js to allow arbitrary wrappers. - https://drupal.org/node/2239257
projects[ctools][patch][] = https://drupal.org/files/issues/auto-submit.js-allow-arbitrary-wrappers.patch

projects[currency][version] = 2.5

projects[custom_add_another][version] = 1.0-rc3

projects[date][version] = 2.8

projects[diff][version] = 3.2

projects[elysia_cron][version] = 2.1

projects[entity][version] = 1.6

projects[entityreference][version] = 1.1

projects[features][version] = 2.6

projects[field_collection][version] = 1.0-beta8
; fix call to undefined function entity_i18n_string - http://drupal.org/node/1471840
projects[field_collection][patch][] = http://drupal.org/files/replace_entity_i18n_string-1471840-1.patch
; Add title to 'Add new section'-link - https://drupal.org/node/2239913
projects[field_collection][patch][] = https://drupal.org/files/issues/field_collection-title-for-add-link.patch

projects[field_group][version] = 1.4

projects[field_type_language][version] = 1.0

projects[file_entity][version] = 2.0-beta1

projects[form_builder][version] = 1.10
; Make the field palette alterable to change it depending on the nodes content-type and implement unique in some custom way. (@see campaignion_form_builder). - https://drupal.org/node/2239395
projects[form_builder][patch][] = https://drupal.org/files/issues/2239395-form_builder-palette-alter-1.patch
; Fix: form_builder keeps stale cache. - https://drupal.org/node/2034543
projects[form_builder][patch][] = https://www.drupal.org/files/issues/2034543-form_builder-delete-cache-when-rendering-form_builder_interface-19.patch

projects[geoip_language_redirect][version] = 1.0-beta3

projects[honeypot][version] = 1.18

projects[ife][version] = 2.0-alpha2

projects[i18n][version] = 1.13

projects[imagefield_crop][version] = 1.1

projects[jquery_update][version] = 2.6

projects[l10n_client][version] = 1.3

projects[l10n_update][version] = 1.1
; fallback for language imports de-AT -> de. - https://drupal.org/node/580260
projects[l10n_update][patch][] = https://drupal.org/files/l10n_update-language-fallback.patch
; Completely rip out requirements-checking to keep admin/config usable. - https://drupal.org/node/2150545
projects[l10n_update][patch][] = https://www.drupal.org/files/issues/2150545-rip-out-hook-requirements-5.patch

projects[less][version] = 3.0

projects[libraries][version] = 2.2

projects[little_helpers][version] = 1.0-rc1

projects[login_destination][version] = 1.1

projects[logintoboggan][version] = 1.5

projects[mailsystem][version] = 2.34

projects[manual_direct_debit][version] = 1.0-beta1

projects[media][download][type] = git
projects[media][download][url] = http://git.drupal.org/project/media.git
projects[media][download][branch] = 7.x-2.x
projects[media][download][revision] = 7f322d9579dc9d12d3812f7496794743a7fc52d9
; Ajax callbacks in the media overlay cause the active tab to switch tab unexpectedly - https://drupal.org/node/1802026
projects[media][patch][] = https://drupal.org/files/issues/1802026-media-browser-keep-tab-47.patch
; Fix for replacePlaceholderWithToken in media_wysiwyg.filter.js - https://drupal.org/node/2164823
projects[media][patch][] = https://drupal.org/files/issues/media-browser-incompatibilities.patch
; Fix for drush message: preg_replace_callback(): Requires argument 2, 'media_token_fid_to_uuid', to be a valid callback - https://drupal.org/node/2152061
projects[media][patch][] = https://www.drupal.org/files/issues/media-media_wysiwyg_uuid_callback_namespace-2152061.patch

projects[media_vimeo][version] = 2.0

projects[media_youtube][version] = 2.0-rc4
projects[media_youtube][patch][] = https://drupal.org/files/issues/media_youtube-2.x-clearfix-for-form-widget-2429.patch
projects[media_youtube][patch][] = https://drupal.org/files/youtube-next-previous-links-1551376-7.patch

projects[menu_block][version] = 2.6

projects[metatag][version] = 1.6

projects[mimemail][version] = 1.0-beta3

projects[modernizr][version] = 3.4

projects[morelesszen][version] = 1.0-beta8

projects[mpay24_payment][version] = 1.0-beta4

projects[oowizard][version] = 1.0-alpha3

projects[opengraph_meta][version] = 1.3
; Small thumbnail image preset causes images not to show - https://drupal.org/node/1720716
projects[opengraph_meta][patch][] = https://drupal.org/files/opengraph_meta-allow_choice_of_image_style-1720716-2.patch

projects[options_element][version] = 1.12

projects[page_title][version] = 2.7

projects[password_toggle][version] = 1.0

projects[pathauto][version] = 1.2
; Make pathauto remember which entities have manual paths. - https://www.drupal.org/node/936222
projects[pathauto][patch][] = https://www.drupal.org/files/issues/pathauto-persist-936222-213-pathauto-state.patch

projects[payment][version] = 1.15

projects[payment_context][version] = 1.0-rc2

projects[payment_forms][version] = 1.0-beta1

projects[paymill_payment][version] = 1.0-beta6

projects[paypal_payment][version] = 1.1
; Fix 403 when returning from paypal - https://drupal.org/node/2052361
projects[paypal_payment][patch][] = https://drupal.org/files/issues/paypal_payment-pps_HTTP_404_on_return_uri-2052361-40.patch
; Don't leave payment status on pending. - https://drupal.org/node/2142091
projects[paypal_payment][patch][] = https://drupal.org/files/issues/2142091-set-status-failed-when-there-is-no-payerid-5.patch

projects[pgbar][version] = 1.5

projects[psr0][version] = 1.4

projects[redhen][version] = 1.9

projects[redirect][version] = 1.0-rc2

projects[references][version] = 2.1

projects[respondjs][version] = 1.5

projects[select_or_other][version] = 2.22
; make JS hide/show functionality configurable per component - https://www.drupal.org/node/2343535
projects[select_or_other][patch][] = https://www.drupal.org/files/issues/2343535-provide-opt-out-possibility-for-JS-hide-show.patch

projects[session_cache][version] = 1.3
; Use session_cache during hook_boot() - https://drupal.org/node/2119579
projects[session_cache][patch][] = https://drupal.org/files/session_cache-require-unicode.inc-2119579-1.patch

projects[share_light][version] = 1.0-rc3

projects[stripe_payment][version] = 1.0-beta6

projects[strongarm][version] = 2.0

projects[token][version] = 1.6

projects[token_filter][version] = 1.1

projects[uuid][version] = 1.0-alpha6
; Don't break entities without entity support - https://www.drupal.org/node/1927474
projects[uuid][patch][] = https://www.drupal.org/files/issues/fix-non-uuid-entity-load-1927474-13.patch

; uuid_features-1.0-alpha4+58
projects[uuid_features][download][type] = git
projects[uuid_features][download][url] = http://git.drupal.org/project/uuid_features.git
projects[uuid_features][download][branch] = 7.x-1.x
projects[uuid_features][download][revision] = 2360332099cdf36479915d4011a9bdb96ab7dfbf

projects[variable][version] = 2.5

projects[views][version] = 3.11
projects[views][patch][] = http://drupal.org/files/views_issue_1609088_undefined_index_uid.patch

projects[webform][version] = 3.24
; Use batch API for results download. - https://drupal.org/node/1327186
projects[webform][patch][] = https://drupal.org/files/issues/0001-Use-batch-API-for-the-results-download-20.patch
; Allow extra data to be added in results - https://drupal.org/node/2117285
projects[webform][patch][] = https://drupal.org/files/issues/0002-Use-hooks-to-get-submission-information-do-not-test.patch

projects[webform_ajax][version] = 1.1

projects[webform_block][version] = 1.2

projects[webform_conditional][version] = 1.0-beta2

projects[webform_confirm_email][version] = 1.5

projects[webform_custom_buttons][version] = 1.0-alpha3

projects[webform_paymethod_select][version] = 1.3

projects[webform_steps][version] = 2.0-beta1

projects[webform_template][version] = 1.4

projects[webform_tracking][version] = 1.0-rc1

projects[webform_validation][version] = 1.10

projects[weight][version] = 2.5

projects[wysiwyg][version] = 2.2

projects[xmlsitemap][version] = 2.2

projects[xautoload][version] = 4.5

projects[simplicity][version] = 1.0-beta7

projects[tao][version] = 3.1

libraries[ckeditor][download][type] = file
libraries[ckeditor][download][url] = http://download.cksource.com/CKEditor/CKEditor/CKEditor%203.6.4/ckeditor_3.6.4.tar.gz

libraries[joyride][download][type] = file
libraries[joyride][download][url] = https://github.com/zurb/joyride/archive/v2.0.3.tar.gz

libraries[lessphp][download][type] = file
libraries[lessphp][download][url] = http://leafo.net/lessphp/src/lessphp-0.4.0.tar.gz

libraries[mailchimp][download][type] = git
libraries[mailchimp][download][url] = https://bitbucket.org/mailchimp/mailchimp-api-php.git
libraries[mailchimp][download][branch] = 2.0.4

libraries[paymill-php][download][type] = file
libraries[paymill-php][download][url] = https://github.com/paymill/paymill-php/archive/v3.0.2.tar.gz

libraries[respondjs][download][type] = file
libraries[respondjs][download][url] = https://raw.github.com/scottjehl/Respond/master/dest/respond.min.js

libraries[stripe-php][download][type] = git
libraries[stripe-php][download][url] = https://github.com/stripe/stripe-php.git
libraries[stripe-php][download][revision] = v1.11.0

libraries[timeago][download][type] = git
libraries[timeago][download][url] = https://github.com/rmm5t/jquery-timeago.git
libraries[timeago][download][revision] = v1.4.1

libraries[jquery][download][type] = file
libraries[jquery][download][url] = http://code.jquery.com/jquery-1.10.2.min.js

