<?php
/**
 * @file
 * club_board.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function club_board_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function club_board_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function club_board_image_default_styles() {
  $styles = array();

  // Exported image style: boardmember.
  $styles['boardmember'] = array(
    'name' => 'boardmember',
    'label' => 'boardmember',
    'effects' => array(
      10 => array(
        'label' => 'Skalierung',
        'help' => 'Eine Skalierung behält das Seitenverhältnis des Originalbildes bei. Sofern nur eine Seitenlänge angegeben ist, wird die andere berechnet.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 150,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function club_board_node_info() {
  $items = array(
    'boardmember' => array(
      'name' => t('Vorstandsmitglied'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Vorname Nachname'),
      'help' => '',
    ),
  );
  return $items;
}
