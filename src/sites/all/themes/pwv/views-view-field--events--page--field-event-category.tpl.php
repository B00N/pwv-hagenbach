<?php
$tmp_field = '_field_data';
$term_class = '';
if (isset($row->{$tmp_field}['nid']['entity']->field_event_category[LANGUAGE_NONE])) {
  $term = $row->{$tmp_field}['nid']['entity']->field_event_category[LANGUAGE_NONE];
  if (!empty($term)) {
    foreach ($term as $t) {
      if ($term_class == '') {
        $term_class .= 'edit-field-event-category-tid-' . $t['tid'];
      } else {
        $term_class .= ' edit-field-event-category-tid-' . $t['tid'];
      }
    }
  }
}
?>
<?php print '<div class="term-class">' . $term_class . '</div>'; ?>