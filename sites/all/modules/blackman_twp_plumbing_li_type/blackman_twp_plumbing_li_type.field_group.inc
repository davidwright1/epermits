<?php
/**
 * @file
 * blackman_twp_plumbing_li_type.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function blackman_twp_plumbing_li_type_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contractor_info|commerce_line_item|blackman_plumbing_permit|form';
  $field_group->group_name = 'group_contractor_info';
  $field_group->entity_type = 'commerce_line_item';
  $field_group->bundle = 'blackman_plumbing_permit';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contractor Information',
    'weight' => '7',
    'children' => array(
      0 => 'field_contractor_name',
      1 => 'field_contractor_telephone',
      2 => 'field_contractor_address',
      3 => 'field_licensee',
      4 => 'field_contractor_email',
      5 => 'field_builder_license_number',
      6 => 'field_builder_license_expiration',
      7 => 'field_work_description',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-contractor-info field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_contractor_info|commerce_line_item|blackman_plumbing_permit|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_job_info|commerce_line_item|blackman_plumbing_permit|form';
  $field_group->group_name = 'group_job_info';
  $field_group->entity_type = 'commerce_line_item';
  $field_group->bundle = 'blackman_plumbing_permit';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Job Information',
    'weight' => '6',
    'children' => array(
      0 => 'field_property_address',
      1 => 'field_owner_name',
      2 => 'field_owner_address',
      3 => 'field_owner_telephone',
      4 => 'field_project_type',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-job-info field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_job_info|commerce_line_item|blackman_plumbing_permit|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_validation|commerce_line_item|blackman_plumbing_permit|form';
  $field_group->group_name = 'group_validation';
  $field_group->entity_type = 'commerce_line_item';
  $field_group->bundle = 'blackman_plumbing_permit';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Validation',
    'weight' => '8',
    'children' => array(
      0 => 'field_homeowner_signature',
      1 => 'field_application_date',
      2 => 'field_signature',
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
  $export['group_validation|commerce_line_item|blackman_plumbing_permit|form'] = $field_group;

  return $export;
}
