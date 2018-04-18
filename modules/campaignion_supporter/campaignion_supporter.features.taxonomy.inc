<?php
/**
 * @file
 * campaignion_supporter.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function campaignion_supporter_taxonomy_default_vocabularies() {
  return array(
    'supporter_tags' => array(
      'name' => 'Supporter Tags',
      'machine_name' => 'supporter_tags',
      'description' => 'Taxonomy tags for Campaignion contacts',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'language' => 'und',
      'i18n_mode' => 0,
      'base_i18n_mode' => 0,
      'base_language' => 'und',
    ),
  );
}
