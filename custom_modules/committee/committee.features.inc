<?php
/**
 * @file
 * committee.features.inc
 */

/**
 * Implements hook_node_info().
 */
function committee_node_info() {
  $items = array(
    'committee' => array(
      'name' => t('Committee'),
      'base' => 'node_content',
      'description' => t('Diocesan committee or group'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
