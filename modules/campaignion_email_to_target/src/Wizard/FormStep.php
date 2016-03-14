<?php

namespace Drupal\campaignion_email_to_target\Wizard;

use \Drupal\campaignion_wizard\WebformStep;

use \FormBuilderLoader;

class FormStep extends WebformStep {

  /**
   * Build a "standard" webform component list from our form_builder array.
   *
   * @param array $root
   *   A form_builder_webform form-array.
   *
   * @result array
   *   List of webform component arrays like in $node->webform['components'].
   */
  protected function components($root) {
    $list = [];
    function _preOrder(&$element, &$list) {
      foreach (element_children($element, TRUE) as $key) {
        $c = &$element[$key];
        if (isset($c['#webform_component'])) {
          $c['#webform_component']['weight'] = $c['#weight'];
          $list[$c['#webform_component']['cid']] = $c['#webform_component'];
        }
        _preOrder($c, $list);
      }
    }
    _preOrder($root, $list);

    $tree = [];
    $page_count = 1;
    _webform_components_tree_build($list, $tree, 0, $page_count);
    $list = _webform_components_tree_flatten($tree['children']);
    return $list;
  }

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
    $node = $this->wizard->node;
    $form_obj = FormBuilderLoader::instance()->fromCache('webform', $node->nid);
    $components = $this->components($form_obj->getFormArray());

    $postcode = NULL;
    $target_selector = NULL;
    foreach ($components as $c) {
      if ($c['type'] == 'uk_postcode' && !$postcode) {
        $postcode = $c;
      }
      if ($c['type'] == 'e2t_selector' && !$target_selector) {
        $target_selector = $c;
      }
    }
    if ($postcode && $postcode['form_key'] != 'postcode') {
      form_error($form, t("The postcode field must have the form_key 'postcode'"));
    }
    if ($postcode && $target_selector) {
      if ($postcode['page_num'] >= $target_selector['page_num']) {
        form_error($form, t("The 'target selector' must be at least one page after the 'postcode' field."));
      }
    }
    elseif (!$postcode && !$target_selector) {
      form_error($form, t("The form must have a 'UK Postcode' element and as well as a 'target selector'."));
    }
    elseif (!$postcode) {
      form_error($form, t("There must be a 'UK Postcode' element on the form and it needs to be on a page before the 'target selector'."));
    }
    elseif (!$target_selector) {
      form_error($form, t("There must be a 'Target selector' element on the form and it needs to be on a page after the 'target selector'."));
    }
  }

}
