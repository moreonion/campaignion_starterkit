<?php
/**
 * @file
 * campaignion_protest_target.features.inc
 */

/**
 * Implements hook_default_redhen_contact_type().
 */
function campaignion_protest_target_default_redhen_contact_type() {
  $items = array();
  $items['email_protest_target'] = entity_import('redhen_contact_type', '{
    "name" : "email_protest_target",
    "label" : "Email Protest Target",
    "locked" : "0",
    "weight" : "0",
    "data" : null
  }');
  return $items;
}
