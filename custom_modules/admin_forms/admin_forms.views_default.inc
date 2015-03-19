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
  $handler->display->display_options['title'] = 'Admin Forms';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access people listing';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: I hereby certify that this form is now complete. */
  $handler->display->display_options['fields']['field_admin_form_certification']['id'] = 'field_admin_form_certification';
  $handler->display->display_options['fields']['field_admin_form_certification']['table'] = 'field_data_field_admin_form_certification';
  $handler->display->display_options['fields']['field_admin_form_certification']['field'] = 'field_admin_form_certification';
  $handler->display->display_options['fields']['field_admin_form_certification']['label'] = 'Completion';
  $handler->display->display_options['fields']['field_admin_form_certification']['empty'] = 'Incomplete';
  $handler->display->display_options['fields']['field_admin_form_certification']['hide_alter_empty'] = FALSE;
  /* Sort criterion: Content: Year (field_admin_form_year) */
  $handler->display->display_options['sorts']['field_admin_form_year_value']['id'] = 'field_admin_form_year_value';
  $handler->display->display_options['sorts']['field_admin_form_year_value']['table'] = 'field_data_field_admin_form_year';
  $handler->display->display_options['sorts']['field_admin_form_year_value']['field'] = 'field_admin_form_year_value';
  $handler->display->display_options['sorts']['field_admin_form_year_value']['order'] = 'DESC';
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

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'staff/admin-forms';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Admin Forms';
  $handler->display->display_options['menu']['weight'] = '20';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['admin_forms'] = $view;

  return $export;
}
