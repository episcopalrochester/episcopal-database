<?php
/**
 * @file
 * parish.features.inc
 */

/**
 * Implements hook_node_info().
 */
function parish_node_info() {
  $items = array(
    'parish' => array(
      'name' => t('Parish'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  return $items;
}
