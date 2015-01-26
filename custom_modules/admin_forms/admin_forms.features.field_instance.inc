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

  // Exported field_instance: 'node-admin_form-field_editors'
  $field_instances['node-admin_form-field_editors'] = array(
    'bundle' => 'admin_form',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
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
    'label' => 'Editors',
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
      'weight' => 11,
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
  t('Alternates');
  t('Christian Formation');
  t('Delegates');
  t('Editors');
  t('Finance Ministry');
  t('Music Ministry');
  t('Office Staff');
  t('Parish');
  t('Use blank spaces at the bottom to add additional office staff, if you have anyway.');
  t('Vestry Clerk');
  t('Wardens');
  t('Year');

  return $field_instances;
}
