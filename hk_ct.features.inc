<?php
/**
 * @file
 * hk_ct.features.inc
 */

/**
 * Implements hook_default_Workflow().
 */
function hk_ct_default_Workflow() {
  $workflows = array();

  // Exported workflow: 'draft_ready_published_archived'
  $workflows['draft_ready_published_archived'] = entity_import('Workflow', '{
    "name" : "draft_ready_published_archived",
    "tab_roles" : { "6" : "6", "3" : "3" },
    "options" : {
      "name_as_title" : "0",
      "options" : "buttons",
      "schedule" : "1",
      "schedule_timezone" : "0",
      "comment_log_node" : "1",
      "comment_log_tab" : "1",
      "watchdog_log" : "1",
      "history_tab_show" : 1
    },
    "states" : {
      "1" : {"sid":"1","wid":"1","weight":"-50","sysid":"1","state":"(creation)","status":"1","name":"(creation)"},
      "2" : {"sid":"2","wid":"1","weight":"-20","sysid":"0","state":"Draft","status":"1","name":"draft"},
      "3" : {"sid":"3","wid":"1","weight":"-19","sysid":"0","state":"Ready","status":"1","name":"ready"},
      "4" : {"sid":"4","wid":"1","weight":"-18","sysid":"0","state":"Active","status":"1","name":"active"},
      "5" : {"sid":"5","wid":"1","weight":"-17","sysid":"0","state":"Archived","status":"1","name":"archived"},
      "6" : {"sid":"6","wid":"1","weight":"-16","sysid":"0","state":"Sold","status":"1","name":"sold"}
    },
    "transitions" : {
      "1" : {"tid":"1","sid":"1","target_sid":"2","roles":{"-1":-1,"6":"6","3":"3"},"wid":"1","name":"1_2","label":"Entwurf speichern"},
      "2" : {"tid":"2","sid":"1","target_sid":"3","roles":{"-1":-1,"6":"6","3":"3"},"wid":"1","name":"1_3","label":"Fertig zur Ver\\u00f6ffentlichung"},
      "3" : {"tid":"3","sid":"2","target_sid":"2","roles":{"-1":-1,"6":"6","3":"3"},"wid":"1","name":"2_2","label":"Speichern"},
      "4" : {"tid":"4","sid":"2","target_sid":"3","roles":{"-1":-1,"6":"6","3":"3"},"wid":"1","name":"2_3","label":"Fertig zur Ver\\u00f6ffentlichung"},
      "5" : {"tid":"5","sid":"3","target_sid":"3","roles":{"-1":-1,"6":"6","3":"3"},"wid":"1","name":"3_3","label":"Speichern"},
      "6" : {"tid":"6","sid":"3","target_sid":"4","roles":{"3":"3"},"wid":"1","name":"3_4","label":"Ver\\u00f6ffentlichen"},
      "7" : {"tid":"7","sid":"3","target_sid":"5","roles":{"3":"3"},"wid":"1","name":"3_5","label":"Archivieren"},
      "8" : {"tid":"8","sid":"3","target_sid":"6","roles":{"3":"3"},"wid":"1","name":"3_6","label":"Verkauft"},
      "9" : {"tid":"9","sid":"4","target_sid":"2","roles":{"3":"3"},"wid":"1","name":"4_2","label":"Setze zur\\u00fcck auf Entwurf"},
      "10" : {"tid":"10","sid":"4","target_sid":"4","roles":{"-1":-1,"6":"6","3":"3"},"wid":"1","name":"4_4","label":"Speichern"},
      "11" : {"tid":"11","sid":"4","target_sid":"5","roles":{"3":"3"},"wid":"1","name":"4_5","label":"Archivieren"},
      "12" : {"tid":"12","sid":"4","target_sid":"6","roles":{"3":"3"},"wid":"1","name":"4_6","label":"Verkauft"},
      "13" : {"tid":"13","sid":"5","target_sid":"2","roles":{"3":"3"},"wid":"1","name":"5_2","label":"Save as Draft"},
      "14" : {"tid":"14","sid":"5","target_sid":"4","roles":{"3":"3"},"wid":"1","name":"5_4","label":"Erneut Ver\\u00f6ffentlichen"},
      "15" : {"tid":"15","sid":"5","target_sid":"5","roles":{"-1":-1,"6":"6","3":"3"},"wid":"1","name":"5_5","label":"Speichern"},
      "16" : {"tid":"16","sid":"5","target_sid":"6","roles":{"3":"3"},"wid":"1","name":"5_6","label":"Verkauft"},
      "17" : {"tid":"17","sid":"6","target_sid":"2","roles":{"3":"3"},"wid":"1","name":"6_2","label":"Save as Draft"},
      "18" : {"tid":"18","sid":"6","target_sid":"4","roles":{"3":"3"},"wid":"1","name":"6_4","label":"Erneut Ver\\u00f6ffentlichen"},
      "19" : {"tid":"19","sid":"6","target_sid":"5","roles":{"3":"3"},"wid":"1","name":"6_5","label":"Archivieren"},
      "20" : {"tid":"20","sid":"6","target_sid":"6","roles":{"-1":-1,"6":"6","3":"3"},"wid":"1","name":"6_6","label":"Speichern"}
    },
    "label" : "Draft-Ready-Published-Archived",
    "typeMap" : [],
    "wid_original" : "1",
    "system_roles" : {
      "-1" : "(author)",
      "1" : "anonymous user",
      "2" : "authenticated user",
      "4" : "administrator",
      "6" : "admintooluser",
      "5" : "Nutzer anlegen",
      "7" : "\\u00dcbersetzen",
      "3" : "Editor"
    }
  }');

  return $workflows;
}

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
  if ($module == "picture" && $api == "default_picture_mapping") {
    return array("version" => "2");
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
 * Implements hook_default_entity_rule_setting().
 */
function hk_ct_default_entity_rule_setting() {
  $items = array();
  $items['3'] = entity_import('entity_rule_setting', '{
    "id" : "3",
    "entity_type" : "node",
    "bundle" : "apartment",
    "op" : "update",
    "rules_config" : "rules_kopiere_objekt_id_vom_objekt_update",
    "weight" : "0",
    "args" : null,
    "false_msg" : null
  }');
  $items['4'] = entity_import('entity_rule_setting', '{
    "id" : "4",
    "entity_type" : "node",
    "bundle" : "apartment",
    "op" : "update",
    "rules_config" : "rules_kopiere_standort_vom_objekt",
    "weight" : "1",
    "args" : null,
    "false_msg" : null
  }');
  $items['7'] = entity_import('entity_rule_setting', '{
    "id" : "7",
    "entity_type" : "node",
    "bundle" : "apartment",
    "op" : "create",
    "rules_config" : "rules_kopiere_objekt_id_vom_objekt",
    "weight" : "-7",
    "args" : null,
    "false_msg" : null
  }');
  $items['8'] = entity_import('entity_rule_setting', '{
    "id" : "8",
    "entity_type" : "node",
    "bundle" : "apartment",
    "op" : "create",
    "rules_config" : "rules_kopiere_kategorie_vom_objekt",
    "weight" : "-6",
    "args" : null,
    "false_msg" : null
  }');
  $items['9'] = entity_import('entity_rule_setting', '{
    "id" : "9",
    "entity_type" : "node",
    "bundle" : "apartment",
    "op" : "create",
    "rules_config" : "rules_kopiere_beschreibung_vom_objekt_falls_leer",
    "weight" : "-10",
    "args" : null,
    "false_msg" : null
  }');
  $items['10'] = entity_import('entity_rule_setting', '{
    "id" : "10",
    "entity_type" : "node",
    "bundle" : "apartment",
    "op" : "create",
    "rules_config" : "rules_kopiere_lage_vom_objekt_falls_leer",
    "weight" : "-9",
    "args" : null,
    "false_msg" : null
  }');
  $items['11'] = entity_import('entity_rule_setting', '{
    "id" : "11",
    "entity_type" : "node",
    "bundle" : "apartment",
    "op" : "create",
    "rules_config" : "rules_kopiere_sonstiges_vom_objekt_falls_leer",
    "weight" : "-8",
    "args" : null,
    "false_msg" : null
  }');
  $items['12'] = entity_import('entity_rule_setting', '{
    "id" : "12",
    "entity_type" : "node",
    "bundle" : "apartment",
    "op" : "create",
    "rules_config" : "rules_kopiere_standort_vom_objekt_create",
    "weight" : "-5",
    "args" : null,
    "false_msg" : null
  }');
  $items['13'] = entity_import('entity_rule_setting', '{
    "id" : "13",
    "entity_type" : "node",
    "bundle" : "apartment",
    "op" : "update",
    "rules_config" : "rules_kopiere_kategorie_vom_objekt_falls_leer",
    "weight" : "2",
    "args" : null,
    "false_msg" : null
  }');
  $items['14'] = entity_import('entity_rule_setting', '{
    "id" : "14",
    "entity_type" : "node",
    "bundle" : "apartment",
    "op" : "update",
    "rules_config" : "rules_kopiere_beschreibung_vom_objekt_falls_leer_update_",
    "weight" : "3",
    "args" : null,
    "false_msg" : null
  }');
  $items['17'] = entity_import('entity_rule_setting', '{
    "id" : "17",
    "entity_type" : "node",
    "bundle" : "apartment",
    "op" : "update",
    "rules_config" : "rules_kopiere_lage_vom_objekt_falls_leer_update_",
    "weight" : "4",
    "args" : null,
    "false_msg" : null
  }');
  $items['18'] = entity_import('entity_rule_setting', '{
    "id" : "18",
    "entity_type" : "node",
    "bundle" : "apartment",
    "op" : "update",
    "rules_config" : "rules_kopiere_sonstiges_vom_objekt_falls_leer_update_",
    "weight" : "5",
    "args" : null,
    "false_msg" : null
  }');
  return $items;
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

  // Exported image style: colorbox_full.
  $styles['colorbox_full'] = array(
    'label' => 'colorbox_full',
    'effects' => array(
      14 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 1200,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: colorboxbreakpoints_theme_hk_theme_desk_1x.
  $styles['colorboxbreakpoints_theme_hk_theme_desk_1x'] = array(
    'label' => 'colorboxbreakpoints_theme_hk_theme_desk_1x',
    'effects' => array(
      27 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 900,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: colorboxbreakpoints_theme_hk_theme_mobile_1x.
  $styles['colorboxbreakpoints_theme_hk_theme_mobile_1x'] = array(
    'label' => 'colorboxbreakpoints_theme_hk_theme_mobile_1x',
    'effects' => array(
      29 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 500,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: colorboxbreakpoints_theme_hk_theme_narrow_1x.
  $styles['colorboxbreakpoints_theme_hk_theme_narrow_1x'] = array(
    'label' => 'colorboxbreakpoints_theme_hk_theme_narrow_1x',
    'effects' => array(
      28 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 750,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: colorboxbreakpoints_theme_hk_theme_wide_1x.
  $styles['colorboxbreakpoints_theme_hk_theme_wide_1x'] = array(
    'label' => 'colorboxbreakpoints_theme_hk_theme_wide_1x',
    'effects' => array(
      26 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 1200,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: flexfullbreakpoints_theme_hk_theme_desk_1x.
  $styles['flexfullbreakpoints_theme_hk_theme_desk_1x'] = array(
    'label' => 'flexfullbreakpoints_theme_hk_theme_desk_1x',
    'effects' => array(
      24 => array(
        'name' => 'smartcrop_scale_and_crop',
        'data' => array(
          'width' => 644,
          'height' => 403,
          'upscale' => 0,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: flexfullbreakpoints_theme_hk_theme_mobile_1x.
  $styles['flexfullbreakpoints_theme_hk_theme_mobile_1x'] = array(
    'label' => 'flexfullbreakpoints_theme_hk_theme_mobile_1x',
    'effects' => array(
      25 => array(
        'name' => 'smartcrop_scale_and_crop',
        'data' => array(
          'width' => 439,
          'height' => 274,
          'upscale' => 0,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: flexfullbreakpoints_theme_hk_theme_narrow_1x.
  $styles['flexfullbreakpoints_theme_hk_theme_narrow_1x'] = array(
    'label' => 'flexfullbreakpoints_theme_hk_theme_narrow_1x',
    'effects' => array(
      21 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 800,
          'height' => 500,
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: flexfullbreakpoints_theme_hk_theme_wide_1x.
  $styles['flexfullbreakpoints_theme_hk_theme_wide_1x'] = array(
    'label' => 'flexfullbreakpoints_theme_hk_theme_wide_1x',
    'effects' => array(
      23 => array(
        'name' => 'smartcrop_scale_and_crop',
        'data' => array(
          'width' => 1016,
          'height' => 635,
          'upscale' => 0,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: flexthumbbreakpoints_theme_hk_theme_desk_1x.
  $styles['flexthumbbreakpoints_theme_hk_theme_desk_1x'] = array(
    'label' => 'flexthumbbreakpoints_theme_hk_theme_desk_1x',
    'effects' => array(
      16 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 135,
          'height' => 135,
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: flexthumbbreakpoints_theme_hk_theme_mobile_1x.
  $styles['flexthumbbreakpoints_theme_hk_theme_mobile_1x'] = array(
    'label' => 'flexthumbbreakpoints_theme_hk_theme_mobile_1x',
    'effects' => array(
      18 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 100,
          'height' => 100,
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: flexthumbbreakpoints_theme_hk_theme_narrow_1x.
  $styles['flexthumbbreakpoints_theme_hk_theme_narrow_1x'] = array(
    'label' => 'flexthumbbreakpoints_theme_hk_theme_narrow_1x',
    'effects' => array(
      17 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 115,
          'height' => 115,
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: flexthumbbreakpoints_theme_hk_theme_wide_1x.
  $styles['flexthumbbreakpoints_theme_hk_theme_wide_1x'] = array(
    'label' => 'flexthumbbreakpoints_theme_hk_theme_wide_1x',
    'effects' => array(
      15 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 150,
          'height' => 150,
        ),
        'weight' => 0,
      ),
    ),
  );

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
      'name' => t('Basic page'),
      'base' => 'node_content',
      'description' => t('Use <em>basic pages</em> for your static content, such as an \'About us\' page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
