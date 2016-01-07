<?php
/**
 * @file
 * blackman_twp_plumbing_li_type.features.inc
 */

/**
 * Implements hook_commerce_line_item_default_types().
 */
function blackman_twp_plumbing_li_type_commerce_line_item_default_types() {
  $items = array(
    'blackman_plumbing_permit' => array(
      'name' => 'Blackman Plumbing Permit',
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
function blackman_twp_plumbing_li_type_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}
