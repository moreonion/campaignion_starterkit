<?php

/**
 * @file
 * campaignion_news.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function campaignion_news_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'news';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'News';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'News';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Related action (field_related_action) */
  $handler->display->display_options['arguments']['field_related_action_nid']['id'] = 'field_related_action_nid';
  $handler->display->display_options['arguments']['field_related_action_nid']['table'] = 'field_data_field_related_action';
  $handler->display->display_options['arguments']['field_related_action_nid']['field'] = 'field_related_action_nid';
  $handler->display->display_options['arguments']['field_related_action_nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_related_action_nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_related_action_nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_related_action_nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_related_action_nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'news' => 'news',
  );
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
    'und' => 'und',
  );

  /* Display: General News page */
  $handler = $view->new_display('page', 'General News page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['path'] = 'news';

  /* Display: News for specific Action */
  $handler = $view->new_display('block', 'News for specific Action', 'block');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';

  /* Display: News for specific campaign */
  $handler = $view->new_display('block', 'News for specific campaign', 'block_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Related campaign (field_reference_to_campaign) */
  $handler->display->display_options['arguments']['field_reference_to_campaign_nid']['id'] = 'field_reference_to_campaign_nid';
  $handler->display->display_options['arguments']['field_reference_to_campaign_nid']['table'] = 'field_data_field_reference_to_campaign';
  $handler->display->display_options['arguments']['field_reference_to_campaign_nid']['field'] = 'field_reference_to_campaign_nid';
  $handler->display->display_options['arguments']['field_reference_to_campaign_nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_reference_to_campaign_nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_reference_to_campaign_nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_reference_to_campaign_nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_reference_to_campaign_nid']['summary_options']['items_per_page'] = '25';

  /* Display: News feed */
  $handler = $view->new_display('feed', 'News feed', 'feed_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['path'] = 'news/rss';
  $translatables['news'] = array(
    t('Master'),
    t('News'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('All'),
    t('General News page'),
    t('News for specific Action'),
    t('News for specific campaign'),
    t('News feed'),
  );
  $export['news'] = $view;

  return $export;
}
