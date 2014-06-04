api = 2
core = 7.x
projects[drupal][version] = 7.27
; [FormAPI] Make #state work with vertical tabs - https://drupal.org/node/1777970
projects[drupal][patch][] = https://drupal.org/files/vertical-tabs-state-invisible_7_16.patch
; Notice: Array to string conversion in DrupalDefaultEntityController->cacheGet() - http://drupal.org/node/1525176
projects[drupal][patch][] = http://drupal.org/files/1525176-fix_entity_conditions-D7-do-not-test.patch
; Make core JS send change events when they change checkbox states. - https://drupal.org/node/2239961
projects[drupal][patch][] = https://drupal.org/files/issues/core-checkbox-events.patch
projects[drupal][patch][] = http://drupal.org/files/d7-mail-wordwrap.patch
; Call hook_drupal_menu_links_alter() - used in campaignion_bar
projects[drupal][patch][] = https://drupal.org/files/issues/drupal_menu_links_alter.patch
; Fix taxonomy field default values - http://drupal.org/node/1140188
projects[drupal][patch][] = http://drupal.org/files/taxonomy_default_value_autocreate_0.patch
; Allow users with bypass nodes to access menu items for unpublished nodes - https://drupal.org/node/460408
projects[drupal][patch][] = https://drupal.org/files/issues/menu-access_unpublished-nodes_460408-157.patch
; Guarantee calls to hook_field_presave(). - http://drupal.org/node/1994594
projects[drupal][patch][] = http://drupal.org/files/field_guarantee_hook_field_presave.patch
; Allow hook_boot() to skip page cache. (geoip_language_redirect) - http://drupal.org/node/322104
projects[drupal][patch][] = http://drupal.org/files/hook_boot_may_defer_cache-7.x-322104-37.patch
; form elements can now set their custom CSS classes via #wrapper_attributes. - http://drupal.org/node/2190525
projects[drupal][patch][] = https://drupal.org/files/issues/form-item-add-wrapper-class-attributes-2190525-D7.patch
; Flush node-load cache when translating nodes - https://drupal.org/node/1936942
projects[drupal][patch][] = https://drupal.org/files/drupal-translation_load_cache-1936942-1.patch
