<?php
/**
 * @file
 * edb.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function edb_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'my_data';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'My Data';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'My Data';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'type',
      'rendered' => 1,
      'rendered_strip' => 1,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'type' => 'type',
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Content: Additional Editors (field_editors) */
  $handler->display->display_options['relationships']['field_editors_uid']['id'] = 'field_editors_uid';
  $handler->display->display_options['relationships']['field_editors_uid']['table'] = 'field_data_field_editors';
  $handler->display->display_options['relationships']['field_editors_uid']['field'] = 'field_editors_uid';
  $handler->display->display_options['relationships']['field_editors_uid']['delta'] = '-1';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid_1']['id'] = 'uid_1';
  $handler->display->display_options['relationships']['uid_1']['table'] = 'node';
  $handler->display->display_options['relationships']['uid_1']['field'] = 'uid';
  /* Relationship: Content: Organization (field_pf_second) - reverse */
  $handler->display->display_options['relationships']['reverse_field_pf_second_node']['id'] = 'reverse_field_pf_second_node';
  $handler->display->display_options['relationships']['reverse_field_pf_second_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_pf_second_node']['field'] = 'reverse_field_pf_second_node';
  /* Relationship: Content: Person (field_pf_first) - reverse */
  $handler->display->display_options['relationships']['reverse_field_pf_first_node']['id'] = 'reverse_field_pf_first_node';
  $handler->display->display_options['relationships']['reverse_field_pf_first_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_pf_first_node']['field'] = 'reverse_field_pf_first_node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  /* Filter criterion: Content: Published or admin */
  $handler->display->display_options['filters']['status_extra']['id'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['table'] = 'node';
  $handler->display->display_options['filters']['status_extra']['field'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'person' => 'person',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: User: Current */
  $handler->display->display_options['filters']['uid_current']['id'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['table'] = 'users';
  $handler->display->display_options['filters']['uid_current']['field'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['relationship'] = 'uid';
  $handler->display->display_options['filters']['uid_current']['value'] = '1';
  $handler->display->display_options['filters']['uid_current']['group'] = 2;
  /* Filter criterion: User: Current */
  $handler->display->display_options['filters']['uid_current_1']['id'] = 'uid_current_1';
  $handler->display->display_options['filters']['uid_current_1']['table'] = 'users';
  $handler->display->display_options['filters']['uid_current_1']['field'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current_1']['relationship'] = 'field_editors_uid';
  $handler->display->display_options['filters']['uid_current_1']['value'] = '1';
  $handler->display->display_options['filters']['uid_current_1']['group'] = 2;

  /* Display: People */
  $handler = $view->new_display('page', 'People', 'page');
  $handler->display->display_options['path'] = 'data/people';
  $handler->display->display_options['menu']['type'] = 'default tab';
  $handler->display->display_options['menu']['title'] = 'People';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'People';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Parishes */
  $handler = $view->new_display('page', 'Parishes', 'page_1');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published or admin */
  $handler->display->display_options['filters']['status_extra']['id'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['table'] = 'node';
  $handler->display->display_options['filters']['status_extra']['field'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'parish' => 'parish',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: User: Current */
  $handler->display->display_options['filters']['uid_current']['id'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['table'] = 'users';
  $handler->display->display_options['filters']['uid_current']['field'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['relationship'] = 'uid';
  $handler->display->display_options['filters']['uid_current']['value'] = '1';
  $handler->display->display_options['filters']['uid_current']['group'] = 2;
  /* Filter criterion: User: Current */
  $handler->display->display_options['filters']['uid_current_1']['id'] = 'uid_current_1';
  $handler->display->display_options['filters']['uid_current_1']['table'] = 'users';
  $handler->display->display_options['filters']['uid_current_1']['field'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current_1']['relationship'] = 'field_editors_uid';
  $handler->display->display_options['filters']['uid_current_1']['value'] = '1';
  $handler->display->display_options['filters']['uid_current_1']['group'] = 2;
  $handler->display->display_options['path'] = 'data/parishes';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Parishes';
  $handler->display->display_options['menu']['weight'] = '1';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'tab';
  $handler->display->display_options['tab_options']['title'] = 'Parishes';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Prayers */
  $handler = $view->new_display('page', 'Prayers', 'page_2');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Prayer';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Edit';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published or admin */
  $handler->display->display_options['filters']['status_extra']['id'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['table'] = 'node';
  $handler->display->display_options['filters']['status_extra']['field'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'prayer' => 'prayer',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: User: Current */
  $handler->display->display_options['filters']['uid_current']['id'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['table'] = 'users';
  $handler->display->display_options['filters']['uid_current']['field'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['relationship'] = 'uid';
  $handler->display->display_options['filters']['uid_current']['value'] = '1';
  $handler->display->display_options['filters']['uid_current']['group'] = 2;
  /* Filter criterion: User: Current */
  $handler->display->display_options['filters']['uid_current_1']['id'] = 'uid_current_1';
  $handler->display->display_options['filters']['uid_current_1']['table'] = 'users';
  $handler->display->display_options['filters']['uid_current_1']['field'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current_1']['relationship'] = 'field_editors_uid';
  $handler->display->display_options['filters']['uid_current_1']['value'] = '1';
  $handler->display->display_options['filters']['uid_current_1']['group'] = 2;
  $handler->display->display_options['path'] = 'data/prayers';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Prayers';
  $handler->display->display_options['menu']['weight'] = '2';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'tab';
  $handler->display->display_options['tab_options']['title'] = 'Parishes';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Admin Forms */
  $handler = $view->new_display('page', 'Admin Forms', 'page_3');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Content: Additional Editors (field_editors) */
  $handler->display->display_options['relationships']['field_editors_uid']['id'] = 'field_editors_uid';
  $handler->display->display_options['relationships']['field_editors_uid']['table'] = 'field_data_field_editors';
  $handler->display->display_options['relationships']['field_editors_uid']['field'] = 'field_editors_uid';
  $handler->display->display_options['relationships']['field_editors_uid']['delta'] = '-1';
  /* Relationship: Content: Parish (field_admin_form_parish) */
  $handler->display->display_options['relationships']['field_admin_form_parish_nid']['id'] = 'field_admin_form_parish_nid';
  $handler->display->display_options['relationships']['field_admin_form_parish_nid']['table'] = 'field_data_field_admin_form_parish';
  $handler->display->display_options['relationships']['field_admin_form_parish_nid']['field'] = 'field_admin_form_parish_nid';
  $handler->display->display_options['relationships']['field_admin_form_parish_nid']['delta'] = '-1';
  /* Relationship: Content: Organization (field_pf_second) - reverse */
  $handler->display->display_options['relationships']['reverse_field_pf_second_node']['id'] = 'reverse_field_pf_second_node';
  $handler->display->display_options['relationships']['reverse_field_pf_second_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_pf_second_node']['field'] = 'reverse_field_pf_second_node';
  $handler->display->display_options['relationships']['reverse_field_pf_second_node']['relationship'] = 'field_admin_form_parish_nid';
  $handler->display->display_options['relationships']['reverse_field_pf_second_node']['label'] = 'Relationship to Org';
  /* Relationship: Content: Person (field_pf_first) */
  $handler->display->display_options['relationships']['field_pf_first_nid']['id'] = 'field_pf_first_nid';
  $handler->display->display_options['relationships']['field_pf_first_nid']['table'] = 'field_data_field_pf_first';
  $handler->display->display_options['relationships']['field_pf_first_nid']['field'] = 'field_pf_first_nid';
  $handler->display->display_options['relationships']['field_pf_first_nid']['relationship'] = 'reverse_field_pf_second_node';
  $handler->display->display_options['relationships']['field_pf_first_nid']['label'] = 'Person Node';
  $handler->display->display_options['relationships']['field_pf_first_nid']['delta'] = '-1';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid_1']['id'] = 'uid_1';
  $handler->display->display_options['relationships']['uid_1']['table'] = 'node';
  $handler->display->display_options['relationships']['uid_1']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid_1']['relationship'] = 'field_pf_first_nid';
  $handler->display->display_options['relationships']['uid_1']['label'] = 'Author of Person';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published or admin */
  $handler->display->display_options['filters']['status_extra']['id'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['table'] = 'node';
  $handler->display->display_options['filters']['status_extra']['field'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'admin_form' => 'admin_form',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: User: Current */
  $handler->display->display_options['filters']['uid_current']['id'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['table'] = 'users';
  $handler->display->display_options['filters']['uid_current']['field'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['relationship'] = 'uid';
  $handler->display->display_options['filters']['uid_current']['value'] = '1';
  $handler->display->display_options['filters']['uid_current']['group'] = 2;
  /* Filter criterion: User: Current */
  $handler->display->display_options['filters']['uid_current_1']['id'] = 'uid_current_1';
  $handler->display->display_options['filters']['uid_current_1']['table'] = 'users';
  $handler->display->display_options['filters']['uid_current_1']['field'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current_1']['relationship'] = 'field_editors_uid';
  $handler->display->display_options['filters']['uid_current_1']['value'] = '1';
  $handler->display->display_options['filters']['uid_current_1']['group'] = 2;
  /* Filter criterion: User: Current */
  $handler->display->display_options['filters']['uid_current_3']['id'] = 'uid_current_3';
  $handler->display->display_options['filters']['uid_current_3']['table'] = 'users';
  $handler->display->display_options['filters']['uid_current_3']['field'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current_3']['relationship'] = 'uid_1';
  $handler->display->display_options['filters']['uid_current_3']['value'] = '1';
  $handler->display->display_options['filters']['uid_current_3']['group'] = 2;
  $handler->display->display_options['path'] = 'data/admin';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Admin Forms';
  $handler->display->display_options['menu']['weight'] = '3';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'tab';
  $handler->display->display_options['tab_options']['title'] = 'Parishes';
  $handler->display->display_options['tab_options']['weight'] = '0';
  $export['my_data'] = $view;

  return $export;
}
