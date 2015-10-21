<?php
/**
 * @file
 * blackman_twp_line_item_types.features.inc
 */

/**
 * Implements hook_commerce_line_item_default_types().
 */
function blackman_twp_line_item_types_commerce_line_item_default_types() {
  $items = array(
    'blackman_building_permit' => array(
      'name' => 'Blackman Building Permit',
      'description' => 'A customizable product line item type.',
      'product' => TRUE,
      'add_form_submit_value' => 'Add product',
      'base' => 'commerce_product_line_item',
    ),
  );
  return $items;
}

/**
 * Implements hook_ctools_plugin_api().
 */
function blackman_twp_line_item_types_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}
