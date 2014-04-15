<?php
/*
 * Implements hook_preprocess_html().
 */
function ae_admin_preprocess_html() {
  if (module_exists('views')) {
    drupal_add_css(drupal_get_path('module', 'views') . '/css/views-admin.seven.css', 'theme');
  }
}

/**
 * Implements hook_css_alter().
 * @TODO: Do this in .info once http://drupal.org/node/575298 is committed.
 */
function ae_admin_css_alter(&$css) {
  if (isset($css['modules/overlay/overlay-child.css'])) {
    $css['modules/overlay/overlay-child.css']['data'] = drupal_get_path('theme', 'ae_admin') . '/overlay-child.css';
  }
  if (isset($css['modules/shortcut/shortcut.css'])) {
    $css['modules/shortcut/shortcut.css']['data'] = drupal_get_path('theme', 'ae_admin') . '/shortcut.css';
  }
  // This can be removed once http://drupal.org/node/1221560 is released
  if (isset($css['sites/all/modules/views/css/views-admin.ae_admin.css'])) {
    $css['sites/all/modules/views/css/views-admin.ae_admin.css']['data'] = drupal_get_path('theme', 'ae_admin') . '/views-admin.ae_admin.css';
  }
}

/**
 * Implementation of hook_theme().
 */
function ae_admin_theme() {
  $items = array();

  // Content theming.
  $items['help'] =
  $items['node'] =
  $items['comment'] =
  $items['comment_wrapper'] = array(
    'path' => drupal_get_path('theme', 'ae_admin') .'/templates',
    'template' => 'object',
  );
  $items['node']['template'] = 'node';

  // Help pages really need help. See preprocess_page().
  $items['help_page'] = array(
    'variables' => array('content' => array()),
    'path' => drupal_get_path('theme', 'ae_admin') .'/templates',
    'template' => 'object',
    'preprocess functions' => array(
      'template_preprocess',
      'ae_admin_preprocess_help_page',
    ),
    'process functions' => array('template_process'),
  );

  // Form layout: default (2 column).
  $items['block_add_block_form'] =
  $items['block_admin_configure'] =
  $items['comment_form'] =
  $items['contact_admin_edit'] =
  $items['contact_mail_page'] =
  $items['contact_mail_user'] =
  $items['filter_admin_format_form'] =
  $items['forum_form'] =
  $items['locale_languages_edit_form'] =
  $items['menu_edit_menu'] =
  $items['menu_edit_item'] =
  $items['node_type_form'] =
  $items['path_admin_form'] =
  $items['system_settings_form'] =
  $items['system_themes_form'] =
  $items['system_modules'] =
  $items['system_actions_configure'] =
  $items['taxonomy_form_term'] =
  $items['taxonomy_form_vocabulary'] =
  $items['user_profile_form'] =
  $items['user_admin_access_add_form'] = array(
    'render element' => 'form',
    'path' => drupal_get_path('theme', 'ae_admin') .'/templates',
    'template' => 'form-default',
    'preprocess functions' => array(
      'ae_admin_preprocess_form_buttons',
    ),
  );

  // These forms require additional massaging.
  $items['confirm_form'] = array(
    'render element' => 'form',
    'path' => drupal_get_path('theme', 'ae_admin') .'/templates',
    'template' => 'form-simple',
    'preprocess functions' => array(
      'ae_admin_preprocess_form_confirm'
    ),
  );
  $items['node_form'] = array(
    'render element' => 'form',
    'path' => drupal_get_path('theme', 'ae_admin') .'/templates',
    'template' => 'form-default',
    'preprocess functions' => array(
      'ae_admin_preprocess_form_buttons',
      'ae_admin_preprocess_form_node',
    ),
  );
  $items['export_download_links'] = array(
    'variables' => array(
      'node' => NULL,
    ),
    'function' => 'theme_export_download_links',
  );

  return $items;
}

/**
 * Preprocessor for theme('page').
 */
function ae_admin_preprocess_page(&$vars) {
  // Show a warning if base theme is not present.
  if (!function_exists('tao_theme') && user_access('administer site configuration')) {
    drupal_set_message(t('The advocacy engine admin theme requires the !tao base theme in order to work properly.', array('!tao' => l('Tao', 'http://code.developmentseed.org/tao'))), 'warning');
  }

  // Set a page icon class.
  $vars['page_icon_class'] = ($item = menu_get_item()) ? implode(' ' , _ae_admin_icon_classes($item['href'])) : '';

  // Help pages. They really do need help.
  if (strpos($_GET['q'], 'admin/help/') === 0 && isset($vars['page']['content']['system_main']['main']['#markup'])) {
    $vars['page']['content']['system_main']['main']['#markup'] = theme('help_page', array('content' => $vars['page']['content']['system_main']['main']['#markup']));
  }

  // Clear out help text if empty.
  if (empty($vars['help']) || !(strip_tags($vars['help']))) {
    $vars['help'] = '';
  }

  // Process local tasks. Only do this processing if the current theme is
  // indeed ae_admin. Subthemes must reimplement this call.
  global $theme;
  if ($theme === 'ae_admin') {
    _ae_admin_local_tasks($vars);
  }

  // Overlay is enabled.
  $vars['overlay'] = (module_exists('overlay') && overlay_get_mode() === 'child');
}

/**
 * Preprocessor for theme('fieldset').
 */
function ae_admin_preprocess_fieldset(&$vars) {
  if (!empty($vars['element']['#collapsible'])) {
    $vars['title'] = "<span class='icon'></span>" . $vars['title'];
  }
}

/**
 * Preprocessor for handling form button for most forms.
 */
function ae_admin_preprocess_form_buttons(&$vars) {
  if (!empty($vars['form']['actions'])) {
    $vars['actions'] = $vars['form']['actions'];
    unset($vars['form']['actions']);
  }
}

/**
 * Preprocessor for theme('confirm_form').
 */
function ae_admin_preprocess_form_confirm(&$vars) {
  // Move the title from the page title (usually too big and unwieldy)
  $title = filter_xss_admin(drupal_get_title());
  $vars['form']['description']['#type'] = 'item';
  $vars['form']['description']['#value'] = empty($vars['form']['description']['#value']) ?
    "<strong>{$title}</strong>" :
    "<strong>{$title}</strong><p>{$vars['form']['description']['#value']}</p>";
  drupal_set_title(t('Please confirm'));
}

/**
 * Preprocessor for theme('node_form').
 */
function ae_admin_preprocess_form_node(&$vars) {
  $vars['sidebar'] = isset($vars['sidebar']) ? $vars['sidebar'] : array();
  // Support nodeformcols if present.
  if (module_exists('nodeformcols')) {
    $map = array(
      'nodeformcols_region_right' => 'sidebar',
      'nodeformcols_region_footer' => 'footer',
      'nodeformcols_region_main' => NULL,
    );
    foreach ($map as $region => $target) {
      if (isset($vars['form'][$region])) {
        if (isset($vars['form'][$region]['#prefix'], $vars['form'][$region]['#suffix'])) {
          unset($vars['form'][$region]['#prefix']);
          unset($vars['form'][$region]['#suffix']);
        }
        if (isset($vars['form'][$region]['actions'], $vars['form'][$region]['actions'])) {
          $vars['actions'] = $vars['form'][$region]['actions'];
          unset($vars['form'][$region]['actions']);
        }
        if (isset($target)) {
          $vars[$target] = $vars['form'][$region];
          unset($vars['form'][$region]);
        }
      }
    }
  }
  // Default to showing taxonomy in sidebar if nodeformcols is not present.
  elseif (isset($vars['form']['taxonomy']) && empty($vars['sidebar'])) {
    $vars['sidebar']['taxonomy'] = $vars['form']['taxonomy'];
    unset($vars['form']['taxonomy']);
  }
}

/**
 * Preprocessor for theme('button').
 */
function ae_admin_preprocess_button(&$vars) {
  if (isset($vars['element']['#value'])) {
    $classes = array(
      t('Save') => 'yes',
      t('Submit') => 'yes',
      t('Add') => 'yes',
      t('Delete') => 'no',
      t('Cancel') => 'no',
    );
    foreach ($classes as $search => $class) {
      if (strpos($vars['element']['#value'], $search) !== FALSE) {
        $vars['element']['#attributes']['class'][] = 'button-' . $class;
        break;
      }
    }
  }
}

/**
 * Preprocessor for theme('help').
 */
function ae_admin_preprocess_help(&$vars) {
  $vars['hook'] = 'help';
  $vars['attr']['id'] = 'help-text';
  $class = 'path-admin-help clear-block toggleable';
  $vars['attr']['class'] = isset($vars['attr']['class']) ? "{$vars['attr']['class']} $class" : $class;
  $help = menu_get_active_help();
  if (($test = strip_tags($help)) && !empty($help)) {
    // Thankfully this is static cached.
    $vars['attr']['class'] .= menu_secondary_local_tasks() ? ' with-tabs' : '';

    $vars['is_prose'] = TRUE;
    $vars['layout'] = TRUE;
    $vars['content'] = "<span class='icon'></span>" . $help;

    // Link to help section.
    $item = menu_get_item('admin/help');
    if ($item && $item['path'] === 'admin/help' && $item['access']) {
      $vars['links'] = l(t('More help topics'), 'admin/help');
    }
  }
}

/**
 * Preprocessor for theme('help_page').
 */
function ae_admin_preprocess_help_page(&$vars) {
  $vars['hook'] = 'help-page';

  $vars['title_attributes_array']['class'][] = 'help-page-title';
  $vars['title_attributes_array']['class'][] = 'clearfix';

  $vars['content_attributes_array']['class'][] = 'help-page-content';
  $vars['content_attributes_array']['class'][] = 'clearfix';
  $vars['content_attributes_array']['class'][] = 'prose';

  $vars['layout'] = TRUE;

  // Truly hackish way to navigate help pages.
  $module_info = system_rebuild_module_data();
  $modules = array();
  foreach (module_implements('help', TRUE) as $module) {
    if (module_invoke($module, 'help', "admin/help#$module", NULL)) {
      $modules[$module] = $module_info[$module]->info['name'];
    }
  }
  asort($modules);

  $links = array();
  foreach ($modules as $module => $name) {
    $links[] = array('title' => $name, 'href' => "admin/help/{$module}");
  }
  $vars['links'] = theme('links', array('links' => $links));
}

/**
 * Preprocessor for theme('node').
 */
function ae_admin_preprocess_node(&$vars) {
  $vars['layout'] = TRUE;
  $vars['submitted'] = _ae_admin_submitted($vars['node']);
}

/**
 * Preprocessor for theme('comment').
 */
function ae_admin_preprocess_comment(&$vars) {
  $vars['layout'] = TRUE;
  $vars['submitted'] = _ae_admin_submitted($vars['comment']);
}

/**
 * Preprocessor for theme('comment_wrapper').
 */
function ae_admin_preprocess_comment_wrapper(&$vars) {
  $vars['hook'] = 'box';
  $vars['layout'] = FALSE;
  $vars['title'] = t('Comments');

  $vars['attributes_array']['id'] = 'comments';

  $vars['title_attributes_array']['class'][] = 'box-title';
  $vars['title_attributes_array']['class'][] = 'clearfix';

  $vars['content_attributes_array']['class'][] = 'box-content';
  $vars['content_attributes_array']['class'][] = 'clearfix';
  $vars['content_attributes_array']['class'][] = 'prose';

  $vars['content'] = drupal_render_children($vars['content']);
}

/**
 * Preprocessor for theme('admin_block').
 */
function ae_admin_preprocess_admin_block(&$vars) {
  // Add icon and classes to admin block titles.
  if (isset($vars['block']['href'])) {
    $vars['block']['localized_options']['attributes']['class'] =  _ae_admin_icon_classes($vars['block']['href']);
  }
  $vars['block']['localized_options']['html'] = TRUE;
  if (isset($vars['block']['link_title'])) {
    $vars['block']['title'] = l("<span class='icon'></span>" . filter_xss_admin($vars['block']['link_title']), $vars['block']['href'], $vars['block']['localized_options']);
  }

  if (empty($vars['block']['content'])) {
    $vars['block']['content'] = "<div class='admin-block-description description'>{$vars['block']['description']}</div>";
  }
}

/**
 * Override of theme('breadcrumb').
 */
function ae_admin_breadcrumb($vars) {
  $output = '';

  // Add current page onto the end.
  if (!drupal_is_front_page()) {
    $item = menu_get_item();
    $end = end($vars['breadcrumb']);
    if ($end && strip_tags($end) !== $item['title']) {
      $vars['breadcrumb'][] = "<strong>". check_plain($item['title']) ."</strong>";
    }
  }

  // Optional: Add the site name to the front of the stack.
  if (!empty($vars['prepend'])) {
    $site_name = empty($vars['breadcrumb']) ? "<strong>". check_plain(variable_get('site_name', '')) ."</strong>" : l(variable_get('site_name', ''), '<front>', array('purl' => array('disabled' => TRUE)));
    array_unshift($vars['breadcrumb'], $site_name);
  }

  $depth = 0;
  foreach ($vars['breadcrumb'] as $link) {
    $output .= "<span class='breadcrumb-link breadcrumb-depth-{$depth}'>{$link}</span>";
    $depth++;
  }
  return $output;
}

/**
 * Override of theme('filter_guidelines').
 */
function ae_admin_filter_guidelines($variables) {
  return '';
}

/**
 * Override of theme('node_add_list').
 */
function ae_admin_node_add_list($vars) {
  $content = $vars['content'];

  $output = "<ul class='admin-list'>";
  if ($content) {
    foreach ($content as $item) {
      $item['title'] = "<span class='icon'></span>" . filter_xss_admin($item['title']);
      if (isset($item['localized_options']['attributes']['class'])) {
        $item['localized_options']['attributes']['class'] += _ae_admin_icon_classes($item['href']);
      }
      else {
        $item['localized_options']['attributes']['class'] = _ae_admin_icon_classes($item['href']);
      }
      $item['localized_options']['html'] = TRUE;
      $output .= "<li>";
      $output .= l($item['title'], $item['href'], $item['localized_options']);
      $output .= '<div class="description">'. filter_xss_admin($item['description']) .'</div>';
      $output .= "</li>";
    }
  }
  $output .= "</ul>";
  return $output;
}

/**
 * Override of theme_admin_block_content().
 */
function ae_admin_admin_block_content($vars) {
  $content = $vars['content'];

  $output = '';
  if (!empty($content)) {
  
    foreach ($content as $k => $item) {
    
      //-- Safety check for invalid clients of the function
      if (empty($content[$k]['localized_options']['attributes']['class'])) {
        $content[$k]['localized_options']['attributes']['class'] = array();
      }
      if (!is_array($content[$k]['localized_options']['attributes']['class'])) {
        $content[$k]['localized_options']['attributes']['class'] = array($content[$k]['localized_options']['attributes']['class']);
      }
    
      $content[$k]['title'] = "<span class='icon'></span>" . filter_xss_admin($item['title']);
      $content[$k]['localized_options']['html'] = TRUE;
      if (!empty($content[$k]['localized_options']['attributes']['class'])) {
        $content[$k]['localized_options']['attributes']['class'] += _ae_admin_icon_classes($item['href']);
      }
      else {
        $content[$k]['localized_options']['attributes']['class'] = _ae_admin_icon_classes($item['href']);
      }
    }
    $output = system_admin_compact_mode() ? '<ul class="admin-list admin-list-compact">' : '<ul class="admin-list">';
    foreach ($content as $item) {
      $output .= '<li class="leaf">';
      $output .= l($item['title'], $item['href'], $item['localized_options']);
      if (isset($item['description']) && !system_admin_compact_mode()) {
        $output .= "<div class='description'>{$item['description']}</div>";
      }
      $output .= '</li>';
    }
    $output .= '</ul>';
  }
  return $output;
}

/**
 * Override of theme('admin_drilldown_menu_item_link').
 */
function ae_admin_admin_drilldown_menu_item_link($link) {
  $link['localized_options'] = empty($link['localized_options']) ? array() : $link['localized_options'];
  $link['localized_options']['html'] = TRUE;
  if (!isset($link['localized_options']['attributes']['class'])) {
    $link['localized_options']['attributes']['class'] = _ae_admin_icon_classes($link['href']);
  }
  else {
    $link['localized_options']['attributes']['class'] += _ae_admin_icon_classes($link['href']);
  }
  $link['description'] = check_plain(truncate_utf8(strip_tags($link['description']), 150, TRUE, TRUE));
  $link['description'] = "<span class='icon'></span>" . $link['description'];
  $link['title'] .= !empty($link['description']) ? "<span class='menu-description'>{$link['description']}</span>" : '';
  $link['title'] = filter_xss_admin($link['title']);
  return l($link['title'], $link['href'], $link['localized_options']);
}

/**
 * Preprocessor for theme('textfield').
 */
function ae_admin_preprocess_textfield(&$vars) {
  if ($vars['element']['#size'] >= 30 && empty($vars['element']['#field_prefix']) && empty($vars['element']['#field_suffix'])) {
    $vars['element']['#size'] = '';
    if (!isset($vars['element']['#attributes']['class']) 
      || !is_array($vars['element']['#attributes']['class'])) {
       $vars['element']['#attributes']['class'] = array();
    }
    $vars['element']['#attributes']['class'][] = 'fluid';
  }
}

/**
 * Override of theme('menu_local_task').
 */
function ae_admin_menu_local_task($variables) {
  $link = $variables['element']['#link'];
  $link_text = $link['title'];

  if (!empty($variables['element']['#active'])) {
    // Add text to indicate active tab for non-visual users.
    $active = '<span class="element-invisible">' . t('(active tab)') . '</span>';

    // If the link does not contain HTML already, check_plain() it now.
    // After we set 'html'=TRUE the link will not be sanitized by l().
    if (empty($link['localized_options']['html'])) {
      $link['title'] = check_plain($link['title']);
    }
    $link['localized_options']['html'] = TRUE;
    $link_text = t('!local-task-title!active', array('!local-task-title' => $link['title'], '!active' => $active));
  }

  // Render child tasks if available.
  $children = '';
  if (element_children($variables['element'])) {
    $children = drupal_render_children($variables['element']);
    $children = "<ul class='secondary-tabs links clearfix'>{$children}</ul>";
  }

  return '<li' . (!empty($variables['element']['#active']) ? ' class="active"' : '') . '>' . l($link_text, $link['href'], $link['localized_options']) . $children . "</li>\n";
}

/**
 * Helper function for cloning and drupal_render()'ing elements.
 */
function ae_admin_render_clone($elements) {
  static $instance;
  if (!isset($instance)) {
    $instance = 1;
  }
  foreach (element_children($elements) as $key) {
    if (isset($elements[$key]['#id'])) {
      $elements[$key]['#id'] = "{$elements[$key]['#id']}-{$instance}";
    }
  }
  $instance++;
  return drupal_render($elements);
}

/**
 * Helper function to submitted info theming functions.
 */
function _ae_admin_submitted($node) {
  $byline = t('Posted by !username', array('!username' => theme('username', array('account' => $node))));
  $date = format_date($node->created, 'small');
  return "<div class='byline'>{$byline}</div><div class='date'>$date</div>";
}

/**
 * Generate an icon class from a path.
 */
function _ae_admin_icon_classes($path) {
  $classes = array();
  $args = explode('/', $path);
  if ($args[0] === 'admin' || (count($args) > 1 && $args[0] === 'node' && $args[1] === 'add')) {
    // Add a class specifically for the current path that allows non-cascading
    // style targeting.
    $classes[] = 'path-'. str_replace('/', '-', implode('/', $args)) . '-';
    while (count($args)) {
      $classes[] = drupal_html_class('path-'. str_replace('/', '-', implode('/', $args)));
      array_pop($args);
    }
    return $classes;
  }
  return array();
}

function _ae_admin_local_tasks(&$vars) {
  if (!empty($vars['secondary_local_tasks']) && is_array($vars['primary_local_tasks'])) {
    foreach ($vars['primary_local_tasks'] as $key => $element) {
      if (!empty($element['#active'])) {
        $vars['primary_local_tasks'][$key] = $vars['primary_local_tasks'][$key];
        break;
      }
    }
  }
}

/** 
 * overrides theme_webform_edit_form
 */
function ae_admin_webform_email_edit_form($variables) {
    $form = $variables['form'];

    $path = current_path();
    // if we are on ae wizard (= path starts with "ae") we override
    // otherwise we copy from webform.emails.inc :)
    if (strpos($path, 'ae') === 0) {
        if (in_array('Email address', $form['from_address_component']['#options'])) {
            $form['from_address_component']['#options'] = array(1 => 'Email address');
        } else {
            $form['from_address_component']['#access'] = FALSE;
            $form['from_address_option']['component']['#access'] = FALSE;
        }

        // Loop through fields, rendering them into radio button options.
        foreach (array('email', 'from_address', 'from_name') as $field) {
            foreach (array('custom', 'component') as $option) {
                $form[$field . '_' . $option]['#attributes']['class'] = array('webform-set-active');
                $form[$field . '_option'][$option]['#theme_wrappers'] = array('webform_inline_radio');
                $form[$field . '_option'][$option]['#inline_element'] = drupal_render($form[$field . '_' . $option]);
            }
            if (isset($form[$field . '_option']['#options']['default'])) {
                $form[$field . '_option']['default']['#theme_wrappers'] = array('webform_inline_radio');
            }
        }
    } else {
        // Loop through fields, rendering them into radio button options.
        foreach (array('email', 'subject', 'from_address', 'from_name') as $field) {
            foreach (array('custom', 'component') as $option) {
                $form[$field . '_' . $option]['#attributes']['class'] = array('webform-set-active');
                $form[$field . '_option'][$option]['#theme_wrappers'] = array('webform_inline_radio');
                $form[$field . '_option'][$option]['#inline_element'] = drupal_render($form[$field . '_' . $option]);
            }   
            if (isset($form[$field . '_option']['#options']['default'])) {
                $form[$field . '_option']['default']['#theme_wrappers'] = array('webform_inline_radio');
            }   
        }

        $details = ''; 
        $details .= drupal_render($form['subject_option']);
        $details .= drupal_render($form['from_address_option']);
        $details .= drupal_render($form['from_name_option']);
        $form['details'] = array(
            '#type' => 'fieldset',
            '#title' => t('E-mail header details'),
            '#weight' => 10, 
            '#children' => $details,
            '#collapsible' => FALSE,
            '#parents' => array('details'),
            '#groups' => array('details' => array()),
            '#attributes' => array(),
        );  

    }

    // Ensure templates are completely hidden.
    $form['templates']['#prefix'] = '<div id="webform-email-templates" style="display: none">';
    $form['templates']['#suffix'] = '</div>';

    // Re-sort the elements since we added the details fieldset.
    $form['#sorted'] = FALSE;
    $children = element_children($form, TRUE);
    return drupal_render_children($form, $children);
}

