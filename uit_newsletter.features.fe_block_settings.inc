<?php
/**
 * @file
 * uit_newsletter.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function uit_newsletter_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-newsletter-block_1'] = array(
    'cache' => -1,
    'css_class' => 'span10 offset2',
    'custom' => 0,
    'delta' => 'newsletter-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'newsletter/*',
    'roles' => array(),
    'themes' => array(
      'itservices_seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'itservices_seven',
        'weight' => 0,
      ),
      'open_framework' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'open_framework',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'stanford_framework' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'stanford_framework',
        'weight' => 0,
      ),
      'stanford_itservices' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'stanford_itservices',
        'weight' => 0,
      ),
      'stanford_seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'stanford_seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-newsletter_issues-block'] = array(
    'cache' => -1,
    'css_class' => 'span10 offset2',
    'custom' => 0,
    'delta' => 'newsletter_issues-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'newsletter
newsletter/issue/*',
    'roles' => array(),
    'themes' => array(
      'itservices_seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'itservices_seven',
        'weight' => 0,
      ),
      'open_framework' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'open_framework',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'stanford_framework' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'stanford_framework',
        'weight' => 0,
      ),
      'stanford_itservices' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'stanford_itservices',
        'weight' => 0,
      ),
      'stanford_seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'stanford_seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  return $export;
}
