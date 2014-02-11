<?php
/**
 * @file
 * person_data_type.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function person_data_type_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_person_address|node|person|default';
  $field_group->group_name = 'group_person_address';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'person';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_person_data';
  $field_group->data = array(
    'label' => 'Home Address',
    'weight' => '10',
    'children' => array(
      0 => 'field_person_home_1',
      1 => 'field_person_home_2',
      2 => 'field_person_home_city',
      3 => 'field_person_home_state',
      4 => 'field_person_home_postal',
      5 => 'field_person_home_other',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-person-address field-group-tab',
      ),
    ),
  );
  $export['group_person_address|node|person|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_person_address|node|person|form';
  $field_group->group_name = 'group_person_address';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'person';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_person_data';
  $field_group->data = array(
    'label' => 'Home Address',
    'weight' => '4',
    'children' => array(
      0 => 'field_person_home_1',
      1 => 'field_person_home_2',
      2 => 'field_person_home_city',
      3 => 'field_person_home_state',
      4 => 'field_person_home_postal',
      5 => 'field_person_home_other',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-person-address field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_person_address|node|person|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_person_data|node|person|default';
  $field_group->group_name = 'group_person_data';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'person';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Personal Data',
    'weight' => '0',
    'children' => array(
      0 => 'group_person_ecclesiastical',
      1 => 'group_person_address',
      2 => 'group_person_phones',
      3 => 'group_person_vitals',
      4 => 'group_person_mailing',
      5 => 'group_person_email',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_person_data|node|person|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_person_data|node|person|form';
  $field_group->group_name = 'group_person_data';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'person';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Personal Data',
    'weight' => '1',
    'children' => array(
      0 => 'group_person_address',
      1 => 'group_person_email',
      2 => 'group_person_phones',
      3 => 'group_person_vitals',
      4 => 'group_person_mailing',
      5 => 'group_person_ecclesiastical',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_person_data|node|person|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_person_ecclesiastical|node|person|default';
  $field_group->group_name = 'group_person_ecclesiastical';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'person';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_person_data';
  $field_group->data = array(
    'label' => 'Ecclesiastical Dates',
    'weight' => '9',
    'children' => array(
      0 => 'field_person_diaconate',
      1 => 'field_person_priesthood',
      2 => 'field_person_baptism',
      3 => 'field_person_confirmation',
      4 => 'field_person_consecration',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-person-ecclesiastical field-group-tab',
      ),
    ),
  );
  $export['group_person_ecclesiastical|node|person|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_person_ecclesiastical|node|person|form';
  $field_group->group_name = 'group_person_ecclesiastical';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'person';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_person_data';
  $field_group->data = array(
    'label' => 'Ecclesiastical Dates',
    'weight' => '3',
    'children' => array(
      0 => 'field_person_diaconate',
      1 => 'field_person_priesthood',
      2 => 'field_person_baptism',
      3 => 'field_person_confirmation',
      4 => 'field_person_consecration',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-person-ecclesiastical field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_person_ecclesiastical|node|person|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_person_email|node|person|default';
  $field_group->group_name = 'group_person_email';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'person';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_person_data';
  $field_group->data = array(
    'label' => 'E-Mail/Social',
    'weight' => '13',
    'children' => array(
      0 => 'field_person_email_pref',
      1 => 'field_person_email_pref_type',
      2 => 'field_person_email_other',
      3 => 'field_person_email_other_type',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-person-email field-group-tab',
      ),
    ),
  );
  $export['group_person_email|node|person|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_person_email|node|person|form';
  $field_group->group_name = 'group_person_email';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'person';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_person_data';
  $field_group->data = array(
    'label' => 'E-Mail/Social',
    'weight' => '7',
    'children' => array(
      0 => 'field_person_email_pref',
      1 => 'field_person_email_pref_type',
      2 => 'field_person_email_other',
      3 => 'field_person_email_other_type',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-person-email field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_person_email|node|person|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_person_mailing|node|person|default';
  $field_group->group_name = 'group_person_mailing';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'person';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_person_data';
  $field_group->data = array(
    'label' => 'Mailing Address',
    'weight' => '11',
    'children' => array(
      0 => 'field_person_mail_2',
      1 => 'field_person_mail_1',
      2 => 'field_person_mail_city',
      3 => 'field_person_mail_state',
      4 => 'field_person_mail_other',
      5 => 'field_person_mail_postal',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-person-mailing field-group-tab',
      ),
    ),
  );
  $export['group_person_mailing|node|person|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_person_mailing|node|person|form';
  $field_group->group_name = 'group_person_mailing';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'person';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_person_data';
  $field_group->data = array(
    'label' => 'Mailing Address',
    'weight' => '5',
    'children' => array(
      0 => 'field_person_mail_2',
      1 => 'field_person_mail_1',
      2 => 'field_person_mail_city',
      3 => 'field_person_mail_state',
      4 => 'field_person_mail_other',
      5 => 'field_person_mail_postal',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Mailing Address',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-person-mailing field-group-tab',
        'description' => 'If different from Home Address',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_person_mailing|node|person|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_person_phones|node|person|default';
  $field_group->group_name = 'group_person_phones';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'person';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_person_data';
  $field_group->data = array(
    'label' => 'Phone Numbers',
    'weight' => '12',
    'children' => array(
      0 => 'field_person_phone_pref',
      1 => 'field_person_phone_pref_type',
      2 => 'field_person_phone_other',
      3 => 'field_person_phone_other_type',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-person-phones field-group-tab',
      ),
    ),
  );
  $export['group_person_phones|node|person|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_person_phones|node|person|form';
  $field_group->group_name = 'group_person_phones';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'person';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_person_data';
  $field_group->data = array(
    'label' => 'Phone Numbers',
    'weight' => '6',
    'children' => array(
      0 => 'field_person_phone_pref',
      1 => 'field_person_phone_pref_type',
      2 => 'field_person_phone_other',
      3 => 'field_person_phone_other_type',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-person-phones field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_person_phones|node|person|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_person_vitals|node|person|default';
  $field_group->group_name = 'group_person_vitals';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'person';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_person_data';
  $field_group->data = array(
    'label' => 'Vital Statistics',
    'weight' => '8',
    'children' => array(
      0 => 'field_person_dob',
      1 => 'field_person_first_name',
      2 => 'field_person_last_name',
      3 => 'field_person_middle_name',
      4 => 'field_person_suffix',
      5 => 'field_person_title',
      6 => 'field_person_nickname',
      7 => 'field_person_gender',
      8 => 'field_person_dod',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-person-vitals field-group-tab',
      ),
    ),
  );
  $export['group_person_vitals|node|person|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_person_vitals|node|person|form';
  $field_group->group_name = 'group_person_vitals';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'person';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_person_data';
  $field_group->data = array(
    'label' => 'Vital Statistics',
    'weight' => '2',
    'children' => array(
      0 => 'field_person_dob',
      1 => 'field_person_first_name',
      2 => 'field_person_last_name',
      3 => 'field_person_middle_name',
      4 => 'field_person_suffix',
      5 => 'field_person_title',
      6 => 'field_person_nickname',
      7 => 'field_person_gender',
      8 => 'field_person_dod',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-person-vitals field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_person_vitals|node|person|form'] = $field_group;

  return $export;
}
