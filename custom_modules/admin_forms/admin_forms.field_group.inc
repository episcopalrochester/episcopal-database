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
  $field_group->identifier = 'group_admin_form_advanced|node|admin_form|form';
  $field_group->group_name = 'group_admin_form_advanced';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'admin_form';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Advanced',
    'weight' => '5',
    'children' => array(
      0 => 'field_editors',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Advanced',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-admin-form-advanced field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_admin_form_advanced|node|admin_form|form'] = $field_group;

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
      2 => 'field_admin_form_apmnt_signature',
      3 => 'field_admin_form_apmnt_statement',
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
    'weight' => '43',
    'children' => array(
      0 => 'field_admin_form_audit_fin',
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
      1 => 'group_admin_form_audit_dates',
      2 => 'group_admin_form_conflicts',
      3 => 'group_admin_form_cpa',
      4 => 'group_audit_form_info',
      5 => 'group_audit_diocesan',
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
    'weight' => '42',
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
    'weight' => '41',
    'children' => array(
      0 => 'field_admin_form_cpa_addr',
      1 => 'field_admin_form_cpa_name',
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
      0 => 'field_admin_form_alternates',
      1 => 'field_admin_form_delegates',
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
      0 => 'field_admin_form_clergy',
      1 => 'field_admin_form_formation',
      2 => 'field_admin_form_music',
      3 => 'field_admin_form_wardens',
      4 => 'field_finance_ministry',
      5 => 'field_office_staff',
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
      0 => 'group_admin_form_apmnt',
      1 => 'group_admin_form_audit',
      2 => 'group_admin_form_del',
      3 => 'group_admin_form_staff',
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
  $field_group->identifier = 'group_audit_diocesan|node|admin_form|form';
  $field_group->group_name = 'group_audit_diocesan';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'admin_form';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_admin_form_audit';
  $field_group->data = array(
    'label' => 'Request a Diocesan Audit',
    'weight' => '38',
    'children' => array(
      0 => 'field_admin_form_audit_request',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Request a Diocesan Audit',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-audit-diocesan field-group-fieldset',
        'description' => 'If you request an audit by the Diocesan Auditor, Catherine Shoemaker, please contact her at <a href="mailto:catherine@episcopaldioceseofrochester.org">catherine@episcopaldioceseofrochester.org</a>.',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_audit_diocesan|node|admin_form|form'] = $field_group;

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
    'label' => 'The above information has been provided by',
    'weight' => '44',
    'children' => array(
      0 => 'field_audit_form_date',
      1 => 'field_audit_form_email',
      2 => 'field_audit_form_name',
      3 => 'field_audit_form_telephone',
      4 => 'field_audit_form_title',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'The above information has been provided by',
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
