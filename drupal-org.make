api = 2
core = 7.x

projects[addressfield][version] = 1.3
; Federal states of AT and DE - https://drupal.org/node/1851908
projects[addressfield][patch][] = https://drupal.org/files/addressfield_1.0-beta3_federal_states_of_AT_and_DE.patch

projects[campaignion][version] = 2.16

projects[cck_blocks][version] = 1.1

projects[clientside_validation][version] = 1.47

projects[context][version] = 3.10
; Make block title configurable in contexts - https://drupal.org/node/795058
projects[context][patch][] = https://www.drupal.org/files/issues/795058-87-context-block-title.patch
; Fix previous patch to work with wildcards - https://drupal.org/node/1421104
projects[context][patch][] = https://www.drupal.org/files/issues/1421104-context_condition_context-fix-resolution-20.patch

projects[context_entity_field][version] = 1.1
; Allow filtering by view-mode. - https://drupal.org/node/2022197
projects[context_entity_field][patch][] = https://drupal.org/files/context_entity_field-view_mode-7.x-1.1.patch
; Node translation support for node_reference fields - https://drupal.org/node/2058625
projects[context_entity_field][patch][] = https://drupal.org/files/context_entity_field-support_18n_node.patch

projects[context_get][version] = 1.2

projects[ctools][version] = 1.15
; Patch auto-submit.js to allow arbitrary wrappers. - https://drupal.org/node/2239257
projects[ctools][patch][] = https://drupal.org/files/issues/auto-submit.js-allow-arbitrary-wrappers.patch
; Fix: Race condition in ctools_object_cache_set()
projects[ctools][patch][] = https://www.drupal.org/files/issues/2795887-2-ctool_object_cache_set-transaction.patch
; Fix: ajax-responder.js fails to add ajax commands to Drupal.ajax.prototype.commands - https://www.drupal.org/project/ctools/issues/2889951
projects[ctools][patch][] = https://www.drupal.org/files/issues/2018-03-11/2889951-7.patch


projects[currency][version] = 2.6

projects[custom_add_another][version] = 1.0

projects[date][version] = 2.10

projects[entity][version] = 1.9

projects[entityreference][version] = 1.5

projects[features][version] = 2.11
projects[features][patch][] = https://www.drupal.org/files/issues/2446485-41-module-defaults-vs-features.patch

projects[field_collection][version] = 1.1
; Add title to 'Add new section'-link - https://drupal.org/node/2239913
projects[field_collection][patch][] = https://drupal.org/files/issues/field_collection-title-for-add-link.patch

projects[field_group][version] = 1.6
projects[field_group][patch][] = https://www.drupal.org/files/issues/1670136-export-ctools-plugin-info-21.patch

projects[field_type_language][version] = 1.0

projects[file_entity][version] = 2.30

projects[form_builder][version] = 2.0-alpha7
; Make the field palette alterable to change it depending on the nodes content-type and implement unique in some custom way. (@see campaignion_form_builder). - https://drupal.org/node/2239395
projects[form_builder][patch][] = https://drupal.org/files/issues/2239395-form_builder-palette-alter-2.patch

projects[geoip_language_redirect][version] = 2.1

projects[honeypot][version] = 1.26

projects[ife][version] = 2.0-alpha3

projects[i18n][version] = 1.27

projects[imagefield_crop][version] = 1.1

projects[jquery_update][version] = 2.7

projects[l10n_client][version] = 1.3

projects[l10n_update][version] = 1.4
; fallback for language imports de-AT -> de. - https://drupal.org/node/580260
projects[l10n_update][patch][] = https://www.drupal.org/files/issues/2019-10-03/l10n_update-580260-language-fallback-7.x-1.x-25.patch
; Completely rip out requirements-checking to keep admin/config usable. - https://drupal.org/node/2150545
projects[l10n_update][patch][] = https://www.drupal.org/files/issues/2019-10-03/2150545-rip-out-hook-requirements-7.patch

projects[libraries][version] = 2.5

projects[little_helpers][version] = 2.0-alpha12

projects[logintoboggan][version] = 1.5

projects[mailsystem][version] = 2.35

projects[manual_direct_debit][version] = 1.5

projects[media][version] = 2.26

projects[media_vimeo][version] = 2.1

projects[media_youtube][version] = 3.9

projects[menu_block][version] = 2.8

projects[metatag][version] = 1.27

projects[mimemail][version] = 1.1
projects[mimemail][patch][] = https://www.drupal.org/files/issues/2765387-wrap-css-3.patch

projects[modernizr][version] = 3.11

projects[morelesszen][version] = 1.14

projects[oowizard][version] = 1.0-alpha3

projects[opengraph_meta][version] = 2.0-beta2

projects[options_element][version] = 1.12

projects[page_title][version] = 2.7
projects[page_title][patch][] = https://www.drupal.org/files/1024624-11-include_once.patch

projects[password_toggle][version] = 1.0

projects[pathauto][version] = 1.3

projects[payment][version] = 1.20

projects[payment_context][version] = 1.0

projects[payment_controller_data][version] = 1.0

projects[payment_forms][version] = 2.2

projects[payment_recurrence][version] = 1.0-alpha2

projects[paymill_payment][version] = 1.0-beta9

projects[payone_payment][version] = 1.0

projects[paypal_payment][version] = 1.5

projects[pgbar][version] = 2.8

projects[polling][version] = 1.0

projects[postal_code_validation][version] = 1.7

projects[postcode][version] = 1.2

projects[psr0][version] = 1.6

projects[recent_supporters][version] = 1.2

projects[redhen][version] = 1.13
; Fix fatal error in PHP 7.2. https://www.drupal.org/node/2937481
projects[redhen][patch][] = https://www.drupal.org/files/issues/2018-11-20/2937481-6.patch

projects[redirect][version] = 1.0-rc3

projects[references][version] = 2.2

projects[roleassign][version] = 1.2

projects[sagepay_payment][version] = 1.7

projects[select2][version] = 1.0

projects[select_or_other][version] = 2.24
; make JS hide/show functionality configurable per component - https://www.drupal.org/node/2343535
projects[select_or_other][patch][] = https://www.drupal.org/files/issues/2343535-provide-opt-out-possibility-for-JS-hide-show.patch
; Fix 'Undefined index …' notices - https://www.drupal.org/node/2560385
projects[select_or_other][patch][] = https://www.drupal.org/files/issues/2560385-select_or_other-defaults-in-hook_element_info-1.patch
; Fix values not replaced for unselected radios. - https://www.drupal.org/project/select_or_other/issues/2980184
projects[select_or_other][patch][] = https://www.drupal.org/files/issues/2018-06-18/select_or_other-always-replace-value-2980184-2.patch

projects[select2][version] = 1.0

projects[share_light][version] = 2.3

projects[stripe_payment][version] = 2.6

projects[strongarm][version] = 2.0

projects[token][version] = 1.7

projects[token_filter][version] = 1.1

projects[ultimate_cron][version] = 2.8

projects[uuid][version] = 1.3

projects[uuid_features][version] = 1.0-rc2

projects[variable][version] = 2.5

projects[views][version] = 3.24

projects[webform][version] = 4.23
; Allow extra data to be added in results - https://drupal.org/node/2117285
projects[webform][patch][] = https://www.drupal.org/files/issues/2020-06-24/2117285-submission-information-54.patch
; Replace tokens using values from previous pages. - https://www.drupal.org/node/2817093
projects[webform][patch][] = https://www.drupal.org/files/issues/2817093-2-tokens-in-default-values.patch

projects[webform_ajax][version] = 2.0

projects[webform_block][version] = 1.2

projects[webform_confirm_email][version] = 2.15

projects[webform_country_list][version] = 1.5

projects[webform_currency][version] = 1.1

projects[webform_custom_buttons][version] = 1.0-beta1

projects[webform_paymethod_select][version] = 2.4

projects[webform_prefill][version] = 1.1

projects[webform_steps][version] = 3.0-beta1

projects[webform_submission_uuid][version] = 1.0

projects[webform_template][version] = 4.0

projects[webform_tokens][version] = 4.0

projects[webform_tracking][version] = 2.2

projects[webform_validation][version] = 1.18

projects[weight][version] = 3.1
projects[weight][patch][] = https://www.drupal.org/files/issues/2637540-7-improve-performance-of-7301.patch

projects[wysiwyg][version] = 2.6

projects[xautoload][version] = 5.8

projects[xmlsitemap][version] = 2.6

projects[ae_admin][version] = 1.0-beta13

projects[simplicity][version] = 1.12

projects[tao][version] = 3.1

libraries[ckeditor][download][type] = file
libraries[ckeditor][download][url] = https://download.cksource.com/CKEditor/CKEditor/CKEditor%204.12.1/ckeditor_4.12.1_standard.zip

libraries[es6-promise][download][type] = file
libraries[es6-promise][download][url] = https://github.com/jakearchibald/es6-promise/archive/v4.1.1.tar.gz

;libraries[jquery.formprefill][download][type] = file
;libraries[jquery.formprefill][download][url] = https://github.com/moreonion/jquery.formprefill/archive/0.12.0.tar.gz

libraries[joyride][download][type] = file
libraries[joyride][download][url] = https://github.com/zurb/joyride/archive/v2.0.3.tar.gz

libraries[paymill-php][download][type] = file
libraries[paymill-php][download][url] = https://github.com/paymill/paymill-php/archive/v4.4.2.tar.gz

libraries[select2][download][type] = file
libraries[select2][download][url] = https://github.com/select2/select2/archive/4.0.5.tar.gz

libraries[stripe-php][download][type] = file
libraries[stripe-php][download][url] = https://github.com/stripe/stripe-php/archive/v7.45.0.tar.gz

libraries[timeago][download][type] = file
libraries[timeago][download][url] = https://github.com/rmm5t/jquery-timeago/archive/v1.6.3.tar.gz
