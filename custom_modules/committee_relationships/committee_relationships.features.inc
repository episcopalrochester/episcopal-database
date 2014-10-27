<?php
/**
 * @file
 * committee_relationships.features.inc
 */

/**
 * Implements hook_node_info().
 */
function committee_relationships_node_info() {
  $items = array(
    'committee_relationship' => array(
      'name' => t('Committee Relationship'),
      'base' => 'node_content',
      'description' => t('Add a relationship between a person and organization.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
