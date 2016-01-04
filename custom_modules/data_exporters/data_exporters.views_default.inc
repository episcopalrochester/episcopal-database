<?php
/**
 * @file
 * data_exporters.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function data_exporters_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'parish_feed';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Parish Feed';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Parish Feed';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'name';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Address (Line 1) */
  $handler->display->display_options['fields']['field_parish_home_1']['id'] = 'field_parish_home_1';
  $handler->display->display_options['fields']['field_parish_home_1']['table'] = 'field_data_field_parish_home_1';
  $handler->display->display_options['fields']['field_parish_home_1']['field'] = 'field_parish_home_1';
  $handler->display->display_options['fields']['field_parish_home_1']['label'] = 'address';
  /* Field: Content: City */
  $handler->display->display_options['fields']['field_parish_home_city']['id'] = 'field_parish_home_city';
  $handler->display->display_options['fields']['field_parish_home_city']['table'] = 'field_data_field_parish_home_city';
  $handler->display->display_options['fields']['field_parish_home_city']['field'] = 'field_parish_home_city';
  $handler->display->display_options['fields']['field_parish_home_city']['label'] = 'city';
  /* Field: Content: State/Province */
  $handler->display->display_options['fields']['field_parish_home_state']['id'] = 'field_parish_home_state';
  $handler->display->display_options['fields']['field_parish_home_state']['table'] = 'field_data_field_parish_home_state';
  $handler->display->display_options['fields']['field_parish_home_state']['field'] = 'field_parish_home_state';
  $handler->display->display_options['fields']['field_parish_home_state']['label'] = 'state';
  /* Field: Content: ZIP/Postal Code */
  $handler->display->display_options['fields']['field_parish_home_postal']['id'] = 'field_parish_home_postal';
  $handler->display->display_options['fields']['field_parish_home_postal']['table'] = 'field_data_field_parish_home_postal';
  $handler->display->display_options['fields']['field_parish_home_postal']['field'] = 'field_parish_home_postal';
  $handler->display->display_options['fields']['field_parish_home_postal']['label'] = 'zip';
  /* Field: Content: Node UUID */
  $handler->display->display_options['fields']['uuid']['id'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['table'] = 'node';
  $handler->display->display_options['fields']['uuid']['field'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['label'] = 'uuid';
  /* Field: Content: Office Email */
  $handler->display->display_options['fields']['field_parish_email']['id'] = 'field_parish_email';
  $handler->display->display_options['fields']['field_parish_email']['table'] = 'field_data_field_parish_email';
  $handler->display->display_options['fields']['field_parish_email']['field'] = 'field_parish_email';
  $handler->display->display_options['fields']['field_parish_email']['label'] = 'email';
  /* Field: Content: Office Phone */
  $handler->display->display_options['fields']['field_parish_phone']['id'] = 'field_parish_phone';
  $handler->display->display_options['fields']['field_parish_phone']['table'] = 'field_data_field_parish_phone';
  $handler->display->display_options['fields']['field_parish_phone']['field'] = 'field_parish_phone';
  $handler->display->display_options['fields']['field_parish_phone']['label'] = 'phone';
  /* Field: Content: Website */
  $handler->display->display_options['fields']['field_parish_site']['id'] = 'field_parish_site';
  $handler->display->display_options['fields']['field_parish_site']['table'] = 'field_data_field_parish_site';
  $handler->display->display_options['fields']['field_parish_site']['field'] = 'field_parish_site';
  $handler->display->display_options['fields']['field_parish_site']['label'] = 'website';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'parish' => 'parish',
  );

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xml';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['filename'] = 'parishes.xml';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['transform'] = 1;
  $handler->display->display_options['style_options']['root_node'] = 'nodes';
  $handler->display->display_options['style_options']['item_node'] = 'node';
  $handler->display->display_options['path'] = 'parishes.xml';
  $export['parish_feed'] = $view;

  $view = new view();
  $view->name = 'prayer_feed';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Prayer Feed';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Prayer Feed';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'prayer';
  /* Field: Content: Prayer type */
  $handler->display->display_options['fields']['field_prayer_type']['id'] = 'field_prayer_type';
  $handler->display->display_options['fields']['field_prayer_type']['table'] = 'field_data_field_prayer_type';
  $handler->display->display_options['fields']['field_prayer_type']['field'] = 'field_prayer_type';
  $handler->display->display_options['fields']['field_prayer_type']['label'] = 'type';
  /* Field: Content: Node UUID */
  $handler->display->display_options['fields']['uuid']['id'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['table'] = 'node';
  $handler->display->display_options['fields']['uuid']['field'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['label'] = 'uuid';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'title';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Prayer Request';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
    3 => 'OR',
  );
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
    'prayer' => 'prayer',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Location (field_prayer_location) */
  $handler->display->display_options['filters']['field_prayer_location_value']['id'] = 'field_prayer_location_value';
  $handler->display->display_options['filters']['field_prayer_location_value']['table'] = 'field_data_field_prayer_location';
  $handler->display->display_options['filters']['field_prayer_location_value']['field'] = 'field_prayer_location_value';
  $handler->display->display_options['filters']['field_prayer_location_value']['value'] = array(
    'web' => 'web',
  );
  $handler->display->display_options['filters']['field_prayer_location_value']['group'] = 1;
  /* Filter criterion: Content: End Date (field_prayer_end) */
  $handler->display->display_options['filters']['field_prayer_end_value']['id'] = 'field_prayer_end_value';
  $handler->display->display_options['filters']['field_prayer_end_value']['table'] = 'field_data_field_prayer_end';
  $handler->display->display_options['filters']['field_prayer_end_value']['field'] = 'field_prayer_end_value';
  $handler->display->display_options['filters']['field_prayer_end_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_prayer_end_value']['group'] = 2;
  $handler->display->display_options['filters']['field_prayer_end_value']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['field_prayer_end_value']['default_date'] = 'now';
  $handler->display->display_options['filters']['field_prayer_end_value']['year_range'] = '-10:+10';
  /* Filter criterion: Content: End Date (field_prayer_end) */
  $handler->display->display_options['filters']['field_prayer_end_value_1']['id'] = 'field_prayer_end_value_1';
  $handler->display->display_options['filters']['field_prayer_end_value_1']['table'] = 'field_data_field_prayer_end';
  $handler->display->display_options['filters']['field_prayer_end_value_1']['field'] = 'field_prayer_end_value';
  $handler->display->display_options['filters']['field_prayer_end_value_1']['operator'] = 'empty';
  $handler->display->display_options['filters']['field_prayer_end_value_1']['group'] = 2;
  $handler->display->display_options['filters']['field_prayer_end_value_1']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['field_prayer_end_value_1']['year_range'] = '-10:+10';
  /* Filter criterion: Content: Start Date (field_prayer_start) */
  $handler->display->display_options['filters']['field_prayer_start_value']['id'] = 'field_prayer_start_value';
  $handler->display->display_options['filters']['field_prayer_start_value']['table'] = 'field_data_field_prayer_start';
  $handler->display->display_options['filters']['field_prayer_start_value']['field'] = 'field_prayer_start_value';
  $handler->display->display_options['filters']['field_prayer_start_value']['operator'] = '<=';
  $handler->display->display_options['filters']['field_prayer_start_value']['group'] = 3;
  $handler->display->display_options['filters']['field_prayer_start_value']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['field_prayer_start_value']['default_date'] = 'now';
  $handler->display->display_options['filters']['field_prayer_start_value']['year_range'] = '-10:+0';
  /* Filter criterion: Content: Start Date (field_prayer_start) */
  $handler->display->display_options['filters']['field_prayer_start_value_1']['id'] = 'field_prayer_start_value_1';
  $handler->display->display_options['filters']['field_prayer_start_value_1']['table'] = 'field_data_field_prayer_start';
  $handler->display->display_options['filters']['field_prayer_start_value_1']['field'] = 'field_prayer_start_value';
  $handler->display->display_options['filters']['field_prayer_start_value_1']['operator'] = 'empty';
  $handler->display->display_options['filters']['field_prayer_start_value_1']['group'] = 3;
  $handler->display->display_options['filters']['field_prayer_start_value_1']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['field_prayer_start_value_1']['year_range'] = '-10:+0';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xml';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['filename'] = 'parishes.xml';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['transform'] = 1;
  $handler->display->display_options['style_options']['root_node'] = 'nodes';
  $handler->display->display_options['style_options']['item_node'] = 'node';
  $handler->display->display_options['path'] = 'prayers.xml';
  $handler->display->display_options['sitename_title'] = 0;
  $export['prayer_feed'] = $view;

  return $export;
}
