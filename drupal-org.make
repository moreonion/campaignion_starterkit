api = 2
core = 7.x

projects[addressfield][version] = 1.2
; Federal states of AT and DE - https://drupal.org/node/1851908
projects[addressfield][patch][] = https://drupal.org/files/addressfield_1.0-beta3_federal_states_of_AT_and_DE.patch

projects[campaignion][version] = 1.14

projects[cck_blocks][version] = 1.1

projects[clientside_validation][version] = 1.46

projects[context][version] = 3.7
; Make block title configurable in contexts - https://drupal.org/node/795058
projects[context][patch][] = https://www.drupal.org/files/issues/795058-87-context-block-title.patch
; Fix previous patch to work with wildcards - https://drupal.org/node/1421104
projects[context][patch][] = https://drupal.org/files/issues/1421104-context_condition_context-fix-resolution-20.patch

projects[context_entity_field][version] = 1.1
; Allow filtering by view-mode. - https://drupal.org/node/2022197
projects[context_entity_field][patch][] = https://drupal.org/files/context_entity_field-view_mode-7.x-1.1.patch
; Node translation support for node_reference fields - https://drupal.org/node/2058625
projects[context_entity_field][patch][] = https://drupal.org/files/context_entity_field-support_18n_node.patch

projects[context_get][version] = 1.2

projects[ctools][version] = 1.14
; Patch auto-submit.js to allow arbitrary wrappers. - https://drupal.org/node/2239257
projects[ctools][patch][] = https://drupal.org/files/issues/auto-submit.js-allow-arbitrary-wrappers.patch

projects[currency][version] = 2.6

projects[custom_add_another][version] = 1.0

projects[date][version] = 2.10

projects[diff][version] = 3.3

projects[entity][version] = 1.9

projects[entityreference][version] = 1.5

projects[features][version] = 2.10
projects[features][patch][] = https://www.drupal.org/files/issues/2446485-41-module-defaults-vs-features.patch

projects[field_collection][version] = 1.0-beta12
; Add title to 'Add new section'-link - https://drupal.org/node/2239913
projects[field_collection][patch][] = https://drupal.org/files/issues/field_collection-title-for-add-link.patch

projects[field_group][version] = 1.6
projects[field_group][patch][] = https://www.drupal.org/files/issues/1670136-export-ctools-plugin-info-21.patch

projects[field_type_language][version] = 1.0

projects[file_entity][version] = 2.16

projects[form_builder][version] = 1.21
; Make the field palette alterable to change it depending on the nodes content-type and implement unique in some custom way. (@see campaignion_form_builder). - https://drupal.org/node/2239395
projects[form_builder][patch][] = https://drupal.org/files/issues/2239395-form_builder-palette-alter-2.patch

projects[geoip_language_redirect][version] = 2.1

projects[honeypot][version] = 1.24

projects[ife][version] = 2.0-alpha2

projects[i18n][version] = 1.22

projects[imagefield_crop][version] = 1.1

projects[jquery_update][version] = 2.7

projects[l10n_client][version] = 1.3

projects[l10n_update][version] = 1.1
; fallback for language imports de-AT -> de. - https://drupal.org/node/580260
projects[l10n_update][patch][] = https://drupal.org/files/l10n_update-language-fallback.patch
; Completely rip out requirements-checking to keep admin/config usable. - https://drupal.org/node/2150545
projects[l10n_update][patch][] = https://www.drupal.org/files/issues/2150545-rip-out-hook-requirements-5.patch

projects[libraries][version] = 2.3

projects[little_helpers][version] = 1.6

projects[logintoboggan][version] = 1.5

projects[mailsystem][version] = 2.34

projects[manual_direct_debit][version] = 1.1

projects[media][version] = 2.16

projects[media_vimeo][version] = 2.1

projects[media_youtube][version] = 3.7

projects[menu_block][version] = 2.7

projects[metatag][version] = 1.22

projects[mimemail][version] = 1.0
projects[mimemail][patch][] = https://www.drupal.org/files/issues/2765387-wrap-css-3.patch

projects[modernizr][version] = 3.10

projects[morelesszen][version] = 1.6

projects[oowizard][version] = 1.0-alpha3

projects[opengraph_meta][version] = 2.0-beta2

projects[options_element][version] = 1.12

projects[page_title][version] = 2.7
projects[page_title][patch][] = https://www.drupal.org/files/1024624-11-include_once.patch

projects[password_toggle][version] = 1.0

projects[pathauto][version] = 1.3

projects[payment][version] = 1.17

projects[payment_context][version] = 1.0-rc2

projects[payment_controller_data][version] = 1.0-rc2

projects[payment_forms][version] = 2.0

projects[paymill_payment][version] = 1.0-beta9

projects[payone_payment][version] = 1.0

projects[paypal_payment][version] = 1.3

projects[pgbar][version] = 2.0

projects[polling][version] = 1.0-beta1

projects[postal_code_validation][version] = 1.5

projects[postcode][version] = 1.0

projects[psr0][version] = 1.4

projects[recent_supporters][version] = 1.1

projects[redhen][version] = 1.13

projects[redirect][version] = 1.0-rc3

projects[references][version] = 2.2

projects[roleassign][version] = 1.2

projects[sagepay_payment][version] = 1.6

projects[select2][version] = 1.0

projects[select_or_other][version] = 2.23
; make JS hide/show functionality configurable per component - https://www.drupal.org/node/2343535
projects[select_or_other][patch][] = https://www.drupal.org/files/issues/2343535-provide-opt-out-possibility-for-JS-hide-show.patch
; Fix 'Undefined index …' notices - https://www.drupal.org/node/2560385
projects[select_or_other][patch][] = https://www.drupal.org/files/issues/2560385-select_or_other-defaults-in-hook_element_info-1.patch

projects[select2][version] = 1.0

projects[share_light][version] = 1.6

projects[stripe_payment][version] = 1.0-rc2

projects[strongarm][version] = 2.0

projects[token][version] = 1.7

projects[token_filter][version] = 1.1

projects[ultimate_cron][version] = 2.5

projects[uuid][version] = 1.0

projects[uuid_features][version] = 1.0-rc1

projects[variable][version] = 2.5

projects[views][version] = 3.18
projects[views][patch][] = http://drupal.org/files/views_issue_1609088_undefined_index_uid.patch

projects[webform][version] = 4.16
; Allow extra data to be added in results - https://drupal.org/node/2117285
projects[webform][patch][] = https://www.drupal.org/files/issues/2117285-submission-information-49.patch
; Replace tokens using values from previous pages. - https://www.drupal.org/node/2817093
projects[webform][patch][] = https://www.drupal.org/files/issues/2817093-2-tokens-in-default-values.patch

projects[webform_ajax][download][type] = git
projects[webform_ajax][download][url] = https://git.drupal.org/project/webform_ajax.git
projects[webform_ajax][download][branch] = 7.x-1.x
projects[webform_ajax][download][revision] = 2dbf5797458d31509ba6a34ccab2907889d78c48
projects[webform_ajax][patch][] = https://www.drupal.org/files/issues/2102029-remove-bogus-workaround-20.patch

projects[webform_block][version] = 1.2

projects[webform_confirm_email][version] = 2.11

projects[webform_country_list][version] = 1.4

projects[webform_currency][version] = 1.0-beta1

projects[webform_custom_buttons][version] = 1.0-alpha3

projects[webform_paymethod_select][version] = 1.14

projects[webform_prefill][version] = 1.0-rc2

projects[webform_steps][version] = 2.1

projects[webform_submission_uuid][version] = 1.0-rc2

projects[webform_template][version] = 4.0

projects[webform_tokens][version] = 4.0

projects[webform_tracking][version] = 2.0-beta2

projects[webform_validation][version] = 1.14

projects[weight][version] = 3.1
projects[weight][patch][] = https://www.drupal.org/files/issues/2637540-7-improve-performance-of-7301.patch

projects[wysiwyg][version] = 2.4

projects[xautoload][version] = 5.7

projects[xmlsitemap][version] = 2.3

projects[ae_admin][version] = 1.0-beta4

projects[simplicity][version] = 1.5

projects[tao][version] = 3.1

libraries[ckeditor][download][type] = file
libraries[ckeditor][download][url] = http://download.cksource.com/CKEditor/CKEditor/CKEditor%204.7.3/ckeditor_4.7.3_standard.tar.gz

libraries[es6-promise][download][type] = file
libraries[es6-promise][download][url] = https://github.com/jakearchibald/es6-promise/archive/v4.1.1.tar.gz

;libraries[jquery.formprefill][download][type] = file
;libraries[jquery.formprefill][download][url] = https://github.com/moreonion/jquery.formprefill/archive/0.1.0.tar.gz

libraries[joyride][download][type] = file
libraries[joyride][download][url] = https://github.com/zurb/joyride/archive/v2.0.3.tar.gz

libraries[paymill-php][download][type] = file
libraries[paymill-php][download][url] = https://github.com/paymill/paymill-php/archive/v4.4.2.tar.gz

libraries[select2][download][type] = file
libraries[select2][download][url] = https://github.com/select2/select2/archive/4.0.4.tar.gz

libraries[stripe-php][download][type] = file
libraries[stripe-php][download][url] = https://github.com/stripe/stripe-php/archive/v6.4.1.tar.gz

libraries[timeago][download][type] = file
libraries[timeago][download][url] = https://github.com/rmm5t/jquery-timeago/archive/v1.6.3.tar.gz
