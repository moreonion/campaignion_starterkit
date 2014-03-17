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
    'ae_contact_tags_taxonomy' => array(
      'name' => 'ae_contact_tags_taxonomy',
      'machine_name' => 'ae_contact_tags_taxonomy',
      'description' => 'Taxonomy tags for Advocacy Engine contacts',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'engagement_level' => array(
      'name' => 'Engagement level',
      'machine_name' => 'engagement_level',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
