<?php

/**
 * @file
 * campaignion_conf.features.wysiwyg.inc
 */

/**
 * Implements hook_wysiwyg_default_profiles().
 */
function campaignion_conf_wysiwyg_default_profiles() {
  $profiles = array();

  // Exported profile: full_html_with_editor.
  $profiles['full_html_with_editor'] = array(
    'format' => 'full_html_with_editor',
    'editor' => 'ckeditor',
    'settings' => array(
      'theme' => 'advanced',
      'language' => 'en',
      'buttons' => array(
        'default' => array(
          'Bold' => 1,
          'Italic' => 1,
          'Strike' => 1,
          'BulletedList' => 1,
          'NumberedList' => 1,
          'Link' => 1,
          'Unlink' => 1,
          'Anchor' => 1,
          'Blockquote' => 1,
          'Source' => 1,
          'PasteFromWord' => 1,
          'SpecialChar' => 1,
          'Format' => 1,
          'Table' => 1,
          'CreateDiv' => 1,
          'Iframe' => 1,
          'Maximize' => 1,
          'SpellChecker' => 1,
          'Scayt' => 1,
        ),
        'drupal' => array(
          'media' => 1,
        ),
      ),
      'toolbarLocation' => 'top',
      'resize_enabled' => 1,
      'default_toolbar_grouping' => 1,
      'simple_source_formatting' => 0,
      'acf_mode' => 0,
      'acf_allowed_content' => '',
      'block_formats' => 'p,address,pre,h2,h3,h4,h5,h6,div',
      'css_setting' => 'theme',
      'css_theme' => 'wyiswyg_theme_default',
      'css_path' => '',
      'stylesSet' => '',
      'forcePasteAsPlainText' => 1,
      'pasteFromWordPromptCleanup' => 0,
    ),
    'preferences' => array(
      'add_to_summaries' => 1,
      'default' => 1,
      'show_toggle' => 0,
      'user_choose' => 1,
      'version' => '4.6.2.20af917',
    ),
    'name' => 'formatfull_html_with_editor',
  );

  return $profiles;
}
