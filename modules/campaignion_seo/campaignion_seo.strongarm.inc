<?php

/**
 * @file
 * campaignion_seo.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function campaignion_seo_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_minimum_lifetime';
  $strongarm->value = '43200';
  $export['xmlsitemap_minimum_lifetime'] = $strongarm;

  return $export;
}
