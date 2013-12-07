<?php

/**
 * @file
 * Chicago 2013 Extra Fields page callbacks.
 */

/**
 * Simple form to update a node.
 */
function chi_13_ef_update_form($form, &$form_state, $node) {
  $form = array();

  $form['#node'] = $node;

  $form['text'] = array(
    '#markup' => t('Use this button to update the issue.'),
    '#prefix' => '<div>',
    '#suffix' => '</div>',
  );

  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Update'),
  );

  return $form;
}

/**
 * Submit callback to handle chi_13_ef_update_form.
 */
function chi_13_ef_update_form_submit(&$form, &$form_state) {
  $node = $form['#node'];
  // Saving the node gives it a fresh changed property.
  node_save($node);
  drupal_set_message(t('Issue :title has been updated.', array(':title' => $node->title)));
  $form_state['redirect'] = array('node/' . $node->nid);
}
