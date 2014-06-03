<?php
/**
 * @file
 * parish.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function parish_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-parish-field_parish_district'
  $field_instances['node-parish-field_parish_district'] = array(
    'bundle' => 'parish',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_parish_district',
    'label' => 'District',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => -4,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('District');

  return $field_instances;
}
