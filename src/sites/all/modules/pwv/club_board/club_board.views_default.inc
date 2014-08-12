<?php
/**
 * @file
 * club_board.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function club_board_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'boardmembers';
  $view->description = '';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = 'Vorstand';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Standards */
  $handler = $view->new_display('default', 'Standards', 'default');
  $handler->display->display_options['title'] = 'Vorstand';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mehr';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Übernehmen';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Zurücksetzen';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortieren nach';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Aufsteigend';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Absteigend';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['style_options']['columns'] = '2';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Feld: Inhalt: Funktion */
  $handler->display->display_options['fields']['entity_id_1']['id'] = 'entity_id_1';
  $handler->display->display_options['fields']['entity_id_1']['table'] = 'field_data_field_boardfunction';
  $handler->display->display_options['fields']['entity_id_1']['field'] = 'field_boardfunction';
  $handler->display->display_options['fields']['entity_id_1']['label'] = '';
  $handler->display->display_options['fields']['entity_id_1']['element_type'] = 'strong';
  /* Feld: Inhalt: Vorname */
  $handler->display->display_options['fields']['entity_id']['id'] = 'entity_id';
  $handler->display->display_options['fields']['entity_id']['table'] = 'field_data_field_firstname';
  $handler->display->display_options['fields']['entity_id']['field'] = 'field_firstname';
  $handler->display->display_options['fields']['entity_id']['label'] = '';
  /* Feld: Inhalt: Nachname */
  $handler->display->display_options['fields']['entity_id_4']['id'] = 'entity_id_4';
  $handler->display->display_options['fields']['entity_id_4']['table'] = 'field_data_field_lastname';
  $handler->display->display_options['fields']['entity_id_4']['field'] = 'field_lastname';
  $handler->display->display_options['fields']['entity_id_4']['label'] = '';
  /* Feld: Inhalt: PLZ */
  $handler->display->display_options['fields']['entity_id_6']['id'] = 'entity_id_6';
  $handler->display->display_options['fields']['entity_id_6']['table'] = 'field_data_field_zipcode';
  $handler->display->display_options['fields']['entity_id_6']['field'] = 'field_zipcode';
  $handler->display->display_options['fields']['entity_id_6']['label'] = '';
  $handler->display->display_options['fields']['entity_id_6']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Feld: Inhalt: Ort */
  $handler->display->display_options['fields']['entity_id_2']['id'] = 'entity_id_2';
  $handler->display->display_options['fields']['entity_id_2']['table'] = 'field_data_field_city';
  $handler->display->display_options['fields']['entity_id_2']['field'] = 'field_city';
  $handler->display->display_options['fields']['entity_id_2']['label'] = '';
  /* Feld: Inhalt: Straße */
  $handler->display->display_options['fields']['entity_id_5']['id'] = 'entity_id_5';
  $handler->display->display_options['fields']['entity_id_5']['table'] = 'field_data_field_street';
  $handler->display->display_options['fields']['entity_id_5']['field'] = 'field_street';
  $handler->display->display_options['fields']['entity_id_5']['label'] = '';
  /* Feld: Inhalt: Telefon */
  $handler->display->display_options['fields']['entity_id_3']['id'] = 'entity_id_3';
  $handler->display->display_options['fields']['entity_id_3']['table'] = 'field_data_field_phone';
  $handler->display->display_options['fields']['entity_id_3']['field'] = 'field_phone';
  $handler->display->display_options['fields']['entity_id_3']['label'] = '';
  /* Feld: Inhalt: E-Mail */
  $handler->display->display_options['fields']['entity_id_7']['id'] = 'entity_id_7';
  $handler->display->display_options['fields']['entity_id_7']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['entity_id_7']['field'] = 'field_email';
  $handler->display->display_options['fields']['entity_id_7']['label'] = '';
  /* Feld: Inhalt: Bild */
  $handler->display->display_options['fields']['entity_id_8']['id'] = 'entity_id_8';
  $handler->display->display_options['fields']['entity_id_8']['table'] = 'field_data_field_pic';
  $handler->display->display_options['fields']['entity_id_8']['field'] = 'field_pic';
  $handler->display->display_options['fields']['entity_id_8']['label'] = '';
  $handler->display->display_options['fields']['entity_id_8']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['entity_id_8']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['entity_id_8']['group_column'] = 'fid';
  /* Sortierkriterien: Inhalt: Kategorie (field_category) */
  $handler->display->display_options['sorts']['field_category_value']['id'] = 'field_category_value';
  $handler->display->display_options['sorts']['field_category_value']['table'] = 'field_data_field_category';
  $handler->display->display_options['sorts']['field_category_value']['field'] = 'field_category_value';
  /* Sortierkriterien: Inhalt: Position in Liste (field_position_in_liste) */
  $handler->display->display_options['sorts']['field_position_in_liste_value']['id'] = 'field_position_in_liste_value';
  $handler->display->display_options['sorts']['field_position_in_liste_value']['table'] = 'field_data_field_position_in_liste';
  $handler->display->display_options['sorts']['field_position_in_liste_value']['field'] = 'field_position_in_liste_value';
  /* Filterkriterium: Inhalt: Typ */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'boardmember' => 'boardmember',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filterkriterium: Inhalt: Veröffentlicht */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;

  /* Display: Vorstand (Kernteam) */
  $handler = $view->new_display('page', 'Vorstand (Kernteam)', 'board_page_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['style_options']['columns'] = '2';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'entity_id_9' => 'entity_id_9',
    'entity_id' => 'entity_id',
    'entity_id_4' => 'entity_id_4',
    'entity_id_6' => 'entity_id_6',
    'entity_id_2' => 'entity_id_2',
  );
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Fußbereich: Global: Ansichtsbereich */
  $handler->display->display_options['footer']['view']['id'] = 'view';
  $handler->display->display_options['footer']['view']['table'] = 'views';
  $handler->display->display_options['footer']['view']['field'] = 'view';
  $handler->display->display_options['footer']['view']['label'] = 'Beisitzer';
  $handler->display->display_options['footer']['view']['view_to_insert'] = 'boardmembers:attachment_1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Feld: Inhalt: Funktion */
  $handler->display->display_options['fields']['entity_id_1']['id'] = 'entity_id_1';
  $handler->display->display_options['fields']['entity_id_1']['table'] = 'field_data_field_boardfunction';
  $handler->display->display_options['fields']['entity_id_1']['field'] = 'field_boardfunction';
  $handler->display->display_options['fields']['entity_id_1']['label'] = '';
  $handler->display->display_options['fields']['entity_id_1']['element_type'] = 'h3';
  $handler->display->display_options['fields']['entity_id_1']['element_label_colon'] = FALSE;
  /* Feld: Global: Benutzerdefinierter Text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="board-wrapper"><div class="board-wrapper-image">';
  $handler->display->display_options['fields']['nothing']['element_type'] = '0';
  $handler->display->display_options['fields']['nothing']['element_label_type'] = '0';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Feld: Inhalt: Bild */
  $handler->display->display_options['fields']['entity_id_8']['id'] = 'entity_id_8';
  $handler->display->display_options['fields']['entity_id_8']['table'] = 'field_data_field_pic';
  $handler->display->display_options['fields']['entity_id_8']['field'] = 'field_pic';
  $handler->display->display_options['fields']['entity_id_8']['label'] = '';
  $handler->display->display_options['fields']['entity_id_8']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['entity_id_8']['settings'] = array(
    'image_style' => 'boardmember',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['entity_id_8']['group_column'] = 'fid';
  /* Feld: Global: Benutzerdefinierter Text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '</div><div class="board-wrapper-info">';
  $handler->display->display_options['fields']['nothing_1']['element_type'] = '0';
  $handler->display->display_options['fields']['nothing_1']['element_label_type'] = '0';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_1']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['nothing_1']['element_default_classes'] = FALSE;
  /* Feld: Inhalt: Titel */
  $handler->display->display_options['fields']['entity_id_9']['id'] = 'entity_id_9';
  $handler->display->display_options['fields']['entity_id_9']['table'] = 'field_data_field_salutation';
  $handler->display->display_options['fields']['entity_id_9']['field'] = 'field_salutation';
  $handler->display->display_options['fields']['entity_id_9']['label'] = '';
  $handler->display->display_options['fields']['entity_id_9']['element_type'] = 'strong';
  $handler->display->display_options['fields']['entity_id_9']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['entity_id_9']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['entity_id_9']['element_default_classes'] = FALSE;
  /* Feld: Inhalt: Vorname */
  $handler->display->display_options['fields']['entity_id']['id'] = 'entity_id';
  $handler->display->display_options['fields']['entity_id']['table'] = 'field_data_field_firstname';
  $handler->display->display_options['fields']['entity_id']['field'] = 'field_firstname';
  $handler->display->display_options['fields']['entity_id']['label'] = '';
  $handler->display->display_options['fields']['entity_id']['element_type'] = 'strong';
  $handler->display->display_options['fields']['entity_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['entity_id']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['entity_id']['element_default_classes'] = FALSE;
  /* Feld: Inhalt: Nachname */
  $handler->display->display_options['fields']['entity_id_4']['id'] = 'entity_id_4';
  $handler->display->display_options['fields']['entity_id_4']['table'] = 'field_data_field_lastname';
  $handler->display->display_options['fields']['entity_id_4']['field'] = 'field_lastname';
  $handler->display->display_options['fields']['entity_id_4']['label'] = '';
  $handler->display->display_options['fields']['entity_id_4']['element_type'] = 'strong';
  $handler->display->display_options['fields']['entity_id_4']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['entity_id_4']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['entity_id_4']['element_default_classes'] = FALSE;
  /* Feld: Inhalt: PLZ */
  $handler->display->display_options['fields']['entity_id_6']['id'] = 'entity_id_6';
  $handler->display->display_options['fields']['entity_id_6']['table'] = 'field_data_field_zipcode';
  $handler->display->display_options['fields']['entity_id_6']['field'] = 'field_zipcode';
  $handler->display->display_options['fields']['entity_id_6']['label'] = '';
  $handler->display->display_options['fields']['entity_id_6']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['entity_id_6']['alter']['text'] = '<br />[entity_id_6]';
  $handler->display->display_options['fields']['entity_id_6']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Feld: Inhalt: Ort */
  $handler->display->display_options['fields']['entity_id_2']['id'] = 'entity_id_2';
  $handler->display->display_options['fields']['entity_id_2']['table'] = 'field_data_field_city';
  $handler->display->display_options['fields']['entity_id_2']['field'] = 'field_city';
  $handler->display->display_options['fields']['entity_id_2']['label'] = '';
  /* Feld: Inhalt: Straße */
  $handler->display->display_options['fields']['entity_id_5']['id'] = 'entity_id_5';
  $handler->display->display_options['fields']['entity_id_5']['table'] = 'field_data_field_street';
  $handler->display->display_options['fields']['entity_id_5']['field'] = 'field_street';
  $handler->display->display_options['fields']['entity_id_5']['label'] = '';
  /* Feld: Inhalt: Telefon */
  $handler->display->display_options['fields']['entity_id_3']['id'] = 'entity_id_3';
  $handler->display->display_options['fields']['entity_id_3']['table'] = 'field_data_field_phone';
  $handler->display->display_options['fields']['entity_id_3']['field'] = 'field_phone';
  $handler->display->display_options['fields']['entity_id_3']['label'] = '';
  /* Feld: Inhalt: E-Mail */
  $handler->display->display_options['fields']['entity_id_7']['id'] = 'entity_id_7';
  $handler->display->display_options['fields']['entity_id_7']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['entity_id_7']['field'] = 'field_email';
  $handler->display->display_options['fields']['entity_id_7']['label'] = '';
  $handler->display->display_options['fields']['entity_id_7']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['entity_id_7']['alter']['path'] = 'mailto:[entity_id_7]';
  /* Feld: Inhalt: ‚Bearbeiten‘-Link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  /* Feld: Global: Benutzerdefinierter Text */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['label'] = '';
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = '</div></div>';
  $handler->display->display_options['fields']['nothing_2']['element_type'] = '0';
  $handler->display->display_options['fields']['nothing_2']['element_label_type'] = '0';
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_2']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['nothing_2']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterium: Inhalt: Typ */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'boardmember' => 'boardmember',
  );
  $handler->display->display_options['filters']['type']['group'] = '0';
  /* Filterkriterium: Inhalt: Veröffentlicht */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = '0';
  /* Filterkriterium: Inhalt: Kategorie (field_category) */
  $handler->display->display_options['filters']['field_category_value']['id'] = 'field_category_value';
  $handler->display->display_options['filters']['field_category_value']['table'] = 'field_data_field_category';
  $handler->display->display_options['filters']['field_category_value']['field'] = 'field_category_value';
  $handler->display->display_options['filters']['field_category_value']['value'] = array(
    'core' => 'core',
  );
  $handler->display->display_options['path'] = 'vorstand';
  $handler->display->display_options['menu']['type'] = 'default tab';
  $handler->display->display_options['menu']['title'] = 'Anzeigen';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Vorstand';
  $handler->display->display_options['tab_options']['weight'] = '0';
  $handler->display->display_options['tab_options']['name'] = 'main-menu';

  /* Display: Anhang (Beisitzer) */
  $handler = $view->new_display('attachment', 'Anhang (Beisitzer)', 'attachment_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Kopfbereich: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['label'] = 'Überschrift Beisitzer';
  $handler->display->display_options['header']['area_text_custom']['content'] = '<h2>Beisitzer</h2>';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Feld: Inhalt: Bild */
  $handler->display->display_options['fields']['entity_id_8']['id'] = 'entity_id_8';
  $handler->display->display_options['fields']['entity_id_8']['table'] = 'field_data_field_pic';
  $handler->display->display_options['fields']['entity_id_8']['field'] = 'field_pic';
  $handler->display->display_options['fields']['entity_id_8']['label'] = '';
  $handler->display->display_options['fields']['entity_id_8']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['entity_id_8']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['entity_id_8']['settings'] = array(
    'image_style' => 'boardmember',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['entity_id_8']['group_column'] = 'fid';
  /* Feld: Inhalt: Vorname */
  $handler->display->display_options['fields']['entity_id']['id'] = 'entity_id';
  $handler->display->display_options['fields']['entity_id']['table'] = 'field_data_field_firstname';
  $handler->display->display_options['fields']['entity_id']['field'] = 'field_firstname';
  $handler->display->display_options['fields']['entity_id']['label'] = '';
  $handler->display->display_options['fields']['entity_id']['element_type'] = 'strong';
  $handler->display->display_options['fields']['entity_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['entity_id']['element_wrapper_type'] = '0';
  /* Feld: Inhalt: Nachname */
  $handler->display->display_options['fields']['entity_id_4']['id'] = 'entity_id_4';
  $handler->display->display_options['fields']['entity_id_4']['table'] = 'field_data_field_lastname';
  $handler->display->display_options['fields']['entity_id_4']['field'] = 'field_lastname';
  $handler->display->display_options['fields']['entity_id_4']['label'] = '';
  $handler->display->display_options['fields']['entity_id_4']['element_type'] = 'strong';
  $handler->display->display_options['fields']['entity_id_4']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['entity_id_4']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['entity_id_4']['element_default_classes'] = FALSE;
  /* Feld: Inhalt: ‚Bearbeiten‘-Link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Bearbeiten';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterium: Inhalt: Typ */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'boardmember' => 'boardmember',
  );
  $handler->display->display_options['filters']['type']['group'] = '0';
  /* Filterkriterium: Inhalt: Veröffentlicht */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = '0';
  /* Filterkriterium: Inhalt: Kategorie (field_category) */
  $handler->display->display_options['filters']['field_category_value']['id'] = 'field_category_value';
  $handler->display->display_options['filters']['field_category_value']['table'] = 'field_data_field_category';
  $handler->display->display_options['filters']['field_category_value']['field'] = 'field_category_value';
  $handler->display->display_options['filters']['field_category_value']['value'] = array(
    'assessor' => 'assessor',
  );
  $translatables['boardmembers'] = array(
    t('Standards'),
    t('Vorstand'),
    t('mehr'),
    t('Übernehmen'),
    t('Zurücksetzen'),
    t('Sortieren nach'),
    t('Aufsteigend'),
    t('Absteigend'),
    t('Vorstand (Kernteam)'),
    t('Beisitzer'),
    t('<div class="board-wrapper"><div class="board-wrapper-image">'),
    t('</div><div class="board-wrapper-info">'),
    t('<br />[entity_id_6]'),
    t('</div></div>'),
    t('Anhang (Beisitzer)'),
    t('Überschrift Beisitzer'),
    t('<h2>Beisitzer</h2>'),
    t('Bearbeiten'),
  );
  $export['boardmembers'] = $view;

  return $export;
}
