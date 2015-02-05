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
  $field_group->identifier = 'group_admin_form_apmnt|node|admin_form|form';
  $field_group->group_name = 'group_admin_form_apmnt';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'admin_form';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_admin_forms';
  $field_group->data = array(
    'label' => 'Apportionment Commitment',
    'weight' => '4',
    'children' => array(
      0 => 'field_2015_apportionments',
      1 => 'field_admin_form_apmnt_cmt',
      2 => 'field_admin_form_apmnt_statement',
      3 => 'field_admin_form_apmnt_signature',
      4 => 'field_apportmention_description',
    ),
    'format_type' => 'multipage',
    'format_settings' => array(
      'formatter' => 'no-start',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-admin-form-apmnt',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_admin_form_apmnt|node|admin_form|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_admin_form_audit_dates|node|admin_form|form';
  $field_group->group_name = 'group_admin_form_audit_dates';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'admin_form';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_admin_form_audit';
  $field_group->data = array(
    'label' => 'Audit Dates',
    'weight' => '15',
    'children' => array(
      0 => 'field_audit_form_aud_mgmt',
      1 => 'field_admin_form_audit_fin',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Audit Dates',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-admin-form-audit-dates field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_admin_form_audit_dates|node|admin_form|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_admin_form_audit|node|admin_form|form';
  $field_group->group_name = 'group_admin_form_audit';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'admin_form';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_admin_forms';
  $field_group->data = array(
    'label' => 'Parish Audit Appointment Form',
    'weight' => '3',
    'children' => array(
      0 => 'field_admin_form_audit_team',
      1 => 'group_admin_form_cpa',
      2 => 'group_admin_form_conflicts',
      3 => 'group_admin_form_audit_dates',
      4 => 'group_audit_form_info',
    ),
    'format_type' => 'multipage',
    'format_settings' => array(
      'formatter' => 'no-start',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-admin-form-audit',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_admin_form_audit|node|admin_form|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_admin_form_conflicts|node|admin_form|form';
  $field_group->group_name = 'group_admin_form_conflicts';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'admin_form';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_admin_form_audit';
  $field_group->data = array(
    'label' => 'Conflicts of Interest',
    'weight' => '14',
    'children' => array(
      0 => 'field_admin_form_audit_conflicts',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Conflicts of Interest',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-admin-form-conflicts field-group-fieldset',
        'description' => 'Are the Audit Team members or the Auditor in any way related to the Treasurer or other persons who maintain the financial records of the parish?',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_admin_form_conflicts|node|admin_form|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_admin_form_cpa|node|admin_form|form';
  $field_group->group_name = 'group_admin_form_cpa';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'admin_form';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_admin_form_audit';
  $field_group->data = array(
    'label' => 'Certified Public Accountant',
    'weight' => '13',
    'children' => array(
      0 => 'field_admin_form_cpa_name',
      1 => 'field_admin_form_cpa_addr',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Certified Public Accountant',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-admin-form-cpa field-group-fieldset',
        'description' => 'The following Certified Public Accountant will perform the Audit (strongly recommended for type IV and larger parishes)',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_admin_form_cpa|node|admin_form|form'] = $field_group;

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
    'weight' => '4',
    'children' => array(
      0 => 'group_admin_form_staff',
      1 => 'group_admin_form_del',
      2 => 'group_admin_form_audit',
      3 => 'group_admin_form_apmnt',
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

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_audit_form_info|node|admin_form|form';
  $field_group->group_name = 'group_audit_form_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'admin_form';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_admin_form_audit';
  $field_group->data = array(
    'label' => 'Audit information has been provided by',
    'weight' => '16',
    'children' => array(
      0 => 'field_audit_form_name',
      1 => 'field_audit_form_title',
      2 => 'field_audit_form_telephone',
      3 => 'field_audit_form_email',
      4 => 'field_audit_form_date',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Audit information has been provided by',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-audit-form-info field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_audit_form_info|node|admin_form|form'] = $field_group;

  return $export;
}
