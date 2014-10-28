<?php
/**
 * @file
 * person.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function person_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_committee_relationships|node|person|form';
  $field_group->group_name = 'group_committee_relationships';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'person';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_person_data';
  $field_group->data = array(
    'label' => 'Committee Relationships',
    'weight' => '11',
    'children' => array(),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-committee-relationships field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_committee_relationships|node|person|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_editors|node|person|form';
  $field_group->group_name = 'group_editors';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'person';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_person_data';
  $field_group->data = array(
    'label' => 'Editors',
    'weight' => '12',
    'children' => array(
      0 => 'field_editors',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-editors field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_editors|node|person|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_person_access|node|person|form';
  $field_group->group_name = 'group_person_access';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'person';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_person_data';
  $field_group->data = array(
    'label' => 'Database Access',
    'weight' => '16',
    'children' => array(),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-person-access field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_person_access|node|person|form'] = $field_group;

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
      3 => 'field_person_home_other',
      4 => 'field_person_home_postal',
      5 => 'field_person_home_state',
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
      3 => 'field_person_home_other',
      4 => 'field_person_home_postal',
      5 => 'field_person_home_state',
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
      0 => 'group_person_subscriptions',
      1 => 'group_person_address',
      2 => 'group_person_ecclesiastical',
      3 => 'group_person_email',
      4 => 'group_person_mailing',
      5 => 'group_person_phones',
      6 => 'group_person_training',
      7 => 'group_person_vitals',
      8 => 'group_personal_relationships',
      9 => 'group_professional_relationships',
      10 => 'group_person_supply',
      11 => 'group_person_privacy',
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
      0 => 'group_editors',
      1 => 'group_person_access',
      2 => 'group_person_address',
      3 => 'group_person_ecclesiastical',
      4 => 'group_person_email',
      5 => 'group_person_mailing',
      6 => 'group_person_phones',
      7 => 'group_person_privacy',
      8 => 'group_person_subscriptions',
      9 => 'group_person_supply',
      10 => 'group_person_training',
      11 => 'group_person_vitals',
      12 => 'group_personal_relationships',
      13 => 'group_professional_relationships',
      14 => 'group_committee_relationships',
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
      0 => 'field_person_baptism',
      1 => 'field_person_confirmation',
      2 => 'field_person_consecration',
      3 => 'field_person_diaconate',
      4 => 'field_person_priesthood',
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
      0 => 'field_person_baptism',
      1 => 'field_person_confirmation',
      2 => 'field_person_consecration',
      3 => 'field_person_diaconate',
      4 => 'field_person_priesthood',
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
      0 => 'field_person_email_other',
      1 => 'field_person_email_other_type',
      2 => 'field_person_email_pref',
      3 => 'field_person_email_pref_type',
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
      0 => 'field_person_email_other',
      1 => 'field_person_email_other_type',
      2 => 'field_person_email_pref',
      3 => 'field_person_email_pref_type',
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
      0 => 'field_person_mail_1',
      1 => 'field_person_mail_2',
      2 => 'field_person_mail_city',
      3 => 'field_person_mail_other',
      4 => 'field_person_mail_postal',
      5 => 'field_person_mail_state',
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
      0 => 'field_person_mail_1',
      1 => 'field_person_mail_2',
      2 => 'field_person_mail_city',
      3 => 'field_person_mail_other',
      4 => 'field_person_mail_postal',
      5 => 'field_person_mail_state',
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
      0 => 'field_person_phone_other',
      1 => 'field_person_phone_other_type',
      2 => 'field_person_phone_pref',
      3 => 'field_person_phone_pref_type',
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
      0 => 'field_person_phone_other',
      1 => 'field_person_phone_other_type',
      2 => 'field_person_phone_pref',
      3 => 'field_person_phone_pref_type',
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
  $field_group->identifier = 'group_person_privacy|node|person|default';
  $field_group->group_name = 'group_person_privacy';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'person';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_person_data';
  $field_group->data = array(
    'label' => 'Privacy',
    'weight' => '17',
    'children' => array(
      0 => 'field_person_no_directory',
      1 => 'field_person_no_partnerships',
      2 => 'field_person_no_home',
      3 => 'field_person_no_phone',
      4 => 'field_person_no_email',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-person-privacy field-group-tab',
      ),
    ),
  );
  $export['group_person_privacy|node|person|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_person_privacy|node|person|form';
  $field_group->group_name = 'group_person_privacy';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'person';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_person_data';
  $field_group->data = array(
    'label' => 'Privacy',
    'weight' => '13',
    'children' => array(
      0 => 'field_person_no_directory',
      1 => 'field_person_no_partnerships',
      2 => 'field_person_no_home',
      3 => 'field_person_no_phone',
      4 => 'field_person_no_email',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-person-privacy field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_person_privacy|node|person|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_person_safe_training|node|person|default';
  $field_group->group_name = 'group_person_safe_training';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'person';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_person_training';
  $field_group->data = array(
    'label' => 'Safe Training',
    'weight' => '12',
    'children' => array(
      0 => 'field_person_safe_church',
      1 => 'field_safe_church_training_date',
      2 => 'field_person_safe_meet_sam',
      3 => 'field_person_safe_it_happened',
      4 => 'field_person_safe_keeping_church',
      5 => 'field_person_safe_policies',
      6 => 'field_person_safe_risk',
      7 => 'field_person_safe_refresher',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-person-safe-training field-group-fieldset',
      ),
    ),
  );
  $export['group_person_safe_training|node|person|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_person_safe_training|node|person|form';
  $field_group->group_name = 'group_person_safe_training';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'person';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_person_training';
  $field_group->data = array(
    'label' => 'Safe Church Training',
    'weight' => '70',
    'children' => array(
      0 => 'field_person_safe_church',
      1 => 'field_safe_church_training_date',
      2 => 'field_person_safe_it_happened',
      3 => 'field_person_safe_keeping_church',
      4 => 'field_person_safe_meet_sam',
      5 => 'field_person_safe_policies',
      6 => 'field_person_safe_refresher',
      7 => 'field_person_safe_risk',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-person-safe-training field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_person_safe_training|node|person|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_person_subscriptions|node|person|default';
  $field_group->group_name = 'group_person_subscriptions';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'person';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_person_data';
  $field_group->data = array(
    'label' => 'Subscruptions',
    'weight' => '18',
    'children' => array(
      0 => 'field_person_enews',
      1 => 'field_person_printed_news',
      2 => 'field_person_directory',
      3 => 'field_person_invitations',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-person-subscriptions field-group-tab',
      ),
    ),
  );
  $export['group_person_subscriptions|node|person|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_person_subscriptions|node|person|form';
  $field_group->group_name = 'group_person_subscriptions';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'person';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_person_data';
  $field_group->data = array(
    'label' => 'Subscriptions',
    'weight' => '14',
    'children' => array(
      0 => 'field_person_enews',
      1 => 'field_person_printed_news',
      2 => 'field_person_directory',
      3 => 'field_person_invitations',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-person-subscriptions field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_person_subscriptions|node|person|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_person_supply|node|person|default';
  $field_group->group_name = 'group_person_supply';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'person';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_person_data';
  $field_group->data = array(
    'label' => 'Supply Availability',
    'weight' => '19',
    'children' => array(
      0 => 'field_person_supply_he',
      1 => 'field_person_supply_mp',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-person-supply field-group-tab',
      ),
    ),
  );
  $export['group_person_supply|node|person|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_person_supply|node|person|form';
  $field_group->group_name = 'group_person_supply';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'person';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_person_data';
  $field_group->data = array(
    'label' => 'Supply Availability',
    'weight' => '15',
    'children' => array(
      0 => 'field_person_supply_he',
      1 => 'field_person_supply_mp',
      2 => 'field_person_supply_notes',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-person-supply field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_person_supply|node|person|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_person_training|node|person|default';
  $field_group->group_name = 'group_person_training';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'person';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_person_data';
  $field_group->data = array(
    'label' => 'Training',
    'weight' => '14',
    'children' => array(
      0 => 'group_person_safe_training',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-person-training field-group-tab',
      ),
    ),
  );
  $export['group_person_training|node|person|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_person_training|node|person|form';
  $field_group->group_name = 'group_person_training';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'person';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_person_data';
  $field_group->data = array(
    'label' => 'Training',
    'weight' => '8',
    'children' => array(
      0 => 'group_person_safe_training',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-person-training field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_person_training|node|person|form'] = $field_group;

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
      1 => 'field_person_dod',
      2 => 'field_person_first_name',
      3 => 'field_person_gender',
      4 => 'field_person_last_name',
      5 => 'field_person_middle_name',
      6 => 'field_person_nickname',
      7 => 'field_person_suffix',
      8 => 'field_person_title',
      9 => 'field_person_employment',
      10 => 'field_person_clergy_spouse',
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
      1 => 'field_person_dod',
      2 => 'field_person_first_name',
      3 => 'field_person_gender',
      4 => 'field_person_last_name',
      5 => 'field_person_middle_name',
      6 => 'field_person_nickname',
      7 => 'field_person_suffix',
      8 => 'field_person_title',
      9 => 'field_person_employment',
      10 => 'field_person_clergy_spouse',
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

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_personal_relationships|node|person|default';
  $field_group->group_name = 'group_personal_relationships';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'person';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_person_data';
  $field_group->data = array(
    'label' => 'Personal Relationships',
    'weight' => '15',
    'children' => array(),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Personal Relationships',
      'instance_settings' => array(
        'classes' => 'group-personal-relationships field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_personal_relationships|node|person|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_personal_relationships|node|person|form';
  $field_group->group_name = 'group_personal_relationships';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'person';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_person_data';
  $field_group->data = array(
    'label' => 'Personal Relationships',
    'weight' => '9',
    'children' => array(),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Personal Relationships',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-personal-relationships field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_personal_relationships|node|person|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_professional_relationships|node|person|default';
  $field_group->group_name = 'group_professional_relationships';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'person';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_person_data';
  $field_group->data = array(
    'label' => 'Professional Relationships',
    'weight' => '16',
    'children' => array(),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-professional-relationships field-group-tab',
      ),
    ),
  );
  $export['group_professional_relationships|node|person|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_professional_relationships|node|person|form';
  $field_group->group_name = 'group_professional_relationships';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'person';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_person_data';
  $field_group->data = array(
    'label' => 'Organizational Relationships',
    'weight' => '10',
    'children' => array(),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Organizational Relationships',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-professional-relationships field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_professional_relationships|node|person|form'] = $field_group;

  return $export;
}
