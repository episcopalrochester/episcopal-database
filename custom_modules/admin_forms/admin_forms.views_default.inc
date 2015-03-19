<?php
/**
 * @file
 * admin_forms.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function admin_forms_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'admin_forms';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Admin Forms';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Admin Forms - Leadership';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access people listing';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: I hereby certify that this form is now complete. */
  $handler->display->display_options['fields']['field_admin_form_certification']['id'] = 'field_admin_form_certification';
  $handler->display->display_options['fields']['field_admin_form_certification']['table'] = 'field_data_field_admin_form_certification';
  $handler->display->display_options['fields']['field_admin_form_certification']['field'] = 'field_admin_form_certification';
  $handler->display->display_options['fields']['field_admin_form_certification']['label'] = '';
  $handler->display->display_options['fields']['field_admin_form_certification']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_admin_form_certification']['empty'] = 'Incomplete';
  $handler->display->display_options['fields']['field_admin_form_certification']['hide_alter_empty'] = FALSE;
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Last Saved';
  $handler->display->display_options['fields']['changed']['date_format'] = 'short';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
  /* Field: Content: Wardens */
  $handler->display->display_options['fields']['field_admin_form_wardens']['id'] = 'field_admin_form_wardens';
  $handler->display->display_options['fields']['field_admin_form_wardens']['table'] = 'field_data_field_admin_form_wardens';
  $handler->display->display_options['fields']['field_admin_form_wardens']['field'] = 'field_admin_form_wardens';
  $handler->display->display_options['fields']['field_admin_form_wardens']['label'] = '';
  $handler->display->display_options['fields']['field_admin_form_wardens']['element_label_colon'] = FALSE;
  /* Field: Content: Finance Ministry */
  $handler->display->display_options['fields']['field_finance_ministry']['id'] = 'field_finance_ministry';
  $handler->display->display_options['fields']['field_finance_ministry']['table'] = 'field_data_field_finance_ministry';
  $handler->display->display_options['fields']['field_finance_ministry']['field'] = 'field_finance_ministry';
  $handler->display->display_options['fields']['field_finance_ministry']['label'] = '';
  $handler->display->display_options['fields']['field_finance_ministry']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'admin_form' => 'admin_form',
  );
  /* Filter criterion: Content: I hereby certify that this form is now complete. (field_admin_form_certification) */
  $handler->display->display_options['filters']['field_admin_form_certification_value']['id'] = 'field_admin_form_certification_value';
  $handler->display->display_options['filters']['field_admin_form_certification_value']['table'] = 'field_data_field_admin_form_certification';
  $handler->display->display_options['filters']['field_admin_form_certification_value']['field'] = 'field_admin_form_certification_value';
  $handler->display->display_options['filters']['field_admin_form_certification_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_admin_form_certification_value']['expose']['operator_id'] = 'field_admin_form_certification_value_op';
  $handler->display->display_options['filters']['field_admin_form_certification_value']['expose']['label'] = 'Completion';
  $handler->display->display_options['filters']['field_admin_form_certification_value']['expose']['operator'] = 'field_admin_form_certification_value_op';
  $handler->display->display_options['filters']['field_admin_form_certification_value']['expose']['identifier'] = 'field_admin_form_certification_value';
  $handler->display->display_options['filters']['field_admin_form_certification_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    9 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
  );
  /* Filter criterion: Content: Year (field_admin_form_year) */
  $handler->display->display_options['filters']['field_admin_form_year_value']['id'] = 'field_admin_form_year_value';
  $handler->display->display_options['filters']['field_admin_form_year_value']['table'] = 'field_data_field_admin_form_year';
  $handler->display->display_options['filters']['field_admin_form_year_value']['field'] = 'field_admin_form_year_value';
  $handler->display->display_options['filters']['field_admin_form_year_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_admin_form_year_value']['expose']['operator_id'] = 'field_admin_form_year_value_op';
  $handler->display->display_options['filters']['field_admin_form_year_value']['expose']['label'] = 'Year';
  $handler->display->display_options['filters']['field_admin_form_year_value']['expose']['operator'] = 'field_admin_form_year_value_op';
  $handler->display->display_options['filters']['field_admin_form_year_value']['expose']['identifier'] = 'field_admin_form_year_value';
  $handler->display->display_options['filters']['field_admin_form_year_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    9 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
  );
  /* Filter criterion: Content: Updated date */
  $handler->display->display_options['filters']['changed']['id'] = 'changed';
  $handler->display->display_options['filters']['changed']['table'] = 'node';
  $handler->display->display_options['filters']['changed']['field'] = 'changed';
  $handler->display->display_options['filters']['changed']['operator'] = '>';
  $handler->display->display_options['filters']['changed']['value']['value'] = '2015-02-06';
  $handler->display->display_options['filters']['changed']['exposed'] = TRUE;
  $handler->display->display_options['filters']['changed']['expose']['operator_id'] = 'changed_op';
  $handler->display->display_options['filters']['changed']['expose']['label'] = 'Modified after';
  $handler->display->display_options['filters']['changed']['expose']['operator'] = 'changed_op';
  $handler->display->display_options['filters']['changed']['expose']['identifier'] = 'changed';
  $handler->display->display_options['filters']['changed']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    9 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_admin_form_certification' => 'field_admin_form_certification',
    'changed' => 'changed',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_admin_form_certification' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'changed' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: I hereby certify that this form is now complete. */
  $handler->display->display_options['fields']['field_admin_form_certification']['id'] = 'field_admin_form_certification';
  $handler->display->display_options['fields']['field_admin_form_certification']['table'] = 'field_data_field_admin_form_certification';
  $handler->display->display_options['fields']['field_admin_form_certification']['field'] = 'field_admin_form_certification';
  $handler->display->display_options['fields']['field_admin_form_certification']['label'] = 'Status';
  $handler->display->display_options['fields']['field_admin_form_certification']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_admin_form_certification']['empty'] = 'Incomplete';
  $handler->display->display_options['fields']['field_admin_form_certification']['hide_alter_empty'] = FALSE;
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Last Saved';
  $handler->display->display_options['fields']['changed']['date_format'] = 'short';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'admin_form' => 'admin_form',
  );
  /* Filter criterion: Content: I hereby certify that this form is now complete. (field_admin_form_certification) */
  $handler->display->display_options['filters']['field_admin_form_certification_value']['id'] = 'field_admin_form_certification_value';
  $handler->display->display_options['filters']['field_admin_form_certification_value']['table'] = 'field_data_field_admin_form_certification';
  $handler->display->display_options['filters']['field_admin_form_certification_value']['field'] = 'field_admin_form_certification_value';
  $handler->display->display_options['filters']['field_admin_form_certification_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_admin_form_certification_value']['expose']['operator_id'] = 'field_admin_form_certification_value_op';
  $handler->display->display_options['filters']['field_admin_form_certification_value']['expose']['label'] = 'Completion';
  $handler->display->display_options['filters']['field_admin_form_certification_value']['expose']['operator'] = 'field_admin_form_certification_value_op';
  $handler->display->display_options['filters']['field_admin_form_certification_value']['expose']['identifier'] = 'field_admin_form_certification_value';
  $handler->display->display_options['filters']['field_admin_form_certification_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    9 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
  );
  /* Filter criterion: Content: Year (field_admin_form_year) */
  $handler->display->display_options['filters']['field_admin_form_year_value']['id'] = 'field_admin_form_year_value';
  $handler->display->display_options['filters']['field_admin_form_year_value']['table'] = 'field_data_field_admin_form_year';
  $handler->display->display_options['filters']['field_admin_form_year_value']['field'] = 'field_admin_form_year_value';
  $handler->display->display_options['filters']['field_admin_form_year_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_admin_form_year_value']['expose']['operator_id'] = 'field_admin_form_year_value_op';
  $handler->display->display_options['filters']['field_admin_form_year_value']['expose']['label'] = 'Year';
  $handler->display->display_options['filters']['field_admin_form_year_value']['expose']['operator'] = 'field_admin_form_year_value_op';
  $handler->display->display_options['filters']['field_admin_form_year_value']['expose']['identifier'] = 'field_admin_form_year_value';
  $handler->display->display_options['filters']['field_admin_form_year_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    9 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
  );
  $handler->display->display_options['path'] = 'staff/admin-forms';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Admin Forms';
  $handler->display->display_options['menu']['weight'] = '20';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'staff/admin-forms/leadership';
  $export['admin_forms'] = $view;

  return $export;
}
