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
