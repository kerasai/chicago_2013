<?php

/**
 * @file
 * Chicago 2013 Extra Fields - Views Integration Views hooks.
 */

/**
 * Implements hook_views_data_alter().
 *
 * We don't have our own table to provide to Views, so we'll piggyback off of
 * the node table.
 */
function chi_13_ef_views_views_data_alter(&$data) {

  // Add the "field" we'll be querying. This is a pseudo field, so we only
  // pretend that it exists on the node table but actually query the nid field.
  $data['node']['chi_13_update'] = array(
    'title' => t('Update link'),
    'help' => t('Just a plain text field.'),
    'field' => array(
      'real field' => 'nid',
      'handler' => 'views_handler_field_chi_13_update_link',
    ),
  );
}
