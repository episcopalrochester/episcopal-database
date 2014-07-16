<?php
/**
 * @file
 * parish.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function parish_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_parish_address|node|parish|default';
  $field_group->group_name = 'group_parish_address';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'parish';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_parish_data';
  $field_group->data = array(
    'label' => 'Home Address',
    'weight' => '10',
    'children' => array(
      0 => 'field_parish_home_1',
      1 => 'field_parish_home_2',
      2 => 'field_parish_home_city',
      3 => 'field_parish_home_other',
      4 => 'field_parish_home_postal',
      5 => 'field_parish_home_state',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-parish-address field-group-tab',
      ),
    ),
  );
  $export['group_parish_address|node|parish|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_parish_address|node|parish|form';
  $field_group->group_name = 'group_parish_address';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'parish';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_parish_data';
  $field_group->data = array(
    'label' => 'Home Address',
    'weight' => '4',
    'children' => array(
      0 => 'field_parish_home_1',
      1 => 'field_parish_home_2',
      2 => 'field_parish_home_city',
      3 => 'field_parish_home_other',
      4 => 'field_parish_home_postal',
      5 => 'field_parish_home_state',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-parish-address field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_parish_address|node|parish|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_parish_mailing|node|parish|default';
  $field_group->group_name = 'group_parish_mailing';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'parish';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_parish_data';
  $field_group->data = array(
    'label' => 'Mailing Address',
    'weight' => '11',
    'children' => array(
      0 => 'field_parish_mail_1',
      1 => 'field_parish_mail_2',
      2 => 'field_parish_mail_city',
      3 => 'field_parish_mail_other',
      4 => 'field_parish_mail_postal',
      5 => 'field_parish_mail_state',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-parish-mailing field-group-tab',
      ),
    ),
  );
  $export['group_parish_mailing|node|parish|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_parish_mailing|node|parish|form';
  $field_group->group_name = 'group_parish_mailing';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'parish';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_parish_data';
  $field_group->data = array(
    'label' => 'Mailing Address',
    'weight' => '5',
    'children' => array(
      0 => 'field_parish_mail_1',
      1 => 'field_parish_mail_2',
      2 => 'field_parish_mail_city',
      3 => 'field_parish_mail_other',
      4 => 'field_parish_mail_postal',
      5 => 'field_parish_mail_state',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Mailing Address',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-parish-mailing field-group-tab',
        'description' => 'If different from Home Address',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_parish_mailing|node|parish|form'] = $field_group;


  return $export;
}

