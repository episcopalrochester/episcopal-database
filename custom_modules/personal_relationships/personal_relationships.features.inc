<?php
/**
 * @file
 * personal_relationships.features.inc
 */

/**
 * Implements hook_node_info().
 */
function personal_relationships_node_info() {
  $items = array(
    'personal_relationship' => array(
      'name' => t('Personal Relationship'),
      'base' => 'node_content',
      'description' => t('Add a relationship between two people - marriage, partnership, sibling, parent/child, etc.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
