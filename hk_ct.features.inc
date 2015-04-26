<?php
/**
 * @file
 * hk_ct.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function hk_ct_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "breakpoints" && $api == "default_breakpoint_group") {
    return array("version" => "1");
  }
  if ($module == "breakpoints" && $api == "default_breakpoints") {
    return array("version" => "1");
  }
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  if ($module == "feeds_tamper" && $api == "feeds_tamper_default") {
    return array("version" => "2");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "file_entity" && $api == "file_default_displays") {
    return array("version" => "1");
  }
  if ($module == "flexslider" && $api == "flexslider_default_preset") {
    return array("version" => "1");
  }
  if ($module == "flexslider_picture" && $api == "flexslider_picture_optionset") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function hk_ct_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_flag_default_flags().
 */
function hk_ct_flag_default_flags() {
  $flags = array();
  // Exported flag: "Favoriten".
  $flags['merken'] = array(
    'entity_type' => 'node',
    'title' => 'Favoriten',
    'global' => 0,
    'types' => array(
      0 => 'apartment',
    ),
    'flag_short' => 'Add to favorites',
    'flag_long' => 'add apartment to your personal favorites list',
    'flag_message' => 'apartment added',
    'unflag_short' => 'Remove from favorites',
    'unflag_long' => '',
    'unflag_message' => 'apartment removed',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 'full',
      'teaser' => 'teaser',
      'rss' => 0,
      'search_index' => 0,
      'search_result' => 0,
      'diff_standard' => 0,
      'token' => 0,
      'map_popup' => 0,
      'project' => 0,
      'tile' => 0,
      'revision' => 0,
    ),
    'show_as_field' => 1,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'i18n' => 1,
    'module' => 'hk_ct',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  return $flags;

}

/**
 * Implements hook_image_default_styles().
 */
function hk_ct_image_default_styles() {
  $styles = array();

  // Exported image style: makler_thumbnail.
  $styles['makler_thumbnail'] = array(
    'label' => 'Makler Thumbnail',
    'effects' => array(
      4 => array(
        'name' => 'manualcrop_crop',
        'data' => array(
          'width' => 398,
          'height' => 398,
          'keepproportions' => 1,
          'style_name' => 'makler_thumbnail',
        ),
        'weight' => 0,
      ),
      6 => array(
        'name' => 'smartcrop_scale_and_crop',
        'data' => array(
          'width' => 398,
          'height' => 398,
          'upscale' => 0,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: map-popup.
  $styles['map-popup'] = array(
    'label' => 'map-popup',
    'effects' => array(
      10 => array(
        'name' => 'smartcrop_scale_and_crop',
        'data' => array(
          'width' => 255,
          'height' => 188,
          'upscale' => 0,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: search_teaser_242.
  $styles['search_teaser_242'] = array(
    'label' => 'Search Teaser 242',
    'effects' => array(
      3 => array(
        'name' => 'smartcrop_scale_and_crop',
        'data' => array(
          'width' => 248,
          'height' => 165,
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
function hk_ct_node_info() {
  $items = array(
    'apartment' => array(
      'name' => t('Wohnung'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
    'objekt' => array(
      'name' => t('Objekt'),
      'base' => 'node_content',
      'description' => t('Ein Objekt bezeichnet einen Standort mit gleicher Adresse, in dem unterschiedliche Wohnungstypen vorkommen können. Die gemeinsamen Eigenschaften aller Wohnungen werden im Objekt angelegt und auf die Wohnungen vererbt.'),
      'has_title' => '1',
      'title_label' => t('Überschrift Objekt'),
      'help' => '',
    ),
    'page' => array(
      'name' => t('Einfache Seite'),
      'base' => 'node_content',
      'description' => t('Benutzen Sie <em>Einfache Seiten</em> für statischen Inhalt, wie z.B. eine „Über uns“ Seite.'),
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
