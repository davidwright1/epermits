<?php
/**
 * @file
 * blackman_twp_line_item_types.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function blackman_twp_line_item_types_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_arch_info|commerce_line_item|blackman_building_permit|form';
  $field_group->group_name = 'group_arch_info';
  $field_group->entity_type = 'commerce_line_item';
  $field_group->bundle = 'blackman_building_permit';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Architect/Engineer Info',
    'weight' => '8',
    'children' => array(
      0 => 'field_arch_eng_name',
      1 => 'field_arch_eng_address',
      2 => 'field_arch_eng_license_number',
      3 => 'field_arch_eng_telephone',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-arch-info field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_arch_info|commerce_line_item|blackman_building_permit|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contractor|commerce_line_item|blackman_building_permit|form';
  $field_group->group_name = 'group_contractor';
  $field_group->entity_type = 'commerce_line_item';
  $field_group->bundle = 'blackman_building_permit';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contractor',
    'weight' => '9',
    'children' => array(
      0 => 'field_contractor_name',
      1 => 'field_contractor_address',
      2 => 'field_contractor_telephone',
      3 => 'field_builder_license_number',
      4 => 'field_builder_license_expiration',
      5 => 'field_builder_federal_employer',
      6 => 'field_builder_workers_comp',
      7 => 'field_mesc_employer_number',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-contractor field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_contractor|commerce_line_item|blackman_building_permit|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_dimensions|commerce_line_item|blackman_building_permit|form';
  $field_group->group_name = 'group_dimensions';
  $field_group->entity_type = 'commerce_line_item';
  $field_group->bundle = 'blackman_building_permit';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_selected_characteristics';
  $field_group->data = array(
    'label' => 'Dimensions',
    'weight' => '38',
    'children' => array(
      0 => 'field_number_of_stories',
      1 => 'field_floor_area',
      2 => 'field_1st_2nd_floor',
      3 => 'field_3rd_10th_floor',
      4 => 'field_total_land_area',
      5 => 'field_total_area',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-dimensions field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_dimensions|commerce_line_item|blackman_building_permit|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_offstreet_parking|commerce_line_item|blackman_building_permit|form';
  $field_group->group_name = 'group_offstreet_parking';
  $field_group->entity_type = 'commerce_line_item';
  $field_group->bundle = 'blackman_building_permit';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Number of Off Street Parking Spaces',
    'weight' => '13',
    'children' => array(
      0 => 'field_enclosed_parking',
      1 => 'field_outdoor_parking',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-offstreet-parking field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_offstreet_parking|commerce_line_item|blackman_building_permit|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_owner_identification|commerce_line_item|blackman_building_permit|form';
  $field_group->group_name = 'group_owner_identification';
  $field_group->entity_type = 'commerce_line_item';
  $field_group->bundle = 'blackman_building_permit';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Identification',
    'weight' => '7',
    'children' => array(
      0 => 'field_owner_telephone',
      1 => 'field_owner_address',
      2 => 'field_owner_name',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-owner-identification field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_owner_identification|commerce_line_item|blackman_building_permit|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_plan_review|commerce_line_item|blackman_building_permit|form';
  $field_group->group_name = 'group_plan_review';
  $field_group->entity_type = 'commerce_line_item';
  $field_group->bundle = 'blackman_building_permit';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Plan Review',
    'weight' => '10',
    'children' => array(
      0 => 'field_type_of_improvement',
      1 => 'field_reviews_to_be_performed',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-plan-review field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_plan_review|commerce_line_item|blackman_building_permit|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_project_info|commerce_line_item|blackman_building_permit|form';
  $field_group->group_name = 'group_project_info';
  $field_group->entity_type = 'commerce_line_item';
  $field_group->bundle = 'blackman_building_permit';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Project Information',
    'weight' => '6',
    'children' => array(
      0 => 'field_property_owner',
      1 => 'field_property_address',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-project-info field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_project_info|commerce_line_item|blackman_building_permit|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_proposed_use|commerce_line_item|blackman_building_permit|form';
  $field_group->group_name = 'group_proposed_use';
  $field_group->entity_type = 'commerce_line_item';
  $field_group->bundle = 'blackman_building_permit';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Proposed Use of Building',
    'weight' => '11',
    'children' => array(
      0 => 'field_residential_use',
      1 => 'field_non_residential_use',
      2 => 'field_work_description',
      3 => 'field_estimated_construction_cos',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-proposed-use field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_proposed_use|commerce_line_item|blackman_building_permit|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_selected_characteristics|commerce_line_item|blackman_building_permit|form';
  $field_group->group_name = 'group_selected_characteristics';
  $field_group->entity_type = 'commerce_line_item';
  $field_group->bundle = 'blackman_building_permit';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Selected Characteristics of Building',
    'weight' => '12',
    'children' => array(
      0 => 'field_principal_frame',
      1 => 'field_principal_type_of_heating_',
      2 => 'field_type_of_sewage_disposal',
      3 => 'field_type_of_water_supply',
      4 => 'field_type_of_mechanical',
      5 => 'group_dimensions',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-selected-characteristics field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_selected_characteristics|commerce_line_item|blackman_building_permit|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_validation|commerce_line_item|blackman_building_permit|form';
  $field_group->group_name = 'group_validation';
  $field_group->entity_type = 'commerce_line_item';
  $field_group->bundle = 'blackman_building_permit';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Validation',
    'weight' => '15',
    'children' => array(
      0 => 'field_building_permit_number',
      1 => 'field_issue_date',
      2 => 'field_approved_by',
      3 => 'field_signature',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-validation field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_validation|commerce_line_item|blackman_building_permit|form'] = $field_group;

  return $export;
}
