<?php

/**
 * @file
 * campaignion_conf.file_default_displays.inc
 */

/**
 * Implements hook_file_default_displays().
 */
function campaignion_conf_file_default_displays() {
  $export = array();

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__default__file_field_image';
  $file_display->weight = -1;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_link' => '',
    'image_style' => 'full',
  );
  $export['image__default__file_field_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__full__file_field_image';
  $file_display->weight = -1;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_link' => '',
    'image_style' => '',
  );
  $export['image__full__file_field_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__preview__file_field_image';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_link' => '',
    'image_style' => 'media_thumbnail',
  );
  $export['image__preview__file_field_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__teaser__file_field_image';
  $file_display->weight = -1;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_link' => '',
    'image_style' => 'teaser',
  );
  $export['image__teaser__file_field_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__default__media_vimeo_image';
  $file_display->weight = 2;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'image_style' => 'full',
  );
  $export['video__default__media_vimeo_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__default__media_youtube_image';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'image_style' => 'full',
  );
  $export['video__default__media_youtube_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__default__media_youtube_video';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'autohide' => '2',
    'autoplay' => 0,
    'color' => 'red',
    'enablejsapi' => 0,
    'height' => '340',
    'loop' => 0,
    'modestbranding' => 1,
    'nocookie' => 0,
    'origin' => '',
    'protocol' => 'https:',
    'protocol_specify' => 1,
    'rel' => 1,
    'showinfo' => 1,
    'theme' => 'light',
    'width' => '550',
  );
  $export['video__default__media_youtube_video'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__preview__media_youtube_image';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'media_thumbnail',
  );
  $export['video__preview__media_youtube_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__teaser__media_vimeo_image';
  $file_display->weight = 1;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'teaser',
  );
  $export['video__teaser__media_vimeo_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__teaser__media_youtube_image';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'teaser',
  );
  $export['video__teaser__media_youtube_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__teaser__media_youtube_video';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'autohide' => '2',
    'autoplay' => 0,
    'color' => 'red',
    'enablejsapi' => 0,
    'height' => '340',
    'loop' => 0,
    'modestbranding' => 1,
    'nocookie' => 0,
    'origin' => '',
    'protocol' => 'https:',
    'protocol_specify' => 0,
    'rel' => 1,
    'showinfo' => 1,
    'theme' => 'light',
    'width' => '550',
  );
  $export['video__teaser__media_youtube_video'] = $file_display;

  return $export;
}
