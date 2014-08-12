<?php
/**
 * @file
 * club_board.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function club_board_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contactdata|node|boardmember|form';
  $field_group->group_name = 'group_contactdata';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'boardmember';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Kontaktdaten',
    'weight' => '4',
    'children' => array(
      0 => 'field_city',
      1 => 'field_email',
      2 => 'field_firstname',
      3 => 'field_lastname',
      4 => 'field_phone',
      5 => 'field_pic',
      6 => 'field_salutation',
      7 => 'field_street',
      8 => 'field_zipcode',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-contactdata field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_contactdata|node|boardmember|form'] = $field_group;

  return $export;
}
