<?php

/**
 * Custom views handler to render an Update link.
 */
class views_handler_field_chi_13_update_link extends views_handler_field_entity {

  public function render($values) {
    $node = $this->get_value($values);
    $text = (chi_13_ef_node_aging($node)) ? t('Update needed') : t('Current');
    $options = array('query' => array('destination' => current_path()));
    return l($text, "node/{$node->nid}/update", $options);
  }

}
