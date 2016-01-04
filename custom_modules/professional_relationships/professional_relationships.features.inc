<?php
/**
 * @file
 * professional_relationships.features.inc
 */

/**
 * Implements hook_node_info().
 */
function professional_relationships_node_info() {
  $items = array(
    'professional_relationship' => array(
      'name' => t('Organizational Relationship'),
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
