<?php

/**
 * @file
 * Chicago 2013 Custom Data Views code.
 */

/**
 * Implements hook_views_data().
 */
function chi_13_cd_views_data() {
  $data = array();

  $data['chi_13_cd_colors']['table']['group'] = t('Chicago 2013');

  $data['chi_13_cd_colors']['table']['base'] = array(
    'field' => 'name',
    'title' => t('HTML colors'),
    'help' => t('Example table that contains HTML colors.'),
    'weight' => 0,
  );

  $data['chi_13_cd_colors']['name'] = array(
    'title' => t('Name'),
    'help' => t('Name of the color.'),
    'field' => array(
      'handler' => 'views_handler_field',
      'click sortable' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_string',
    ),
  );

  $data['chi_13_cd_colors']['val'] = array(
    'title' => t('HEX'),
    'help' => t('HEX value of the color.'),
    'field' => array(
      'handler' => 'views_handler_field',
      'click sortable' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_string',
    ),
  );

  $data['chi_13_cd_colors']['val'] = array(
    'title' => t('HEX'),
    'help' => t('HEX value of the color.'),
    'field' => array(
      'handler' => 'views_handler_field',
      'click sortable' => TRUE,
    ),
  );

  // A pseudo field. We're actually querying the HEX value and rendering in an
  // alternate manner.
  $data['chi_13_cd_colors']['color'] = array(
    'title' => t('Color'),
    'help' => t('Display the color.'),
    'field' => array(
      'real field' => 'val',
      'handler' => 'views_handler_field_chi_13_hex',
    ),
  );

  return $data;
}
