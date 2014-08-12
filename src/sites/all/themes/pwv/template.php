<?php

function pwv_breadcrumb($variables) {
  $breadcrumb = $variables['breadcrumb'];

  if (!empty($breadcrumb)) {
    // Provide a navigational heading to give context for breadcrumb links to
    // screen-reader users. Make the heading invisible with .element-invisible.
    $output = '';
    if (arg(0) == 'node' && is_numeric(arg(1))) {
      $nid = arg(1);
      $node = node_load($nid);
      switch ($node->type) {
        case 'blog':

          $breadcrumb[] = l('Blog', 'blog');
          break;

        case 'portfolio':

          $breadcrumb[] = l('Portfolio', 'portfolio');
          break;
      }
    }
    $breadcrumb[] = drupal_get_title();

    $output .= '<div class="breadcrumb">' . implode(' » ', $breadcrumb) . '</div>';
    return $output;
  }
}

/**
 * Recursive helper function for menu_parent_options().
 */
function  pwv_menu_parents_recurse($tree, $menu_name, $indent, &$options, $exclude, $depth_limit) {
  foreach ($tree as $data) {
    if ($data['link']['depth'] > $depth_limit) {
      // Don't iterate through any links on this level.
      break;
    }
    if ($data['link']['mlid'] != $exclude && $data['link']['hidden'] >= 0) {
      $title = $indent . ' ' . truncate_utf8($data['link']['title'], 30, TRUE, FALSE);
      if ($data['link']['hidden']) {
        $title .= ' (' . t('disabled') . ')';
      }
      $menu_link = url($data['link']['link_path'], array('absolute' => true));
      $options[$menu_link] = $title;
      if ($data['below']) {
         pwv_menu_parents_recurse($data['below'], $menu_name, $indent . '--', $options, $exclude, $depth_limit);
      }
    }
  }
}

function  pwv_process_page(&$variables) {

  $options = array();
  $menu_name = 'main-menu';
  $title = t('Navigate to...');

  $tree = menu_tree_all_data($menu_name, NULL);
  //$options[''] = $title;
   pwv_menu_parents_recurse($tree, $menu_name, '', $options, 3, 3);

  if (!empty($options)) {
    $main_menu_select = array(
        '#type' => 'select',
        '#options' => $options,
        '#value' => url($_GET['q'], array('absolute' => TRUE)),
    );
  }

  $variables['main_menu_select'] = drupal_render($main_menu_select);

  if(empty($variables['page']['top_page'])) {
    $top_spacer = array(
      'top_spacer' => array(
        '#markup' => '<p>&nbsp;</p>',
        '#weight' => 1,
      )
    );
    $variables['page']['top_page'] = $top_spacer;
  }
}

function pwv_preprocess_field(&$variables, $hook) {
  if($variables['element']['#field_name'] == 'field_gallery_image') {
    $variables['label'] = t('Pictures');
    $variables['classes_array'][] = 'clearfix';
  }
}