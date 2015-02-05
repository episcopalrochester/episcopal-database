<?php
/**
 * @file
 * admin_forms.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function admin_forms_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-admin_form-field_2015_apportionments'
  $field_instances['node-admin_form-field_2015_apportionments'] = array(
    'bundle' => 'admin_form',
    'default_value' => array(
      0 => array(
        'tablefield' => array(
          'cell_0_0' => 'Parish',
          'cell_0_1' => '2015 Apportionment',
          'cell_1_0' => 'Addison, Redeemer',
          'cell_1_1' => '3,331 ',
          'cell_2_0' => 'Angelica, St. Paul\'s',
          'cell_2_1' => '1,128 ',
          'cell_3_0' => 'Avon, Zion',
          'cell_3_1' => '13,778 ',
          'cell_4_0' => 'Bath, St. Thomas',
          'cell_4_1' => '23,588 ',
          'cell_5_0' => 'Bloomfield, St. Peter\'s',
          'cell_5_1' => '3,358 ',
          'cell_6_0' => 'Branchport, St. Luke\'s',
          'cell_6_1' => '4,516 ',
          'cell_7_0' => 'Brockport, St. Luke\'s',
          'cell_7_1' => '16,447 ',
          'cell_8_0' => 'Caledonia, St. Andrew\'s',
          'cell_8_1' => '2,223 ',
          'cell_9_0' => 'Canandaigua, St. John\'s',
          'cell_9_1' => '36,424 ',
          'cell_10_0' => 'Canaseraga, Trinity',
          'cell_10_1' => '1,103 ',
          'cell_11_0' => 'Catharine, St. John\'s',
          'cell_11_1' => '2,645 ',
          'cell_12_0' => 'Clifton Spr/Ph, St. John\'s',
          'cell_12_1' => '9,283 ',
          'cell_13_0' => 'Corning, Christ Church',
          'cell_13_1' => '45,845 ',
          'cell_14_0' => 'Cuba, Christ Church',
          'cell_14_1' => '1,266 ',
          'cell_15_0' => 'Dansville, St. Peter\'s',
          'cell_15_1' => '18,652 ',
          'cell_16_0' => 'Fairport, St. Luke\'s',
          'cell_16_1' => '24,794 ',
          'cell_17_0' => 'Gates, Epiphany',
          'cell_17_1' => '28,541 ',
          'cell_18_0' => 'Geneseo, St. Michael\'s',
          'cell_18_1' => '22,115 ',
          'cell_19_0' => 'Geneva, St. Peter\'s',
          'cell_19_1' => '32,453 ',
          'cell_20_0' => 'Geneva, Trinity',
          'cell_20_1' => '20,054 ',
          'cell_21_0' => 'Greece, Trinity',
          'cell_21_1' => '16,113 ',
          'cell_22_0' => 'Hammondsport, St. James\'',
          'cell_22_1' => '7,512 ',
          'cell_23_0' => 'Henrietta, St. Peter\'s',
          'cell_23_1' => '12,250 ',
          'cell_24_0' => 'Hilton, St. George\'s ',
          'cell_24_1' => '7,367 ',
          'cell_25_0' => 'Honeoye Falls, St. John\'s',
          'cell_25_1' => '9,662 ',
          'cell_26_0' => 'Hornell, Christ Church',
          'cell_26_1' => '10,441 ',
          'cell_27_0' => 'Lyons, Grace Church',
          'cell_27_1' => '10,249 ',
          'cell_28_0' => 'Montour Falls, St. Paul\'s',
          'cell_28_1' => '898 ',
          'cell_29_0' => 'Newark, St. Mark\'s',
          'cell_29_1' => '11,163 ',
          'cell_30_0' => 'Palmyra, Zion Church',
          'cell_30_1' => '13,521 ',
          'cell_31_0' => 'Penfield, Incarnation',
          'cell_31_1' => '23,863 ',
          'cell_32_0' => 'Penn Yan, St. Mark\'s',
          'cell_32_1' => '14,253 ',
          'cell_33_0' => 'Pittsford, Christ Church',
          'cell_33_1' => '112,278 ',
          'cell_34_0' => 'Rochester, Ascension',
          'cell_34_1' => '17,596 ',
          'cell_35_0' => 'Rochester, Christ Church',
          'cell_35_1' => '36,177 ',
          'cell_36_0' => 'Rochester, SM&SJ',
          'cell_36_1' => '8,462 ',
          'cell_37_0' => 'Rochester, St. Luke and St. Simon Cyrene',
          'cell_37_1' => '30,138 ',
          'cell_38_0' => 'Rochester, St. Paul\'s',
          'cell_38_1' => '171,081 ',
          'cell_39_0' => 'Rochester, St. Stephen\'s',
          'cell_39_1' => '10,785 ',
          'cell_40_0' => 'Rochester, St. Thomas\'',
          'cell_40_1' => '64,541 ',
          'cell_41_0' => 'Savona, Good Shepherd',
          'cell_41_1' => '2,985 ',
          'cell_42_0' => 'Scottsville, Grace Church',
          'cell_42_1' => '9,807 ',
          'cell_43_0' => 'Sodus, St. John\'s',
          'cell_43_1' => '6,297 ',
          'cell_44_0' => 'Watkins Glen, St. James\'',
          'cell_44_1' => '7,227 ',
          'cell_45_0' => 'Webster, Good Shepherd',
          'cell_45_1' => '39,182 ',
          'cell_46_0' => 'Wellsville, St. John\'s',
          'cell_46_1' => '5,811 ',
          'import' => array(
            'rebuild_field_2015_apportionments_0' => 'Upload CSV',
            'tablefield_csv_field_2015_apportionments_0' => '',
          ),
          'rebuild' => array(
            'count_cols' => 2,
            'count_rows' => 47,
            'rebuild' => 'Rebuild Table',
          ),
        ),
      ),
    ),
    'deleted' => 0,
    'description' => 'Find your parish\'s 2015 Apportionment below.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'tablefield',
        'settings' => array(),
        'type' => 'default',
        'weight' => 25,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_2015_apportionments',
    'label' => '2015 Apportionments Reference Table',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'tablefield',
      'settings' => array(),
      'type' => 'tablefield',
      'weight' => 32,
    ),
  );

  // Exported field_instance: 'node-admin_form-field_admin_form_alternates'
  $field_instances['node-admin_form-field_admin_form_alternates'] = array(
    'bundle' => 'admin_form',
    'default_value' => array(
      0 => array(
        'tablefield' => array(
          'cell_0_0' => 'Last Name',
          'cell_0_1' => 'First Name',
          'cell_0_2' => 'Home Phone',
          'cell_0_3' => 'Mobile Phone',
          'cell_0_4' => 'E-Mail',
          'cell_1_0' => '',
          'cell_1_1' => '',
          'cell_1_2' => '',
          'cell_1_3' => '',
          'cell_1_4' => '',
          'cell_2_0' => '',
          'cell_2_1' => '',
          'cell_2_2' => '',
          'cell_2_3' => '',
          'cell_2_4' => '',
          'cell_3_0' => '',
          'cell_3_1' => '',
          'cell_3_2' => '',
          'cell_3_3' => '',
          'cell_3_4' => '',
          'import' => array(
            'rebuild_field_admin_form_alternates_0' => 'Upload CSV',
            'tablefield_csv_field_admin_form_alternates_0' => '',
          ),
          'rebuild' => array(
            'count_cols' => 5,
            'count_rows' => 4,
            'rebuild' => 'Rebuild Table',
          ),
        ),
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'tablefield',
        'settings' => array(),
        'type' => 'default',
        'weight' => 11,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_admin_form_alternates',
    'label' => 'Alternates',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'tablefield',
      'settings' => array(),
      'type' => 'tablefield',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-admin_form-field_admin_form_apmnt_cmt'
  $field_instances['node-admin_form-field_admin_form_apmnt_cmt'] = array(
    'bundle' => 'admin_form',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Select value from the table below.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 26,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_admin_form_apmnt_cmt',
    'label' => 'Amount of Apportionment Commitment',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 29,
    ),
  );

  // Exported field_instance: 'node-admin_form-field_admin_form_apmnt_signature'
  $field_instances['node-admin_form-field_admin_form_apmnt_signature'] = array(
    'bundle' => 'admin_form',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Type your name as a digital signature.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 28,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_admin_form_apmnt_signature',
    'label' => 'Signature',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 31,
    ),
  );

  // Exported field_instance: 'node-admin_form-field_admin_form_apmnt_statement'
  $field_instances['node-admin_form-field_admin_form_apmnt_statement'] = array(
    'bundle' => 'admin_form',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'markup',
        'settings' => array(),
        'type' => 'markup_default',
        'weight' => 27,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_admin_form_apmnt_statement',
    'label' => 'Statement',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'markup',
      'settings' => array(),
      'type' => 'markup',
      'weight' => 28,
    ),
  );

  // Exported field_instance: 'node-admin_form-field_admin_form_audit_conflicts'
  $field_instances['node-admin_form-field_admin_form_audit_conflicts'] = array(
    'bundle' => 'admin_form',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 16,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_admin_form_audit_conflicts',
    'label' => 'Conflicts of Interest',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 15,
    ),
  );

  // Exported field_instance: 'node-admin_form-field_admin_form_audit_fin'
  $field_instances['node-admin_form-field_admin_form_audit_fin'] = array(
    'bundle' => 'admin_form',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 19,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_admin_form_audit_fin',
    'label' => 'Date of last parish financial audit',
    'required' => 0,
    'settings' => array(
      'default_value' => 'blank',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'm/d/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_text',
      'weight' => 18,
    ),
  );

  // Exported field_instance: 'node-admin_form-field_admin_form_audit_team'
  $field_instances['node-admin_form-field_admin_form_audit_team'] = array(
    'bundle' => 'admin_form',
    'default_value' => array(
      0 => array(
        'tablefield' => array(
          'cell_0_0' => 'Name',
          'cell_0_1' => 'Office',
          'cell_1_0' => '',
          'cell_1_1' => '',
          'cell_2_0' => '',
          'cell_2_1' => '',
          'cell_3_0' => '',
          'cell_3_1' => '',
          'import' => array(
            'rebuild_field_admin_form_audit_team_0' => 'Upload CSV',
            'tablefield_csv_field_admin_form_audit_team_0' => '',
          ),
          'rebuild' => array(
            'count_cols' => 2,
            'count_rows' => 4,
            'rebuild' => 'Rebuild Table',
          ),
        ),
      ),
    ),
    'deleted' => 0,
    'description' => 'Please list (3) persons that will comprise your Parish Audit Team and any parish office they may hold',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'tablefield',
        'settings' => array(),
        'type' => 'default',
        'weight' => 13,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_admin_form_audit_team',
    'label' => 'Audit Team',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'tablefield',
      'settings' => array(),
      'type' => 'tablefield',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'node-admin_form-field_admin_form_clergy'
  $field_instances['node-admin_form-field_admin_form_clergy'] = array(
    'bundle' => 'admin_form',
    'default_value' => array(
      0 => array(
        'tablefield' => array(
          'cell_0_0' => 'Vestry Clerk',
          'cell_0_1' => 'Last Name',
          'cell_0_2' => 'First name',
          'cell_0_3' => 'Phone',
          'cell_0_4' => 'E-Mail',
          'cell_1_0' => 'Clerk',
          'cell_1_1' => '',
          'cell_1_2' => '',
          'cell_1_3' => '',
          'cell_1_4' => '',
          'import' => array(
            'rebuild_field_admin_form_clergy_0' => 'Upload CSV',
            'tablefield_csv_field_admin_form_clergy_0' => '',
          ),
          'rebuild' => array(
            'count_cols' => 5,
            'count_rows' => 2,
            'rebuild' => 'Rebuild Table',
          ),
        ),
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'tablefield',
        'settings' => array(),
        'type' => 'default',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_admin_form_clergy',
    'label' => 'Vestry Clerk',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'tablefield',
      'settings' => array(),
      'type' => 'tablefield',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-admin_form-field_admin_form_cpa_addr'
  $field_instances['node-admin_form-field_admin_form_cpa_addr'] = array(
    'bundle' => 'admin_form',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 15,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_admin_form_cpa_addr',
    'label' => 'Address',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'node-admin_form-field_admin_form_cpa_name'
  $field_instances['node-admin_form-field_admin_form_cpa_name'] = array(
    'bundle' => 'admin_form',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 14,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_admin_form_cpa_name',
    'label' => 'Name of CPA',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'node-admin_form-field_admin_form_delegates'
  $field_instances['node-admin_form-field_admin_form_delegates'] = array(
    'bundle' => 'admin_form',
    'default_value' => array(
      0 => array(
        'tablefield' => array(
          'cell_0_0' => 'Last Name',
          'cell_0_1' => 'First Name',
          'cell_0_2' => 'Home Phone',
          'cell_0_3' => 'Mobile Phone',
          'cell_0_4' => 'Email',
          'cell_1_0' => '',
          'cell_1_1' => '',
          'cell_1_2' => '',
          'cell_1_3' => '',
          'cell_1_4' => '',
          'cell_2_0' => '',
          'cell_2_1' => '',
          'cell_2_2' => '',
          'cell_2_3' => '',
          'cell_2_4' => '',
          'cell_3_0' => '',
          'cell_3_1' => '',
          'cell_3_2' => '',
          'cell_3_3' => '',
          'cell_3_4' => '',
          'import' => array(
            'rebuild_field_admin_form_delegates_0' => 'Upload CSV',
            'tablefield_csv_field_admin_form_delegates_0' => '',
          ),
          'rebuild' => array(
            'count_cols' => 5,
            'count_rows' => 4,
            'rebuild' => 'Rebuild Table',
          ),
        ),
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'tablefield',
        'settings' => array(),
        'type' => 'default',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_admin_form_delegates',
    'label' => 'Delegates',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'tablefield',
      'settings' => array(),
      'type' => 'tablefield',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-admin_form-field_admin_form_formation'
  $field_instances['node-admin_form-field_admin_form_formation'] = array(
    'bundle' => 'admin_form',
    'default_value' => array(
      0 => array(
        'tablefield' => array(
          'cell_0_0' => 'Christian Formation',
          'cell_0_1' => 'Last Name',
          'cell_0_2' => 'First Name',
          'cell_0_3' => 'Phone',
          'cell_0_4' => 'E-Mail',
          'cell_1_0' => 'Director',
          'cell_1_1' => '',
          'cell_1_2' => '',
          'cell_1_3' => '',
          'cell_1_4' => '',
          'cell_2_0' => 'Pre-School',
          'cell_2_1' => '',
          'cell_2_2' => '',
          'cell_2_3' => '',
          'cell_2_4' => '',
          'cell_3_0' => 'Grade School',
          'cell_3_1' => '',
          'cell_3_2' => '',
          'cell_3_3' => '',
          'cell_3_4' => '',
          'cell_4_0' => 'Youth',
          'cell_4_1' => '',
          'cell_4_2' => '',
          'cell_4_3' => '',
          'cell_4_4' => '',
          'cell_5_0' => 'Adult',
          'cell_5_1' => '',
          'cell_5_2' => '',
          'cell_5_3' => '',
          'cell_5_4' => '',
          'cell_6_0' => '',
          'cell_6_1' => '',
          'cell_6_2' => '',
          'cell_6_3' => '',
          'cell_6_4' => '',
          'cell_7_0' => '',
          'cell_7_1' => '',
          'cell_7_2' => '',
          'cell_7_3' => '',
          'cell_7_4' => '',
          'import' => array(
            'rebuild_field_admin_form_formation_0' => 'Upload CSV',
            'tablefield_csv_field_admin_form_formation_0' => '',
          ),
          'rebuild' => array(
            'count_cols' => 5,
            'count_rows' => 8,
            'rebuild' => 'Rebuild Table',
          ),
        ),
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'tablefield',
        'settings' => array(),
        'type' => 'default',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_admin_form_formation',
    'label' => 'Christian Formation',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'tablefield',
      'settings' => array(),
      'type' => 'tablefield',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-admin_form-field_admin_form_music'
  $field_instances['node-admin_form-field_admin_form_music'] = array(
    'bundle' => 'admin_form',
    'default_value' => array(
      0 => array(
        'tablefield' => array(
          'cell_0_0' => 'Music Ministry',
          'cell_0_1' => 'Last Name',
          'cell_0_2' => 'First Name',
          'cell_0_3' => 'Street Address',
          'cell_0_4' => 'City',
          'cell_1_0' => 'Director',
          'cell_1_1' => '',
          'cell_1_2' => '',
          'cell_1_3' => '',
          'cell_1_4' => '',
          'cell_2_0' => 'Choir',
          'cell_2_1' => '',
          'cell_2_2' => '',
          'cell_2_3' => '',
          'cell_2_4' => '',
          'cell_3_0' => 'Children\'s',
          'cell_3_1' => '',
          'cell_3_2' => '',
          'cell_3_3' => '',
          'cell_3_4' => '',
          'cell_4_0' => 'Bell Choir',
          'cell_4_1' => '',
          'cell_4_2' => '',
          'cell_4_3' => '',
          'cell_4_4' => '',
          'cell_5_0' => '',
          'cell_5_1' => '',
          'cell_5_2' => '',
          'cell_5_3' => '',
          'cell_5_4' => '',
          'cell_6_0' => '',
          'cell_6_1' => '',
          'cell_6_2' => '',
          'cell_6_3' => '',
          'cell_6_4' => '',
          'import' => array(
            'rebuild_field_admin_form_music_0' => 'Upload CSV',
            'tablefield_csv_field_admin_form_music_0' => '',
          ),
          'rebuild' => array(
            'count_cols' => 5,
            'count_rows' => 7,
            'rebuild' => 'Rebuild Table',
          ),
        ),
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'tablefield',
        'settings' => array(),
        'type' => 'default',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_admin_form_music',
    'label' => 'Music Ministry',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'tablefield',
      'settings' => array(),
      'type' => 'tablefield',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-admin_form-field_admin_form_parish'
  $field_instances['node-admin_form-field_admin_form_parish'] = array(
    'bundle' => 'admin_form',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'node_reference',
        'settings' => array(),
        'type' => 'node_reference_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_admin_form_parish',
    'label' => 'Parish',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-admin_form-field_admin_form_wardens'
  $field_instances['node-admin_form-field_admin_form_wardens'] = array(
    'bundle' => 'admin_form',
    'default_value' => array(
      0 => array(
        'tablefield' => array(
          'cell_0_0' => 'Warden',
          'cell_0_1' => 'Last Name',
          'cell_0_2' => 'First Name',
          'cell_0_3' => 'Phone',
          'cell_0_4' => 'E-Mail',
          'cell_1_0' => 'Senior Warden',
          'cell_1_1' => '',
          'cell_1_2' => '',
          'cell_1_3' => '',
          'cell_1_4' => '',
          'cell_2_0' => 'Junior Warden',
          'cell_2_1' => '',
          'cell_2_2' => '',
          'cell_2_3' => '',
          'cell_2_4' => '',
          'import' => array(
            'rebuild_field_admin_form_wardens_0' => 'Upload CSV',
            'tablefield_csv_field_admin_form_wardens_0' => '',
          ),
          'rebuild' => array(
            'count_cols' => 5,
            'count_rows' => 3,
            'rebuild' => 'Rebuild Table',
          ),
        ),
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'tablefield',
        'settings' => array(),
        'type' => 'default',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_admin_form_wardens',
    'label' => 'Wardens',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'tablefield',
      'settings' => array(),
      'type' => 'tablefield',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-admin_form-field_admin_form_year'
  $field_instances['node-admin_form-field_admin_form_year'] = array(
    'bundle' => 'admin_form',
    'default_value' => array(
      0 => array(
        'value' => 2015,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_admin_form_year',
    'label' => 'Year',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-admin_form-field_apportmention_description'
  $field_instances['node-admin_form-field_apportmention_description'] = array(
    'bundle' => 'admin_form',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'markup',
        'settings' => array(),
        'type' => 'markup_default',
        'weight' => 29,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_apportmention_description',
    'label' => 'Apportionment Description',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'markup',
      'settings' => array(),
      'type' => 'markup',
      'weight' => 30,
    ),
  );

  // Exported field_instance: 'node-admin_form-field_audit_form_aud_mgmt'
  $field_instances['node-admin_form-field_audit_form_aud_mgmt'] = array(
    'bundle' => 'admin_form',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 18,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_audit_form_aud_mgmt',
    'label' => 'Date of last parish management audit',
    'required' => 0,
    'settings' => array(
      'default_value' => 'blank',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'm/d/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_text',
      'weight' => 19,
    ),
  );

  // Exported field_instance: 'node-admin_form-field_audit_form_date'
  $field_instances['node-admin_form-field_audit_form_date'] = array(
    'bundle' => 'admin_form',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 24,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_audit_form_date',
    'label' => 'Date',
    'required' => 0,
    'settings' => array(
      'default_value' => 'blank',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'm/d/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_text',
      'weight' => 24,
    ),
  );

  // Exported field_instance: 'node-admin_form-field_audit_form_email'
  $field_instances['node-admin_form-field_audit_form_email'] = array(
    'bundle' => 'admin_form',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 23,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_audit_form_email',
    'label' => 'Email',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 23,
    ),
  );

  // Exported field_instance: 'node-admin_form-field_audit_form_name'
  $field_instances['node-admin_form-field_audit_form_name'] = array(
    'bundle' => 'admin_form',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 20,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_audit_form_name',
    'label' => 'Name',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 20,
    ),
  );

  // Exported field_instance: 'node-admin_form-field_audit_form_telephone'
  $field_instances['node-admin_form-field_audit_form_telephone'] = array(
    'bundle' => 'admin_form',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 22,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_audit_form_telephone',
    'label' => 'Telephone',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 22,
    ),
  );

  // Exported field_instance: 'node-admin_form-field_audit_form_title'
  $field_instances['node-admin_form-field_audit_form_title'] = array(
    'bundle' => 'admin_form',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 21,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_audit_form_title',
    'label' => 'Title',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 21,
    ),
  );

  // Exported field_instance: 'node-admin_form-field_editors'
  $field_instances['node-admin_form-field_editors'] = array(
    'bundle' => 'admin_form',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Add anyone who should have access to this form.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'user_reference',
        'settings' => array(),
        'type' => 'user_reference_default',
        'weight' => 12,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_editors',
    'label' => 'Additional Editors',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'user_reference',
      'settings' => array(
        'autocomplete_match' => 'contains',
        'autocomplete_path' => 'user_reference/autocomplete',
        'size' => 60,
      ),
      'type' => 'user_reference_autocomplete',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-admin_form-field_finance_ministry'
  $field_instances['node-admin_form-field_finance_ministry'] = array(
    'bundle' => 'admin_form',
    'default_value' => array(
      0 => array(
        'tablefield' => array(
          'cell_0_0' => 'Finance Ministry',
          'cell_0_1' => 'Last Name',
          'cell_0_2' => 'First Name',
          'cell_0_3' => 'Phone',
          'cell_0_4' => 'E-Mail',
          'cell_1_0' => 'Treasurer',
          'cell_1_1' => '',
          'cell_1_2' => '',
          'cell_1_3' => '',
          'cell_1_4' => '',
          'cell_2_0' => 'Finance',
          'cell_2_1' => '',
          'cell_2_2' => '',
          'cell_2_3' => '',
          'cell_2_4' => '',
          'cell_3_0' => 'Investments',
          'cell_3_1' => '',
          'cell_3_2' => '',
          'cell_3_3' => '',
          'cell_3_4' => '',
          'cell_4_0' => 'Planned Giving',
          'cell_4_1' => '',
          'cell_4_2' => '',
          'cell_4_3' => '',
          'cell_4_4' => '',
          'cell_5_0' => '',
          'cell_5_1' => '',
          'cell_5_2' => '',
          'cell_5_3' => '',
          'cell_5_4' => '',
          'cell_6_0' => '',
          'cell_6_1' => '',
          'cell_6_2' => '',
          'cell_6_3' => '',
          'cell_6_4' => '',
          'import' => array(
            'rebuild_field_finance_ministry_0' => 'Upload CSV',
            'tablefield_csv_field_finance_ministry_0' => '',
          ),
          'rebuild' => array(
            'count_cols' => 5,
            'count_rows' => 7,
            'rebuild' => 'Rebuild Table',
          ),
        ),
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'tablefield',
        'settings' => array(),
        'type' => 'default',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_finance_ministry',
    'label' => 'Finance Ministry',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'tablefield',
      'settings' => array(),
      'type' => 'tablefield',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-admin_form-field_office_staff'
  $field_instances['node-admin_form-field_office_staff'] = array(
    'bundle' => 'admin_form',
    'default_value' => array(
      0 => array(
        'tablefield' => array(
          'cell_0_0' => 'Job Title',
          'cell_0_1' => 'Last Name',
          'cell_0_2' => 'First Name',
          'cell_0_3' => 'Phone',
          'cell_0_4' => 'E-Mail',
          'cell_1_0' => 'Administrator',
          'cell_1_1' => '',
          'cell_1_2' => '',
          'cell_1_3' => '',
          'cell_1_4' => '',
          'cell_2_0' => 'Secretary',
          'cell_2_1' => '',
          'cell_2_2' => '',
          'cell_2_3' => '',
          'cell_2_4' => '',
          'cell_3_0' => 'Communications',
          'cell_3_1' => '',
          'cell_3_2' => '',
          'cell_3_3' => '',
          'cell_3_4' => '',
          'cell_4_0' => '',
          'cell_4_1' => '',
          'cell_4_2' => '',
          'cell_4_3' => '',
          'cell_4_4' => '',
          'cell_5_0' => '',
          'cell_5_1' => '',
          'cell_5_2' => '',
          'cell_5_3' => '',
          'cell_5_4' => '',
          'cell_6_0' => '',
          'cell_6_1' => '',
          'cell_6_2' => '',
          'cell_6_3' => '',
          'cell_6_4' => '',
          'import' => array(
            'rebuild_field_office_staff_0' => 'Upload CSV',
            'tablefield_csv_field_office_staff_0' => '',
          ),
          'rebuild' => array(
            'count_cols' => 5,
            'count_rows' => 7,
            'rebuild' => 'Rebuild Table',
          ),
        ),
      ),
    ),
    'deleted' => 0,
    'description' => 'Use blank spaces at the bottom to add additional office staff, if you have anyway.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'tablefield',
        'settings' => array(),
        'type' => 'default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_office_staff',
    'label' => 'Office Staff',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'tablefield',
      'settings' => array(),
      'type' => 'tablefield',
      'weight' => 2,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('2015 Apportionments Reference Table');
  t('Add anyone who should have access to this form.');
  t('Additional Editors');
  t('Address');
  t('Alternates');
  t('Amount of Apportionment Commitment');
  t('Apportionment Description');
  t('Audit Team');
  t('Christian Formation');
  t('Conflicts of Interest');
  t('Date');
  t('Date of last parish financial audit');
  t('Date of last parish management audit');
  t('Delegates');
  t('Email');
  t('Finance Ministry');
  t('Find your parish\'s 2015 Apportionment below.');
  t('Music Ministry');
  t('Name');
  t('Name of CPA');
  t('Office Staff');
  t('Parish');
  t('Please list (3) persons that will comprise your Parish Audit Team and any parish office they may hold');
  t('Select value from the table below.');
  t('Signature');
  t('Statement');
  t('Telephone');
  t('Title');
  t('Type your name as a digital signature.');
  t('Use blank spaces at the bottom to add additional office staff, if you have anyway.');
  t('Vestry Clerk');
  t('Wardens');
  t('Year');

  return $field_instances;
}
