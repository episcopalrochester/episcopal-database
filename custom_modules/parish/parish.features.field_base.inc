<?php
/**
 * @file
 * parish.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function parish_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_parish_district'
  $field_bases['field_parish_district'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_parish_district',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'Monroe' => 'Monroe',
        'Northeast' => 'Northeast',
        'Rochester' => 'Rochester',
        'Southeast' => 'Southeast',
        'Southwest' => 'Southwest',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  return $field_bases;
}
