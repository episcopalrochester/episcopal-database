<?php
/**
 * @file
 * person_data_type.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function person_data_type_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function person_data_type_node_info() {
  $items = array(
    'person' => array(
      'name' => t('Person'),
      'base' => 'node_content',
      'description' => t('Enter a new human being into the system'),
      'has_title' => '1',
      'title_label' => t('Full Name'),
      'help' => '',
    ),
  );
  return $items;
}
