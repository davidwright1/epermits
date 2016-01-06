<?php
/**
 * @file
 * blackman_mechanical_permit.features.inc
 */

/**
 * Implements hook_commerce_line_item_default_types().
 */
function blackman_mechanical_permit_commerce_line_item_default_types() {
  $items = array(
    'blackman_mechanical_permit' => array(
      'name' => 'Blackman Mechanical Permit',
      'description' => 'A customizable product line item type.',
      'product' => TRUE,
      'add_form_submit_value' => 'Add product',
      'base' => 'commerce_product_line_item',
    ),
  );
  return $items;
}
