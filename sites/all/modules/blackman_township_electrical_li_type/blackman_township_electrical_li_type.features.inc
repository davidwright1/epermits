<?php
/**
 * @file
 * blackman_township_electrical_li_type.features.inc
 */

/**
 * Implements hook_commerce_line_item_default_types().
 */
function blackman_township_electrical_li_type_commerce_line_item_default_types() {
  $items = array(
    'blackman_electrical' => array(
      'name' => 'Blackman Electrical',
      'description' => 'A customizable product line item type.',
      'product' => TRUE,
      'add_form_submit_value' => 'Add product',
      'base' => 'commerce_product_line_item',
    ),
  );
  return $items;
}
