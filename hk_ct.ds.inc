<?php
/**
 * @file
 * hk_ct.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function hk_ct_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|apartment|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'apartment';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'ds_flag_merken' => array(
      'weight' => '13',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
    'anfrage_button' => array(
      'weight' => '12',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
    'thumbslider' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 0,
        'title_wrapper' => '',
        'ctools' => 'a:3:{s:4:"conf";a:0:{}s:4:"type";s:11:"views_panes";s:7:"subtype";s:21:"apartment-thumbslider";}',
        'load_terms' => 0,
        'ft' => array(),
      ),
    ),
    'adresse' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 0,
        'title_wrapper' => '',
        'ctools' => 'a:3:{s:4:"conf";a:1:{s:7:"context";a:1:{i:0;s:25:"argument_entity_id:node_1";}}s:4:"type";s:11:"views_panes";s:7:"subtype";s:23:"apartment-objektadresse";}',
        'load_terms' => 0,
        'ft' => array(),
      ),
    ),
    'apartment_characteristics' => array(
      'weight' => '15',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 1,
        'title_wrapper' => '',
        'ctools' => 'a:3:{s:4:"conf";a:0:{}s:4:"type";s:11:"views_panes";s:7:"subtype";s:17:"apartment-details";}',
        'load_terms' => 0,
        'ft' => array(
          'func' => 'theme_field',
          'lbw' => 1,
        ),
      ),
    ),
    'apartmentkarte' => array(
      'weight' => '5',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 0,
        'title_wrapper' => '',
        'ctools' => 'a:3:{s:4:"conf";a:16:{s:23:"override_pager_settings";i:0;s:9:"use_pager";i:0;s:14:"nodes_per_page";s:1:"0";s:8:"pager_id";s:1:"0";s:6:"offset";s:1:"0";s:9:"more_link";i:0;s:10:"feed_icons";i:0;s:10:"panel_args";i:0;s:12:"link_to_view";i:0;s:4:"args";s:0:"";s:3:"url";s:0:"";s:7:"display";s:12:"attachment_1";s:7:"context";a:1:{i:0;s:0:"";}s:14:"override_title";i:1;s:19:"override_title_text";s:6:"<none>";s:22:"override_title_heading";s:2:"h2";}s:4:"type";s:5:"views";s:7:"subtype";s:9:"apartment";}',
        'load_terms' => 0,
        'ft' => array(),
      ),
    ),
    'field_apart_expose' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'expose',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_apart_living_space' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb-col' => TRUE,
        ),
      ),
    ),
    'field_apart_price' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'Price',
          'lb-col' => TRUE,
        ),
      ),
    ),
    'field_apart_rooms' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb-col' => TRUE,
        ),
      ),
    ),
    'field_ausstattung' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-col' => TRUE,
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'ausstattung',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
          'fis' => TRUE,
          'fis-el' => 'ul',
          'fis-cl' => '',
          'fis-at' => '',
          'fis-def-at' => FALSE,
          'fi' => TRUE,
          'fi-el' => 'li',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_objektid_nunumeric' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'suffix' => '-',
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'objekt-id',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
  );
  $export['node|apartment|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|apartment|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'apartment';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'adresse' => array(
      'weight' => '8',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 0,
        'title_wrapper' => '',
        'ctools' => 'a:3:{s:4:"conf";a:2:{s:9:"arguments";a:1:{s:3:"nid";s:10:"[node:nid]";}s:7:"context";a:1:{i:0;s:25:"argument_entity_id:node_1";}}s:4:"type";s:11:"views_panes";s:7:"subtype";s:23:"apartment-objektadresse";}',
        'load_terms' => 0,
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'prefix' => '<div class="address"><i class="icon-hk-icon-location"></i> ',
          'suffix' => '</div>',
        ),
      ),
    ),
    'neu_label' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'title' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h2',
        'class' => '',
        'ft' => array(),
      ),
    ),
    'field_apart_price' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
  );
  $export['node|apartment|teaser'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|objekt|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'objekt';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'thumbslider' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 0,
        'title_wrapper' => '',
        'ctools' => 'a:3:{s:4:"conf";a:16:{s:23:"override_pager_settings";i:0;s:9:"use_pager";i:0;s:14:"nodes_per_page";s:1:"0";s:8:"pager_id";s:1:"0";s:6:"offset";s:1:"0";s:9:"more_link";i:0;s:10:"feed_icons";i:0;s:10:"panel_args";i:0;s:12:"link_to_view";i:0;s:4:"args";s:0:"";s:3:"url";s:0:"";s:7:"display";s:7:"block_1";s:7:"context";a:1:{i:0;s:0:"";}s:14:"override_title";i:0;s:19:"override_title_text";s:0:"";s:22:"override_title_heading";s:2:"h2";}s:4:"type";s:5:"views";s:7:"subtype";s:9:"apartment";}',
        'load_terms' => 0,
        'ft' => array(),
      ),
    ),
    'field_address' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb-col' => TRUE,
        ),
      ),
    ),
    'field_bezirk' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb-col' => TRUE,
        ),
      ),
    ),
    'field_heating_type' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb-col' => TRUE,
        ),
      ),
    ),
    'field_no_of_floors' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb-col' => TRUE,
        ),
      ),
    ),
    'field_obj_apartments' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_field',
        ),
      ),
    ),
    'field_object_images' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
        ),
      ),
    ),
    'field_objekt_wkt' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'objectmap',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_objektid_nunumeric' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb-col' => TRUE,
        ),
      ),
    ),
    'field_sale_commission' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb-col' => TRUE,
        ),
      ),
    ),
    'field_status_quo' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb-col' => TRUE,
        ),
      ),
    ),
    'field_wug_act_rent' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb-col' => TRUE,
        ),
      ),
    ),
    'field_wug_no_of_units' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb-col' => TRUE,
        ),
      ),
    ),
    'field_wug_occupancy' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb-col' => TRUE,
        ),
      ),
    ),
    'field_wug_opt_constrruct' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb-col' => TRUE,
        ),
      ),
    ),
    'field_wug_total_space' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb-col' => TRUE,
        ),
      ),
    ),
    'field_year_built' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb-col' => TRUE,
        ),
      ),
    ),
    'field_obj_standort_schatten' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'objectmap',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
  );
  $export['node|objekt|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|objekt|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'objekt';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h2',
        'class' => '',
        'ft' => array(),
      ),
    ),
    'node_link' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link text' => 'Details',
        'wrapper' => 'div',
        'class' => 'flat',
        'ft' => array(),
      ),
    ),
  );
  $export['node|objekt|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function hk_ct_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'adresse';
  $ds_field->label = 'Adresse';
  $ds_field->field_type = 7;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'apartment|*';
  $ds_field->properties = array(
    'default' => array(),
    'settings' => array(
      'show_title' => array(
        'type' => 'checkbox',
      ),
      'title_wrapper' => array(
        'type' => 'textfield',
        'description' => 'Eg: h1, h2, p',
      ),
      'ctools' => array(
        'type' => 'ctools',
      ),
    ),
  );
  $export['adresse'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'anfrage_button';
  $ds_field->label = 'Anfrage Button';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'apartment|*';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<a href="/anfrage?field_angefragte_wohnung=[node:nid]&width=800&height=600&destination=/node/[node:nid]" class="colorbox-node btn full"><?php print t("Inquiry")?></a>',
      'format' => 'ds_code',
    ),
    'use_token' => 1,
  );
  $export['anfrage_button'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'ansprechpartner_projekt';
  $ds_field->label = 'Ansprechpartner Projekt';
  $ds_field->field_type = 7;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'apartment|*';
  $ds_field->properties = array(
    'default' => array(),
    'settings' => array(
      'show_title' => array(
        'type' => 'checkbox',
      ),
      'title_wrapper' => array(
        'type' => 'textfield',
        'description' => 'Eg: h1, h2, p',
      ),
      'ctools' => array(
        'type' => 'ctools',
      ),
    ),
  );
  $export['ansprechpartner_projekt'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'apartment_characteristics';
  $ds_field->label = 'Details';
  $ds_field->field_type = 7;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'apartment|*';
  $ds_field->properties = array(
    'default' => array(),
    'settings' => array(
      'show_title' => array(
        'type' => 'checkbox',
      ),
      'title_wrapper' => array(
        'type' => 'textfield',
        'description' => 'Eg: h1, h2, p',
      ),
      'ctools' => array(
        'type' => 'ctools',
      ),
    ),
  );
  $export['apartment_characteristics'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'apartmentkarte';
  $ds_field->label = 'Apartmentkarte';
  $ds_field->field_type = 7;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'apartment|*';
  $ds_field->properties = array(
    'default' => array(),
    'settings' => array(
      'show_title' => array(
        'type' => 'checkbox',
      ),
      'title_wrapper' => array(
        'type' => 'textfield',
        'description' => 'Eg: h1, h2, p',
      ),
      'ctools' => array(
        'type' => 'ctools',
      ),
    ),
  );
  $export['apartmentkarte'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'expose_drucken';
  $ds_field->label = 'Exposé drucken';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'apartment|*';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<a href="/node/[node:nid]/exposes?width=800&height=800&template=colorbox" class="colorbox-node expose"><?php print t("Print exposé") ?></a>',
      'format' => 'ds_code',
    ),
    'use_token' => 1,
  );
  $export['expose_drucken'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'neu_label';
  $ds_field->label = 'Neu Label';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'apartment|*';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<?php
  if (!empty($entity->created)) {
    $now = new DateTime();
    $interval = ($now->format(\'U\') - $entity->created) / 86400;
    if ($interval <= 40) print t(\'<span class="new">New!&nbsp;</span>\');
  }
?>',
      'format' => 'ds_code',
    ),
    'use_token' => 0,
  );
  $export['neu_label'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'thumbslider';
  $ds_field->label = 'Thumbslider';
  $ds_field->field_type = 7;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'apartment|*
objekt|*';
  $ds_field->properties = array(
    'default' => array(),
    'settings' => array(
      'show_title' => array(
        'type' => 'checkbox',
      ),
      'title_wrapper' => array(
        'type' => 'textfield',
        'description' => 'Eg: h1, h2, p',
      ),
      'ctools' => array(
        'type' => 'ctools',
      ),
    ),
  );
  $export['thumbslider'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function hk_ct_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|apartment|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'apartment';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col_stacked_fluid';
  $ds_layout->settings = array(
    'regions' => array(
      'header' => array(
        0 => 'adresse',
      ),
      'left' => array(
        1 => 'field_apart_gallery',
        2 => 'field_apart_floor_plan',
        3 => 'thumbslider',
        4 => 'group_text',
        8 => 'group_lage',
        10 => 'group_sonstiges',
        19 => 'field_apart_location',
        20 => 'field_apart_description',
        21 => 'field_apart_other',
        22 => 'group_akkordeon',
      ),
      'right' => array(
        5 => 'apartmentkarte',
        6 => 'field_objektid_nunumeric',
        7 => 'field_apart_no',
        9 => 'field_apart_living_space',
        11 => 'field_apart_rooms',
        12 => 'field_apart_price',
        13 => 'field_apart_commission',
        14 => 'anfrage_button',
        15 => 'ds_flag_merken',
        16 => 'field_apart_expose',
        17 => 'apartment_characteristics',
        18 => 'field_ausstattung',
      ),
    ),
    'fields' => array(
      'adresse' => 'header',
      'field_apart_gallery' => 'left',
      'field_apart_floor_plan' => 'left',
      'thumbslider' => 'left',
      'group_text' => 'left',
      'apartmentkarte' => 'right',
      'field_objektid_nunumeric' => 'right',
      'field_apart_no' => 'right',
      'group_lage' => 'left',
      'field_apart_living_space' => 'right',
      'group_sonstiges' => 'left',
      'field_apart_rooms' => 'right',
      'field_apart_price' => 'right',
      'field_apart_commission' => 'right',
      'anfrage_button' => 'right',
      'ds_flag_merken' => 'right',
      'field_apart_expose' => 'right',
      'apartment_characteristics' => 'right',
      'field_ausstattung' => 'right',
      'field_apart_location' => 'left',
      'field_apart_description' => 'left',
      'field_apart_other' => 'left',
      'group_akkordeon' => 'left',
    ),
    'classes' => array(),
    'wrappers' => array(
      'header' => 'div',
      'left' => 'div',
      'right' => 'div',
      'footer' => 'div',
      'ds_hidden' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|apartment|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|apartment|form';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'apartment';
  $ds_layout->view_mode = 'form';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title_field',
        1 => 'language',
        2 => 'field_kategorie',
        3 => 'field_apart_no',
        4 => 'field_apart_living_space',
        5 => 'group_horizontal',
        6 => 'field_apart_rooms',
        8 => 'field_apart_price',
        9 => 'group_basic',
        10 => 'field_object_ref',
        11 => 'group_costs',
        12 => 'field_save_workflow',
        13 => 'path',
        14 => 'group_texte',
        15 => 'group_images',
        17 => 'group_features',
        18 => 'group_expose',
        22 => 'field_apart_description',
        23 => 'field_apart_location',
        24 => 'field_apart_other',
        25 => 'field_apart_hoa_fee',
        26 => 'field_apart_price_parking',
        27 => 'field_apart_net_rent',
        28 => 'field_apart_commission',
        29 => 'field_apart_rate_of_return',
        30 => 'field_apart_pictures',
        31 => 'field_apart_floor_plan',
        33 => 'field_apart_type',
        34 => 'field_moving_in_from',
        35 => 'field_apart_floor',
        36 => 'field_apart_sleeping_rooms',
        37 => 'field_apart_ceiling_height',
        38 => 'field_apart_bathrooms',
        39 => 'field_apart_expose',
        40 => 'field_ausstattung',
      ),
      'hidden' => array(
        7 => 'group_apart_publish',
        20 => 'redirect',
        21 => 'field_objekt_wkt',
        32 => 'field_apart_gallery',
        41 => '_add_existing_field',
      ),
      'ds_hidden' => array(
        16 => 'field_bezirk',
        19 => 'field_objektid_nunumeric',
      ),
    ),
    'fields' => array(
      'title_field' => 'ds_content',
      'language' => 'ds_content',
      'field_kategorie' => 'ds_content',
      'field_apart_no' => 'ds_content',
      'field_apart_living_space' => 'ds_content',
      'group_horizontal' => 'ds_content',
      'field_apart_rooms' => 'ds_content',
      'group_apart_publish' => 'hidden',
      'field_apart_price' => 'ds_content',
      'group_basic' => 'ds_content',
      'field_object_ref' => 'ds_content',
      'group_costs' => 'ds_content',
      'field_save_workflow' => 'ds_content',
      'path' => 'ds_content',
      'group_texte' => 'ds_content',
      'group_images' => 'ds_content',
      'field_bezirk' => 'ds_hidden',
      'group_features' => 'ds_content',
      'group_expose' => 'ds_content',
      'field_objektid_nunumeric' => 'ds_hidden',
      'redirect' => 'hidden',
      'field_objekt_wkt' => 'hidden',
      'field_apart_description' => 'ds_content',
      'field_apart_location' => 'ds_content',
      'field_apart_other' => 'ds_content',
      'field_apart_hoa_fee' => 'ds_content',
      'field_apart_price_parking' => 'ds_content',
      'field_apart_net_rent' => 'ds_content',
      'field_apart_commission' => 'ds_content',
      'field_apart_rate_of_return' => 'ds_content',
      'field_apart_pictures' => 'ds_content',
      'field_apart_floor_plan' => 'ds_content',
      'field_apart_gallery' => 'hidden',
      'field_apart_type' => 'ds_content',
      'field_moving_in_from' => 'ds_content',
      'field_apart_floor' => 'ds_content',
      'field_apart_sleeping_rooms' => 'ds_content',
      'field_apart_ceiling_height' => 'ds_content',
      'field_apart_bathrooms' => 'ds_content',
      'field_apart_expose' => 'ds_content',
      'field_ausstattung' => 'ds_content',
      '_add_existing_field' => 'hidden',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
      'ds_hidden' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
  );
  $export['node|apartment|form'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|apartment|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'apartment';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_apart_pictures',
        1 => 'group_card',
        2 => 'flag_merken',
        3 => 'neu_label',
        4 => 'field_kategorie',
        5 => 'title',
        6 => 'field_apart_living_space',
        7 => 'field_apart_price',
        8 => 'adresse',
      ),
    ),
    'fields' => array(
      'field_apart_pictures' => 'ds_content',
      'group_card' => 'ds_content',
      'flag_merken' => 'ds_content',
      'neu_label' => 'ds_content',
      'field_kategorie' => 'ds_content',
      'title' => 'ds_content',
      'field_apart_living_space' => 'ds_content',
      'field_apart_price' => 'ds_content',
      'adresse' => 'ds_content',
    ),
    'limit' => array(
      'field_apart_pictures' => '1',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
  );
  $export['node|apartment|teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|apartment|tile';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'apartment';
  $ds_layout->view_mode = 'tile';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_apart_pictures',
        1 => 'field_apart_category',
        2 => 'field_apart_living_space',
        3 => 'field_apart_price',
        4 => 'field_apart_commission',
        5 => 'field_apart_rooms',
      ),
    ),
    'fields' => array(
      'field_apart_pictures' => 'ds_content',
      'field_apart_category' => 'ds_content',
      'field_apart_living_space' => 'ds_content',
      'field_apart_price' => 'ds_content',
      'field_apart_commission' => 'ds_content',
      'field_apart_rooms' => 'ds_content',
    ),
    'limit' => array(
      'field_apart_pictures' => '1',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
  );
  $export['node|apartment|tile'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|objekt|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'objekt';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_object_images',
        1 => 'thumbslider',
        2 => 'group_merkmale',
        3 => 'field_object_txt_map_popup',
        4 => 'group_text',
        5 => 'field_object_location',
        6 => 'field_obj_apartments',
        7 => 'field_objekt_wkt',
        8 => 'field_object_description',
        9 => 'field_obj_standort_schatten',
        10 => 'field_object_description_invest',
        11 => 'field_object_desc_commercial',
        12 => 'field_object_other',
        13 => 'field_objektid_nunumeric',
        14 => 'field_address',
        15 => 'field_bezirk',
        16 => 'field_kategorie',
        17 => 'field_developer',
        18 => 'field_status_quo',
        19 => 'field_moving_in_from',
        20 => 'field_no_of_floors',
        21 => 'field_wug_total_space',
        22 => 'field_wug_opt_constrruct',
        23 => 'field_wug_no_of_units',
        24 => 'field_wug_occupancy',
        25 => 'field_heating_type',
        26 => 'field_year_built',
        27 => 'field_rent_commission',
        28 => 'field_sale_commission',
        29 => 'field_wug_act_rent',
      ),
    ),
    'fields' => array(
      'field_object_images' => 'ds_content',
      'thumbslider' => 'ds_content',
      'group_merkmale' => 'ds_content',
      'field_object_txt_map_popup' => 'ds_content',
      'group_text' => 'ds_content',
      'field_object_location' => 'ds_content',
      'field_obj_apartments' => 'ds_content',
      'field_objekt_wkt' => 'ds_content',
      'field_object_description' => 'ds_content',
      'field_obj_standort_schatten' => 'ds_content',
      'field_object_description_invest' => 'ds_content',
      'field_object_desc_commercial' => 'ds_content',
      'field_object_other' => 'ds_content',
      'field_objektid_nunumeric' => 'ds_content',
      'field_address' => 'ds_content',
      'field_bezirk' => 'ds_content',
      'field_kategorie' => 'ds_content',
      'field_developer' => 'ds_content',
      'field_status_quo' => 'ds_content',
      'field_moving_in_from' => 'ds_content',
      'field_no_of_floors' => 'ds_content',
      'field_wug_total_space' => 'ds_content',
      'field_wug_opt_constrruct' => 'ds_content',
      'field_wug_no_of_units' => 'ds_content',
      'field_wug_occupancy' => 'ds_content',
      'field_heating_type' => 'ds_content',
      'field_year_built' => 'ds_content',
      'field_rent_commission' => 'ds_content',
      'field_sale_commission' => 'ds_content',
      'field_wug_act_rent' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
      'ds_hidden' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
  );
  $export['node|objekt|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|objekt|form';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'objekt';
  $ds_layout->view_mode = 'form';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title_field',
        1 => 'language',
        2 => 'field_object_txt_map_popup',
        3 => 'field_objektid_nunumeric',
        4 => 'field_object_description',
        5 => 'field_kategorie',
        6 => 'field_object_multi_apart_types',
        7 => 'field_ansprechpartner',
        8 => 'group_horizontal',
        9 => 'field_object_description_invest',
        10 => 'field_object_desc_commercial',
        11 => 'group_ht_basis',
        12 => 'field_obj_verkaeufer',
        13 => 'path',
        14 => 'group_ort',
        15 => 'field_obj_gemeinschaftsgeschaeft',
        16 => 'group_ht_texte',
        17 => 'field_obj_kond_gemeingesch',
        18 => 'field_object_location',
        19 => 'field_save_workflow',
        20 => 'group_ht_bilder',
        21 => 'field_object_other',
        23 => 'field_obj_tippgeber',
        24 => 'field_obj_konditionen_tipp',
        26 => 'group_ht_merkmale',
        27 => 'group_energieausweis',
        28 => 'field_object_images',
        29 => 'group_ansprechpartner',
        30 => 'group_obj_apartments',
        31 => 'field_obj_apartments',
        32 => 'field_sale_commission',
        33 => 'field_rent_commission',
        34 => 'field_status_quo',
        35 => 'field_no_of_floors',
        36 => 'field_moving_in_from',
        37 => 'field_developer',
        38 => 'field_wug_total_space',
        39 => 'field_wug_opt_constrruct',
        40 => 'field_wug_no_of_units',
        41 => 'field_wug_occupancy',
        42 => 'field_wug_act_rent',
        43 => 'field_objekt_energieausweistyp',
        44 => 'field_obj_enev_file',
        45 => 'field_objekt_energietraeger',
        46 => 'field_heating_type',
        47 => 'field_objekt_endenergiebedarf',
        48 => 'field_objekt_effizienzklasse',
        49 => 'field_bezirk',
        50 => 'field_year_built',
        51 => 'field_obj_enev_date',
        52 => 'field_obj_schattenobjekt',
        53 => 'field_address',
        54 => 'field_obj_enev_haustyp',
        55 => 'field_address_shadow_object',
        56 => 'field_objekt_wkt',
      ),
      'hidden' => array(
        22 => 'group_multiapart',
        25 => 'redirect',
        57 => 'field_obj_standort_schatten',
        58 => '_add_existing_field',
      ),
    ),
    'fields' => array(
      'title_field' => 'ds_content',
      'language' => 'ds_content',
      'field_object_txt_map_popup' => 'ds_content',
      'field_objektid_nunumeric' => 'ds_content',
      'field_object_description' => 'ds_content',
      'field_kategorie' => 'ds_content',
      'field_object_multi_apart_types' => 'ds_content',
      'field_ansprechpartner' => 'ds_content',
      'group_horizontal' => 'ds_content',
      'field_object_description_invest' => 'ds_content',
      'field_object_desc_commercial' => 'ds_content',
      'group_ht_basis' => 'ds_content',
      'field_obj_verkaeufer' => 'ds_content',
      'path' => 'ds_content',
      'group_ort' => 'ds_content',
      'field_obj_gemeinschaftsgeschaeft' => 'ds_content',
      'group_ht_texte' => 'ds_content',
      'field_obj_kond_gemeingesch' => 'ds_content',
      'field_object_location' => 'ds_content',
      'field_save_workflow' => 'ds_content',
      'group_ht_bilder' => 'ds_content',
      'field_object_other' => 'ds_content',
      'group_multiapart' => 'hidden',
      'field_obj_tippgeber' => 'ds_content',
      'field_obj_konditionen_tipp' => 'ds_content',
      'redirect' => 'hidden',
      'group_ht_merkmale' => 'ds_content',
      'group_energieausweis' => 'ds_content',
      'field_object_images' => 'ds_content',
      'group_ansprechpartner' => 'ds_content',
      'group_obj_apartments' => 'ds_content',
      'field_obj_apartments' => 'ds_content',
      'field_sale_commission' => 'ds_content',
      'field_rent_commission' => 'ds_content',
      'field_status_quo' => 'ds_content',
      'field_no_of_floors' => 'ds_content',
      'field_moving_in_from' => 'ds_content',
      'field_developer' => 'ds_content',
      'field_wug_total_space' => 'ds_content',
      'field_wug_opt_constrruct' => 'ds_content',
      'field_wug_no_of_units' => 'ds_content',
      'field_wug_occupancy' => 'ds_content',
      'field_wug_act_rent' => 'ds_content',
      'field_objekt_energieausweistyp' => 'ds_content',
      'field_obj_enev_file' => 'ds_content',
      'field_objekt_energietraeger' => 'ds_content',
      'field_heating_type' => 'ds_content',
      'field_objekt_endenergiebedarf' => 'ds_content',
      'field_objekt_effizienzklasse' => 'ds_content',
      'field_bezirk' => 'ds_content',
      'field_year_built' => 'ds_content',
      'field_obj_enev_date' => 'ds_content',
      'field_obj_schattenobjekt' => 'ds_content',
      'field_address' => 'ds_content',
      'field_obj_enev_haustyp' => 'ds_content',
      'field_address_shadow_object' => 'ds_content',
      'field_objekt_wkt' => 'ds_content',
      'field_obj_standort_schatten' => 'hidden',
      '_add_existing_field' => 'hidden',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
      'ds_hidden' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
  );
  $export['node|objekt|form'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|objekt|map_popup';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'objekt';
  $ds_layout->view_mode = 'map_popup';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_object_images',
        1 => 'title',
        2 => 'field_object_txt_map_popup',
        3 => 'field_obj_apartments',
      ),
    ),
    'fields' => array(
      'field_object_images' => 'ds_content',
      'title' => 'ds_content',
      'field_object_txt_map_popup' => 'ds_content',
      'field_obj_apartments' => 'ds_content',
    ),
    'limit' => array(
      'field_object_images' => '1',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
      'ds_hidden' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
  );
  $export['node|objekt|map_popup'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|objekt|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'objekt';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_object_txt_map_popup',
        1 => 'group_project_card',
        2 => 'node_link',
        3 => 'title',
        4 => 'field_object_images',
        5 => 'group_card_content',
      ),
    ),
    'fields' => array(
      'field_object_txt_map_popup' => 'ds_content',
      'group_project_card' => 'ds_content',
      'node_link' => 'ds_content',
      'title' => 'ds_content',
      'field_object_images' => 'ds_content',
      'group_card_content' => 'ds_content',
    ),
    'limit' => array(
      'field_object_images' => '1',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
  );
  $export['node|objekt|teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|page|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'page';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'body',
        1 => 'field_view',
        2 => 'field_bild',
      ),
    ),
    'fields' => array(
      'body' => 'ds_content',
      'field_view' => 'ds_content',
      'field_bild' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
  );
  $export['node|page|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|page|form';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'page';
  $ds_layout->view_mode = 'form';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title_field',
        1 => 'field_bild',
        2 => 'body',
        3 => 'field_view',
        4 => 'redirect',
        5 => 'path',
      ),
      'hidden' => array(
        6 => '_add_existing_field',
      ),
    ),
    'fields' => array(
      'title_field' => 'ds_content',
      'field_bild' => 'ds_content',
      'body' => 'ds_content',
      'field_view' => 'ds_content',
      'redirect' => 'ds_content',
      'path' => 'ds_content',
      '_add_existing_field' => 'hidden',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
  );
  $export['node|page|form'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function hk_ct_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'map_popup';
  $ds_view_mode->label = 'map-popup';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['map_popup'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'project';
  $ds_view_mode->label = 'project';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['project'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'tile';
  $ds_view_mode->label = 'tile';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['tile'] = $ds_view_mode;

  return $export;
}
