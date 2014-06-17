api = 2
core = 7.x

projects[addressfield][version] = 1.0-beta5
; Federal states of AT and DE - https://drupal.org/node/1851908
projects[addressfield][patch][] = https://drupal.org/files/addressfield_1.0-beta3_federal_states_of_AT_and_DE.patch
; Make empty addresses possible - https://drupal.org/node/968112
projects[addressfield][patch][] = https://drupal.org/files/issues/addressfield-nocountry_option-968112-134.patch

projects[campaignion][version] = 1.0-beta7

projects[cck_blocks][version] = 1.1

projects[clientside_validation][download][type] = git
projects[clientside_validation][download][url] = http://git.drupal.org/project/clientside_validation.git
; additional methods for clientside_validation to accept file-type restrictions in upload fields - https://drupal.org/node/2149091
projects[clientside_validation][patch][] = https://drupal.org/files/issues/2149091-add-additional_methods.js-9.patch

projects[context][version] = 3.2
; Make block title configurable in contexts - https://drupal.org/node/795058
projects[context][patch][] = https://drupal.org/files/issues/context-795058-override-block-titles-72.patch
; Fix previous patch to work with wildcards - https://drupal.org/node/1421104
projects[context][patch][] = https://drupal.org/files/issues/1421104-context_condition_context-fix-resolution-13.patch

projects[context_entity_field][version] = 1.1
; Allow filtering by view-mode. - https://drupal.org/node/2022197
projects[context_entity_field][patch][] = https://drupal.org/files/context_entity_field-view_mode-7.x-1.1.patch
; Node translation support for node_reference fields - https://drupal.org/node/2058625
projects[context_entity_field][patch][] = https://drupal.org/files/context_entity_field-support_18n_node.patch

projects[context_get][version] = 1.2

projects[ctools][version] = 1.4
; Patch auto-submit.js to allow arbitrary wrappers. - https://drupal.org/node/2239257
projects[ctools][patch][] = https://drupal.org/files/issues/auto-submit.js-allow-arbitrary-wrappers.patch

projects[currency][version] = 2.4

projects[custom_add_another][version] = 1.0-rc3

projects[date][version] = 2.7

projects[diff][version] = 3.2

projects[elysia_cron][version] = 2.1

projects[entity][version] = 1.5

projects[entityreference][version] = 1.1

projects[features][version] = 2.0
; Use better working core machine-name field. - https://drupal.org/node/1259362
projects[features][patch][] = https://drupal.org/files/features.machine-name-core-element-1259362-6.patch

projects[field_collection][version] = 1.0-beta7
; fix call to undefined function entity_i18n_string - http://drupal.org/node/1471840
projects[field_collection][patch][] = http://drupal.org/files/replace_entity_i18n_string-1471840-1.patch
; Add title to 'Add new section'-link - https://drupal.org/node/2239913
projects[field_collection][patch][] = https://drupal.org/files/issues/field_collection-title-for-add-link.patch
; Support for i18n_node - https://drupal.org/node/1316162
projects[field_collection][patch][] = https://drupal.org/files/field_collection-1316162-192.patch
; No output if field_collection is empty. - https://drupal.org/node/1276258
projects[field_collection][patch][] = https://drupal.org/files/field_collection-completely-hide-empty-1276258-64.patch

projects[field_group][version] = 1.4

projects[field_type_language][version] = 1.0-alpha2

projects[file_entity][version] = 2.0-alpha3

projects[form_builder][version] = 1.5
; Make the field palette alterable to change it depending on the nodes content-type and implement unique in some custom way. (@see campaignion_form_builder). - https://drupal.org/node/2239395
projects[form_builder][patch][] = https://drupal.org/files/issues/2239395-form_builder-palette-alter-1.patch
; select or other integration - http://drupal.org/node/1575064
projects[form_builder][patch][] = http://drupal.org/files/form_builder_select_or_other.patch

projects[geoip_language_redirect][version] = 1.0-beta1

projects[honeypot][version] = 1.17

projects[ife][version] = 2.0-alpha2

projects[i18n][version] = 1.11

projects[imagefield_crop][version] = 1.1

projects[jquery_update][version] = 2.4
; Latest dev renames all jquery ui effects files so they no longer match core and are not replaced - https://drupal.org/node/2149395
projects[jquery_update][patch][] = https://drupal.org/files/issues/jquery_update-local-ui-effects-not-found-2149395.patch

projects[l10n_client][version] = 1.3

projects[l10n_update][version] = 1.0
; fallback for language imports de-AT -> de. - https://drupal.org/node/580260
projects[l10n_update][patch][] = https://drupal.org/files/l10n_update-language-fallback.patch
; Completely rip out requirements-checking to keep admin/config usable. - https://drupal.org/node/2150545
projects[l10n_update][patch][] = https://drupal.org/files/issues/2150545-rip-out-hook-requirements-3.patch

projects[less][version] = 3.0

projects[libraries][version] = 2.2

projects[little_helpers][version] = 1.0-beta4

projects[login_destination][version] = 1.1

projects[logintoboggan][version] = 1.3

projects[mailsystem][version] = 2.34

projects[manual_direct_debit][version] = 1.0-alpha1

projects[media][download][type] = git
projects[media][download][url] = http://git.drupal.org/project/media.git
projects[media][download][branch] = 7.x-2.x
projects[media][download][revision] = 7f322d9579dc9d12d3812f7496794743a7fc52d9
; Ajax callbacks in the media overlay cause the active tab to switch tab unexpectedly - https://drupal.org/node/1802026
projects[media][patch][] = https://drupal.org/files/issues/1802026-media-browser-keep-tab-42.patch
; Fix for replacePlaceholderWithToken in media_wysiwyg.filter.js - https://drupal.org/node/2164823
projects[media][patch][] = https://drupal.org/files/issues/media-browser-incompatibilities.patch

projects[media_vimeo][version] = 2.0

projects[media_youtube][version] = 2.0-rc4
projects[media_youtube][patch][] = https://drupal.org/files/issues/media_youtube-2.x-clearfix-for-form-widget-2429.patch
projects[media_youtube][patch][] = https://drupal.org/files/youtube-next-previous-links-1551376-7.patch

projects[menu_block][version] = 2.4

projects[metatag][version] = 1.0-beta9

projects[metatags_quick][version] = 2.7

projects[migrate][version] = 2.5

projects[mimemail][version] = 1.0-beta3

projects[modernizr][version] = 3.2

projects[morelesszen][version] = 1.0-beta3

projects[mpay24_payment][version] = 1.0-beta2

projects[oowizard][version] = 1.0-alpha3

projects[opengraph_meta][version] = 1.3
; Small thumbnail image preset causes images not to show - https://drupal.org/node/1720716
projects[opengraph_meta][patch][] = https://drupal.org/files/opengraph_meta-allow_choice_of_image_style-1720716-2.patch

projects[options_element][version] = 1.12

projects[page_title][version] = 2.7

projects[password_toggle][version] = 1.0

projects[pathauto][version] = 1.2

projects[payment][version] = 1.10
; make paymentreferences work with MyISAM - https://drupal.org/node/2239931
projects[payment][patch][] = https://drupal.org/files/issues/index_too_large.patch
; Don't show confusing empty line item forms. - https://drupal.org/node/2221447
projects[payment][patch][] = https://drupal.org/files/issues/2221447-payment-no-empty-line-items-1.patch
; Make hook_default_payment_method() work. - https://drupal.org/node/2174395
projects[payment][patch][] = https://drupal.org/files/issues/2174395-payment-21.patch

projects[payment_forms][version] = 1.0-alpha3

projects[paymill_payment][version] = 1.0-beta1

projects[pgbar][version] = 1.4

projects[psr0][version] = 1.1

projects[redhen][version] = 1.7

projects[redirect][version] = 1.0-rc1
; avoid circular redirect in hook_path_update - http://drupal.org/node/1796596
projects[redirect][patch][] = https://drupal.org/files/issues/redirect.circular-loops.1796596-146.patch

projects[references][version] = 2.1

projects[respondjs][version] = 1.3
; New URL to respond.min.js (GitHub) - https://drupal.org/node/2179017
projects[respondjs][patch][] = https://drupal.org/files/issues/2179017-download-url-3.patch

projects[select_or_other][version] = 2.20

projects[session_cache][version] = 1.3
; Use session_cache during hook_boot() - https://drupal.org/node/2119579
projects[session_cache][patch][] = https://drupal.org/files/session_cache-require-unicode.inc-2119579-1.patch

projects[share_light][type] = "module"
projects[share_light][download][type] = "git"
projects[share_light][download][url] = "git://git.drupal.org/project/share_light.git"
projects[share_light][download][branch] = "7.x-1.x"
projects[share_light][download][revision] = "cbc7b5c2651886f02609a936ba2823364eb3c850"

projects[stripe_payment][version] = 1.0-beta1

projects[strongarm][version] = 2.0

projects[token][version] = 1.5

projects[token_filter][version] = 1.1

projects[uuid][version] = 1.0-alpha5

projects[uuid_features][version] = 1.0-alpha4
; Make uuid_features work with i18n_node (tnids). - https://drupal.org/node/2117453
projects[uuid_features][patch][] = https://drupal.org/files/issues/2117453-uuid_features-use-entity_uuid_save-4.patch

projects[variable][version] = 2.5

projects[views][version] = 3.8
projects[views][patch][] = http://drupal.org/files/views_issue_1609088_undefined_index_uid.patch

projects[webform][version] = 3.20
projects[webform][patch][] = https://drupal.org/files/issues/2117285-webform-allow-extra-data-do-be-added-to-submissions-1.patch
; Save value of private fields in submission. - https://drupal.org/node/2019393
projects[webform][patch][] = https://drupal.org/files/issues/2019393-render-private-fields-with-access-false-13.patch
; CSV exports have too less or too many data fields (with select component) - https://drupal.org/node/2200545
projects[webform][patch][] = https://drupal.org/files/issues/2200545-csv-export-fix-fields_1.patch
; Add index to webform_submitted_data.data to make unique validation scaleable. - https://drupal.org/node/2213945
projects[webform][patch][] = https://drupal.org/files/issues/2213945-index-for-webform_submitted_data.data-1.patch

projects[webform_ajax][version] = 1.1

projects[webform_block][version] = 1.0-alpha1

projects[webform_confirm_email][version] = 1.2
; Add support for webform_template. - https://drupal.org/node/2243559
projects[webform_confirm_email][patch][] = https://drupal.org/files/issues/webform_confirm_email-support-for-webform_template.patch

projects[webform_steps][version] = 1.0-alpha4

projects[webform_custom_buttons][version] = 1.0-alpha3

projects[webform_paymethod_select][version] = 1.0-rc3

projects[webform_template][version] = 1.3

projects[webform_tracking][version] = 1.0-beta2

projects[webform_validation][version] = 1.5
; Add support for webform_template. - https://drupal.org/node/2243681
projects[webform_validation][patch][] = https://drupal.org/files/issues/webform_validation-2243681-support-for-webform_template-7.patch

projects[webform_conditional][version] = 1.0-beta2

projects[weight][version] = 2.3

projects[wysiwyg][version] = 2.2

projects[xmlsitemap][version] = 2.0

projects[xautoload][version] = 4.5

projects[simplicity][version] = 1.0-beta3

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

libraries[paymill][download][type] = file
libraries[paymill][download][url] = https://github.com/paymill/paymill-php/archive/v3.0.2.tar.gz

libraries[respondjs][download][type] = file
libraries[respondjs][download][url] = https://raw.github.com/scottjehl/Respond/master/dest/respond.min.js

libraries[stripe][download][type] = git
libraries[stripe][download][url] = https://github.com/stripe/stripe-php.git
libraries[stripe][download][revision] = v1.11.0

libraries[timeago][download][type] = git
libraries[timeago][download][url] = https://github.com/rmm5t/jquery-timeago.git
libraries[timeago][download][revision] = v1.4.1

libraries[jquery][download][type] = file
libraries[jquery][download][url] = http://code.jquery.com/jquery-1.10.2.min.js

