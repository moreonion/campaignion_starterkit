api = 2
core = 7.x

projects[drupal][version] = 7.92
; Fixup nested node loads - https://www.drupal.org/node/2832465
projects[drupal][patch][] = https://www.drupal.org/files/issues/2832465-3-workaround-for-concurrent-entity-loads.patch
; [FormAPI] Make #state work with vertical tabs - https://drupal.org/node/1777970
projects[drupal][patch][] = https://drupal.org/files/vertical-tabs-state-invisible_7_16.patch
; Make core JS send change events when they change checkbox states. - https://drupal.org/node/2239961
projects[drupal][patch][] = https://drupal.org/files/issues/core-checkbox-events.patch
; Call hook_menu_links_alter() - used in campaignion_bar - https://www.drupal.org/node/2242307
projects[drupal][patch][] = https://drupal.org/files/issues/drupal_menu_links_alter.patch
; Fix taxonomy field default values - http://drupal.org/node/1140188
projects[drupal][patch][] = http://drupal.org/files/taxonomy_default_value_autocreate_0.patch
; Guarantee calls to hook_field_presave(). - http://drupal.org/node/1994594
projects[drupal][patch][] = http://drupal.org/files/field_guarantee_hook_field_presave.patch
; form elements can now set their custom CSS classes via #wrapper_attributes. - http://drupal.org/node/2190525
projects[drupal][patch][] = https://drupal.org/files/issues/form-item-add-wrapper-class-attributes-2190525-D7.patch
; Avoid stale static cache during install.
projects[drupal][patch][] = https://www.drupal.org/files/issues/1891356-drupal_static_reset-on-module-changes-30-D7.patch
; Avoid duplicate form-submissions in non-ajax forms. - https://www.drupal.org/node/1705618
projects[drupal][patch][] = https://www.drupal.org/files/issues/form-single-submit-1705618-124.patch
; Fix notices for cron.php access denied in maintenance mode. - https://www.drupal.org/project/drupal/issues/3007538
projects[drupal][patch][] = https://www.drupal.org/files/issues/2018-10-18/3007538-dont-render-integers-2.patch
