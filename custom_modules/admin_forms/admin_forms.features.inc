<?php
/**
 * @file
 * admin_forms.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function admin_forms_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function admin_forms_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function admin_forms_node_info() {
  $items = array(
    'admin_form' => array(
      'name' => t('Admin Form'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
