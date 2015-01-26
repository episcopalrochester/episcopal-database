<?php
/**
 * @file
 * admin_forms.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function admin_forms_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_admin_form_del|node|admin_form|form';
  $field_group->group_name = 'group_admin_form_del';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'admin_form';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_admin_forms';
  $field_group->data = array(
    'label' => 'Certificate of Lay Delegates',
    'weight' => '2',
    'children' => array(
      0 => 'field_admin_form_delegates',
      1 => 'field_admin_form_alternates',
    ),
    'format_type' => 'multipage',
    'format_settings' => array(
      'formatter' => 'no-start',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-admin-form-del',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_admin_form_del|node|admin_form|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_admin_form_staff|node|admin_form|form';
  $field_group->group_name = 'group_admin_form_staff';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'admin_form';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_admin_forms';
  $field_group->data = array(
    'label' => 'List of Parish Staff, Officers & Ministry Appointments',
    'weight' => '1',
    'children' => array(
      0 => 'field_office_staff',
      1 => 'field_admin_form_wardens',
      2 => 'field_admin_form_clergy',
      3 => 'field_finance_ministry',
      4 => 'field_admin_form_formation',
      5 => 'field_admin_form_music',
    ),
    'format_type' => 'multipage',
    'format_settings' => array(
      'label' => 'List of Parish Staff, Officers & Ministry Appointments',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'no-start',
    ),
  );
  $export['group_admin_form_staff|node|admin_form|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_admin_forms|node|admin_form|form';
  $field_group->group_name = 'group_admin_forms';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'admin_form';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Admin Forms',
    'weight' => '3',
    'children' => array(
      0 => 'group_admin_form_staff',
      1 => 'group_admin_form_del',
    ),
    'format_type' => 'multipage-group',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-admin-forms field-group-multipage-group',
        'page_header' => 3,
        'move_additional' => 1,
        'page_counter' => 1,
        'move_button' => 0,
      ),
    ),
  );
  $export['group_admin_forms|node|admin_form|form'] = $field_group;

  return $export;
}
