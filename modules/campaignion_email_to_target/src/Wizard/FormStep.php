<?php

namespace Drupal\campaignion_email_to_target\Wizard;

use \Drupal\campaignion_wizard\WebformStepUnique;

class FormStep extends WebformStepUnique {

  /**
   * Validate whether the resulting webform is something we can use.
   *
   * We need:
   *   1. At least one postcode and one target selector field.
   *   2. The postcode field must have the form_key postcode.
   *   3. The target selector must be on a page after the (first) postcode
   *      field.
   */
  public function validateStep($form, &$form_state) {
    parent::validateStep($form, $form_state);
    // $form['#node'] has already been updated by form_builder_webform_save_form_validate().
    $components = $form['#node']->webform['components'];

    $postcode = NULL;
    $target_selector = NULL;
    foreach ($components as $c) {
      if ($c['type'] == 'postcode' && !$postcode) {
        $postcode = $c;
      }
      if ($c['type'] == 'e2t_selector' && !$target_selector) {
        $target_selector = $c;
      }
    }
    if ($postcode && $postcode['form_key'] != 'postcode') {
      form_error($form, t('The postcode field has the wrong form key - it needs to be "postcode". Change it by clicking on the field, then click "edit" underneath Title field.'));
    }
    if ($postcode && $target_selector) {
      if ($postcode['page_num'] == $target_selector['page_num']) {
        form_error($form, t("The postcode and the target selector can't be placed on the same page. Add a 'page break' between the postcode field and the target selector field."));
      }
      elseif ($postcode['page_num'] > $target_selector['page_num']) {
        form_error($form, t("The postcode field needs to be placed before the target selector field, with a page break in between."));
      }
    }
    elseif (!$postcode && !$target_selector) {
      form_error($form, t("The postcode field and the target selector field have to be available. Please add them to the form."));
    }
    elseif (!$postcode) {
      form_error($form, t("The postcode field needs to be in the form. Please drag it in."));
    }
    elseif (!$target_selector) {
      form_error($form, t("The target selector field needs to be in the form. Please drag it in."));
    }
  }

}
