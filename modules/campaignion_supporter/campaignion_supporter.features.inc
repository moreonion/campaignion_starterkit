<?php
/**
 * @file
 * campaignion_supporter.features.inc
 */

/**
 * Implements hook_default_redhen_contact_type().
 */
function campaignion_supporter_default_redhen_contact_type() {
  $items = array();
  $items['contact'] = entity_import('redhen_contact_type', '{
    "name" : "contact",
    "label" : "Contact",
    "locked" : "0",
    "weight" : "0",
    "data" : null
  }');
  return $items;
}
