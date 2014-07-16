<?php
/**
 * @file
 * prayer_requests.features.inc
 */

/**
 * Implements hook_node_info().
 */
function prayer_requests_node_info() {
  $items = array(
    'prayer' => array(
      'name' => t('Prayer Request'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
