<?php

/**
 * Views handler to display a HEX value as text with the background color set
 * accordingly.
 */
class views_handler_field_chi_13_hex extends views_handler_field {

  public function render($values) {
    $value = $this->get_value($values);
    return "<span style=\"background-color:$value\">$value</span>";
  }

}
