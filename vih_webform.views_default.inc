<?php
/**
 * @file
 * vih_webform.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function vih_webform_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'webforms';
  $view->description = '';
  $view->tag = 'VIH';
  $view->base_table = 'node';
  $view->human_name = 'VIH Webforms';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'edit own webform content';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elementer pr. side';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Navn';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Webform: Webform submission count */
  $handler->display->display_options['fields']['webform_submission_count_node']['id'] = 'webform_submission_count_node';
  $handler->display->display_options['fields']['webform_submission_count_node']['table'] = 'node';
  $handler->display->display_options['fields']['webform_submission_count_node']['field'] = 'webform_submission_count_node';
  $handler->display->display_options['fields']['webform_submission_count_node']['label'] = 'Antal';
  /* Field: Content: Category */
  $handler->display->display_options['fields']['field_webform_category']['id'] = 'field_webform_category';
  $handler->display->display_options['fields']['field_webform_category']['table'] = 'field_data_field_webform_category';
  $handler->display->display_options['fields']['field_webform_category']['field'] = 'field_webform_category';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'E-mails';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'node/[nid]/webform/emails';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = 'Tabel';
  $handler->display->display_options['fields']['nothing_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['path'] = 'node/[nid]/webform-results/table';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Field: Webform: Webform edit link */
  $handler->display->display_options['fields']['webform_edit']['id'] = 'webform_edit';
  $handler->display->display_options['fields']['webform_edit']['table'] = 'node';
  $handler->display->display_options['fields']['webform_edit']['field'] = 'webform_edit';
  $handler->display->display_options['fields']['webform_edit']['label'] = '';
  $handler->display->display_options['fields']['webform_edit']['element_label_colon'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = '';
  $handler->display->display_options['fields']['delete_node']['element_label_colon'] = FALSE;
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
    'webform' => 'webform',
  );
  /* Filter criterion: Content: Category (field_webform_category) */
  $handler->display->display_options['filters']['field_webform_category_tid']['id'] = 'field_webform_category_tid';
  $handler->display->display_options['filters']['field_webform_category_tid']['table'] = 'field_data_field_webform_category';
  $handler->display->display_options['filters']['field_webform_category_tid']['field'] = 'field_webform_category_tid';
  $handler->display->display_options['filters']['field_webform_category_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_webform_category_tid']['expose']['operator_id'] = 'field_webform_category_tid_op';
  $handler->display->display_options['filters']['field_webform_category_tid']['expose']['label'] = 'Kategori (field_webform_category)';
  $handler->display->display_options['filters']['field_webform_category_tid']['expose']['operator'] = 'field_webform_category_tid_op';
  $handler->display->display_options['filters']['field_webform_category_tid']['expose']['identifier'] = 'field_webform_category_tid';
  $handler->display->display_options['filters']['field_webform_category_tid']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_webform_category_tid']['vocabulary'] = 'webform_category';

  /* Display: Admin Page */
  $handler = $view->new_display('page', 'Admin Page', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Webformularer';
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
    'webform' => 'webform',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Category (field_webform_category) */
  $handler->display->display_options['filters']['field_webform_category_tid_1']['id'] = 'field_webform_category_tid_1';
  $handler->display->display_options['filters']['field_webform_category_tid_1']['table'] = 'field_data_field_webform_category';
  $handler->display->display_options['filters']['field_webform_category_tid_1']['field'] = 'field_webform_category_tid';
  $handler->display->display_options['filters']['field_webform_category_tid_1']['group'] = 1;
  $handler->display->display_options['filters']['field_webform_category_tid_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_webform_category_tid_1']['expose']['operator_id'] = 'field_webform_category_tid_1_op';
  $handler->display->display_options['filters']['field_webform_category_tid_1']['expose']['label'] = 'Category';
  $handler->display->display_options['filters']['field_webform_category_tid_1']['expose']['operator'] = 'field_webform_category_tid_1_op';
  $handler->display->display_options['filters']['field_webform_category_tid_1']['expose']['identifier'] = 'field_webform_category_tid_1';
  $handler->display->display_options['filters']['field_webform_category_tid_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    6 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_webform_category_tid_1']['type'] = 'select';
  $handler->display->display_options['filters']['field_webform_category_tid_1']['vocabulary'] = 'webform_category';
  $handler->display->display_options['path'] = 'admin/dashboard/webforms';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Webformularer';
  $handler->display->display_options['menu']['weight'] = '100';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $translatables['webforms'] = array(
    t('Master'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Elementer pr. side'),
    t('- Alle -'),
    t('Forskydning'),
    t('« første'),
    t('‹ forrige'),
    t('næste ›'),
    t('sidste »'),
    t('Navn'),
    t('Antal'),
    t('Category'),
    t('E-mails'),
    t('Tabel'),
    t('Kategori (field_webform_category)'),
    t('Admin Page'),
    t('Webformularer'),
    t('more'),
  );
  $export['webforms'] = $view;

  return $export;
}
