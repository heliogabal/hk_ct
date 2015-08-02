<?php
/**
 * @file
 * hk_ct.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function hk_ct_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'apartment';
  $view->description = '';
  $view->tag = 'hk';
  $view->base_table = 'node';
  $view->human_name = 'Apartment';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Adresse vom Objekt';
  $handler->display->display_options['css_class'] = 'thumbslide';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mehr';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Anwenden';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Zurücksetzen';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortieren nach';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Aufsteigend';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Absteigend';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elemente pro Seite';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« erste Seite';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ vorherige Seite';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'nächste Seite ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'letzte Seite »';
  $handler->display->display_options['style_plugin'] = 'flexslider';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Beziehung: Entity Reference: Entität, auf die verwiesen wird */
  $handler->display->display_options['relationships']['field_object_ref_target_id']['id'] = 'field_object_ref_target_id';
  $handler->display->display_options['relationships']['field_object_ref_target_id']['table'] = 'field_data_field_object_ref';
  $handler->display->display_options['relationships']['field_object_ref_target_id']['field'] = 'field_object_ref_target_id';
  $handler->display->display_options['relationships']['field_object_ref_target_id']['label'] = 'Objekt';
  $handler->display->display_options['relationships']['field_object_ref_target_id']['required'] = TRUE;
  /* Feld: Inhalt: Address - Strasse Nr. */
  $handler->display->display_options['fields']['field_address_thoroughfare']['id'] = 'field_address_thoroughfare';
  $handler->display->display_options['fields']['field_address_thoroughfare']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_thoroughfare']['field'] = 'field_address_thoroughfare';
  $handler->display->display_options['fields']['field_address_thoroughfare']['relationship'] = 'field_object_ref_target_id';
  $handler->display->display_options['fields']['field_address_thoroughfare']['label'] = '';
  $handler->display->display_options['fields']['field_address_thoroughfare']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_address_thoroughfare']['element_label_colon'] = FALSE;
  /* Feld: Inhalt: Address - PLZ */
  $handler->display->display_options['fields']['field_address_postal_code']['id'] = 'field_address_postal_code';
  $handler->display->display_options['fields']['field_address_postal_code']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_postal_code']['field'] = 'field_address_postal_code';
  $handler->display->display_options['fields']['field_address_postal_code']['relationship'] = 'field_object_ref_target_id';
  $handler->display->display_options['fields']['field_address_postal_code']['label'] = '';
  $handler->display->display_options['fields']['field_address_postal_code']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_address_postal_code']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address_postal_code']['element_default_classes'] = FALSE;
  /* Feld: Inhalt: Address - Ort (z.B. Stadt) */
  $handler->display->display_options['fields']['field_address_locality']['id'] = 'field_address_locality';
  $handler->display->display_options['fields']['field_address_locality']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_locality']['field'] = 'field_address_locality';
  $handler->display->display_options['fields']['field_address_locality']['relationship'] = 'field_object_ref_target_id';
  $handler->display->display_options['fields']['field_address_locality']['label'] = '';
  $handler->display->display_options['fields']['field_address_locality']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_address_locality']['alter']['text'] = '[field_address_thoroughfare], [field_address_postal_code] [field_address_locality] ';
  $handler->display->display_options['fields']['field_address_locality']['element_label_colon'] = FALSE;
  /* Kontextfilter: Inhalt: Beitrags-ID */
  $handler->display->display_options['arguments']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['arguments']['nid_1']['table'] = 'node';
  $handler->display->display_options['arguments']['nid_1']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid_1']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid_1']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['nid_1']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid_1']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid_1']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid_1']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid_1']['validate_options']['types'] = array(
    'apartment' => 'apartment',
  );
  $handler->display->display_options['arguments']['nid_1']['validate']['fail'] = 'access denied';
  /* Filterkriterium: Inhalt: Typ */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'apartment' => 'apartment',
  );

  /* Display: Karte */
  $handler = $view->new_display('attachment', 'Karte', 'attachment_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Karte vom Objekt';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'apartmap';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'ip_geoloc_leaflet';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => '',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['map'] = 'leaflet-mapbox';
  $handler->display->display_options['style_options']['map_height'] = '300';
  $handler->display->display_options['style_options']['ip_geoloc_views_plugin_latitude'] = array(
    'field_objekt_wkt' => 'field_objekt_wkt',
    'field_obj_standort_schatten' => 'field_obj_standort_schatten',
  );
  $handler->display->display_options['style_options']['ip_geoloc_views_plugin_longitude'] = '';
  $handler->display->display_options['style_options']['default_marker']['default_marker_color'] = 'Icon_House2';
  $handler->display->display_options['style_options']['visitor_marker']['visitor_marker_color'] = 'none';
  $handler->display->display_options['style_options']['center_option'] = '0';
  $handler->display->display_options['style_options']['tooltips']['marker_tooltip'] = 'field_address_thoroughfare';
  $handler->display->display_options['style_options']['sync']['2'] = 0;
  $handler->display->display_options['style_options']['sync']['4'] = 0;
  $handler->display->display_options['style_options']['sync']['8'] = 1;
  $handler->display->display_options['style_options']['sync']['16'] = 1;
  $handler->display->display_options['style_options']['full_screen'] = 1;
  $handler->display->display_options['style_options']['scale_metric'] = 1;
  $handler->display->display_options['style_options']['scale_imperial'] = 0;
  $handler->display->display_options['style_options']['zoom_indicator'] = 0;
  $handler->display->display_options['style_options']['map_reset'] = 0;
  $handler->display->display_options['style_options']['map_cluster_toggle'] = 0;
  $handler->display->display_options['style_options']['mini_map']['on'] = 0;
  $handler->display->display_options['style_options']['mini_map']['height'] = '100';
  $handler->display->display_options['style_options']['mini_map']['width'] = '150';
  $handler->display->display_options['style_options']['mini_map']['toggle'] = 1;
  $handler->display->display_options['style_options']['mini_map']['zoom_delta'] = '-5';
  $handler->display->display_options['style_options']['cluster_radius'] = '1';
  $handler->display->display_options['style_options']['cluster_differentiator']['cluster_differentiator_fields'] = array(
    '' => '',
  );
  $handler->display->display_options['style_options']['cluster_aggregation']['aggregation_function'] = 'average';
  $handler->display->display_options['style_options']['cluster_aggregation']['ranges']['small'] = '10';
  $handler->display->display_options['style_options']['cluster_aggregation']['ranges']['medium'] = '100';
  $handler->display->display_options['style_options']['cluster_aggregation']['ranges']['large'] = '1000';
  $handler->display->display_options['style_options']['map_options']['maxzoom'] = '18';
  $handler->display->display_options['style_options']['map_options']['zoom'] = '16';
  $handler->display->display_options['style_options']['map_options']['scrollwheelzoom'] = '1';
  $handler->display->display_options['style_options']['map_options']['dragging'] = '1';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Feld: Inhalt: Standort */
  $handler->display->display_options['fields']['field_objekt_wkt']['id'] = 'field_objekt_wkt';
  $handler->display->display_options['fields']['field_objekt_wkt']['table'] = 'field_data_field_objekt_wkt';
  $handler->display->display_options['fields']['field_objekt_wkt']['field'] = 'field_objekt_wkt';
  $handler->display->display_options['fields']['field_objekt_wkt']['relationship'] = 'field_object_ref_target_id';
  $handler->display->display_options['fields']['field_objekt_wkt']['label'] = '';
  $handler->display->display_options['fields']['field_objekt_wkt']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_objekt_wkt']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_objekt_wkt']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_objekt_wkt']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_objekt_wkt']['settings'] = array(
    'data' => 'full',
  );
  /* Feld: Inhalt: Address - Strasse Nr. */
  $handler->display->display_options['fields']['field_address_thoroughfare']['id'] = 'field_address_thoroughfare';
  $handler->display->display_options['fields']['field_address_thoroughfare']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_thoroughfare']['field'] = 'field_address_thoroughfare';
  $handler->display->display_options['fields']['field_address_thoroughfare']['label'] = '';
  $handler->display->display_options['fields']['field_address_thoroughfare']['element_label_colon'] = FALSE;
  /* Feld: Beschädigte/fehlende Behandlungsroutine */
  $handler->display->display_options['fields']['field_obj_standort_schatten']['id'] = 'field_obj_standort_schatten';
  $handler->display->display_options['fields']['field_obj_standort_schatten']['table'] = 'field_data_field_obj_standort_schatten';
  $handler->display->display_options['fields']['field_obj_standort_schatten']['field'] = 'field_obj_standort_schatten';
  $handler->display->display_options['fields']['field_obj_standort_schatten']['relationship'] = 'field_object_ref_target_id';
  $handler->display->display_options['fields']['field_obj_standort_schatten']['label'] = '';
  $handler->display->display_options['fields']['field_obj_standort_schatten']['element_label_colon'] = FALSE;
  /* Feld: Inhalt: Schattenwohnung? */
  $handler->display->display_options['fields']['field_obj_schattenobjekt']['id'] = 'field_obj_schattenobjekt';
  $handler->display->display_options['fields']['field_obj_schattenobjekt']['table'] = 'field_data_field_obj_schattenobjekt';
  $handler->display->display_options['fields']['field_obj_schattenobjekt']['field'] = 'field_obj_schattenobjekt';
  $handler->display->display_options['fields']['field_obj_schattenobjekt']['label'] = '';
  $handler->display->display_options['fields']['field_obj_schattenobjekt']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterium: Inhalt: Typ */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'apartment' => 'apartment',
  );
  /* Filterkriterium: Inhalt: Schattenwohnung? (field_obj_schattenobjekt) */
  $handler->display->display_options['filters']['field_obj_schattenobjekt_value']['id'] = 'field_obj_schattenobjekt_value';
  $handler->display->display_options['filters']['field_obj_schattenobjekt_value']['table'] = 'field_data_field_obj_schattenobjekt';
  $handler->display->display_options['filters']['field_obj_schattenobjekt_value']['field'] = 'field_obj_schattenobjekt_value';
  $handler->display->display_options['filters']['field_obj_schattenobjekt_value']['relationship'] = 'field_object_ref_target_id';
  $handler->display->display_options['filters']['field_obj_schattenobjekt_value']['value'] = array(
    0 => '0',
  );

  /* Display: Details */
  $handler = $view->new_display('panel_pane', 'Details', 'details');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Details';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'apartmerkmale';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Feld: Inhalt: Living space */
  $handler->display->display_options['fields']['field_apart_living_space']['id'] = 'field_apart_living_space';
  $handler->display->display_options['fields']['field_apart_living_space']['table'] = 'field_data_field_apart_living_space';
  $handler->display->display_options['fields']['field_apart_living_space']['field'] = 'field_apart_living_space';
  $handler->display->display_options['fields']['field_apart_living_space']['label'] = 'Fläche';
  $handler->display->display_options['fields']['field_apart_living_space']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_apart_living_space']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_apart_living_space']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => ',',
    'scale' => '0',
    'prefix_suffix' => 1,
  );
  /* Feld: Inhalt: Rooms */
  $handler->display->display_options['fields']['field_apart_rooms']['id'] = 'field_apart_rooms';
  $handler->display->display_options['fields']['field_apart_rooms']['table'] = 'field_data_field_apart_rooms';
  $handler->display->display_options['fields']['field_apart_rooms']['field'] = 'field_apart_rooms';
  $handler->display->display_options['fields']['field_apart_rooms']['label'] = 'Zimmer';
  $handler->display->display_options['fields']['field_apart_rooms']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_apart_rooms']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_apart_rooms']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Feld: Inhalt: Bathrooms */
  $handler->display->display_options['fields']['field_apart_bathrooms']['id'] = 'field_apart_bathrooms';
  $handler->display->display_options['fields']['field_apart_bathrooms']['table'] = 'field_data_field_apart_bathrooms';
  $handler->display->display_options['fields']['field_apart_bathrooms']['field'] = 'field_apart_bathrooms';
  $handler->display->display_options['fields']['field_apart_bathrooms']['label'] = 'Badezimmer';
  $handler->display->display_options['fields']['field_apart_bathrooms']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_apart_bathrooms']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Feld: Inhalt: Sleeping rooms */
  $handler->display->display_options['fields']['field_apart_sleeping_rooms']['id'] = 'field_apart_sleeping_rooms';
  $handler->display->display_options['fields']['field_apart_sleeping_rooms']['table'] = 'field_data_field_apart_sleeping_rooms';
  $handler->display->display_options['fields']['field_apart_sleeping_rooms']['field'] = 'field_apart_sleeping_rooms';
  $handler->display->display_options['fields']['field_apart_sleeping_rooms']['label'] = 'Schlafzimmer';
  $handler->display->display_options['fields']['field_apart_sleeping_rooms']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_apart_sleeping_rooms']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Feld: Inhalt: Heating type */
  $handler->display->display_options['fields']['field_heating_type']['id'] = 'field_heating_type';
  $handler->display->display_options['fields']['field_heating_type']['table'] = 'field_data_field_heating_type';
  $handler->display->display_options['fields']['field_heating_type']['field'] = 'field_heating_type';
  $handler->display->display_options['fields']['field_heating_type']['label'] = 'Heizung';
  $handler->display->display_options['fields']['field_heating_type']['element_label_colon'] = FALSE;
  /* Feld: Inhalt: HOA fee */
  $handler->display->display_options['fields']['field_apart_hoa_fee']['id'] = 'field_apart_hoa_fee';
  $handler->display->display_options['fields']['field_apart_hoa_fee']['table'] = 'field_data_field_apart_hoa_fee';
  $handler->display->display_options['fields']['field_apart_hoa_fee']['field'] = 'field_apart_hoa_fee';
  $handler->display->display_options['fields']['field_apart_hoa_fee']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_apart_hoa_fee']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_apart_hoa_fee']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_apart_hoa_fee']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => ',',
    'scale' => '0',
    'prefix_suffix' => 1,
  );
  /* Feld: Inhalt: Net rent */
  $handler->display->display_options['fields']['field_apart_net_rent']['id'] = 'field_apart_net_rent';
  $handler->display->display_options['fields']['field_apart_net_rent']['table'] = 'field_data_field_apart_net_rent';
  $handler->display->display_options['fields']['field_apart_net_rent']['field'] = 'field_apart_net_rent';
  $handler->display->display_options['fields']['field_apart_net_rent']['label'] = 'Net rent (ca.)';
  $handler->display->display_options['fields']['field_apart_net_rent']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Feld: Inhalt: Maintenance reserve */
  $handler->display->display_options['fields']['field_apart_maintenance_reserve']['id'] = 'field_apart_maintenance_reserve';
  $handler->display->display_options['fields']['field_apart_maintenance_reserve']['table'] = 'field_data_field_apart_maintenance_reserve';
  $handler->display->display_options['fields']['field_apart_maintenance_reserve']['field'] = 'field_apart_maintenance_reserve';
  $handler->display->display_options['fields']['field_apart_maintenance_reserve']['label'] = 'Maintenance reserve (ca.)';
  $handler->display->display_options['fields']['field_apart_maintenance_reserve']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_apart_maintenance_reserve']['alter']['text'] = '[field_apart_maintenance_reserve] €/month';
  /* Feld: Inhalt: Maintenance reserve value */
  $handler->display->display_options['fields']['field_apart_maint_reserve_value']['id'] = 'field_apart_maint_reserve_value';
  $handler->display->display_options['fields']['field_apart_maint_reserve_value']['table'] = 'field_data_field_apart_maint_reserve_value';
  $handler->display->display_options['fields']['field_apart_maint_reserve_value']['field'] = 'field_apart_maint_reserve_value';
  $handler->display->display_options['fields']['field_apart_maint_reserve_value']['label'] = 'Maintenance reserve value (ca.)';
  /* Feld: Inhalt: Incidental cost */
  $handler->display->display_options['fields']['field_apart_incidental_cost']['id'] = 'field_apart_incidental_cost';
  $handler->display->display_options['fields']['field_apart_incidental_cost']['table'] = 'field_data_field_apart_incidental_cost';
  $handler->display->display_options['fields']['field_apart_incidental_cost']['field'] = 'field_apart_incidental_cost';
  $handler->display->display_options['fields']['field_apart_incidental_cost']['label'] = 'Incidental cost (ca.)';
  $handler->display->display_options['fields']['field_apart_incidental_cost']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_apart_incidental_cost']['alter']['text'] = '[field_apart_incidental_cost] €/month';
  $handler->display->display_options['fields']['field_apart_incidental_cost']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_apart_incidental_cost']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_apart_incidental_cost']['empty_zero'] = TRUE;
  /* Feld: Inhalt: Allocable incidental costs */
  $handler->display->display_options['fields']['field_apart_alloc_incident_costs']['id'] = 'field_apart_alloc_incident_costs';
  $handler->display->display_options['fields']['field_apart_alloc_incident_costs']['table'] = 'field_data_field_apart_alloc_incident_costs';
  $handler->display->display_options['fields']['field_apart_alloc_incident_costs']['field'] = 'field_apart_alloc_incident_costs';
  $handler->display->display_options['fields']['field_apart_alloc_incident_costs']['label'] = 'Allocable incidental costs (ca.)';
  $handler->display->display_options['fields']['field_apart_alloc_incident_costs']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => ',',
    'scale' => '0',
    'prefix_suffix' => 1,
  );
  /* Feld: Inhalt: Not allocable incidental costs */
  $handler->display->display_options['fields']['field_apart_nalloc_incid_cost']['id'] = 'field_apart_nalloc_incid_cost';
  $handler->display->display_options['fields']['field_apart_nalloc_incid_cost']['table'] = 'field_data_field_apart_nalloc_incid_cost';
  $handler->display->display_options['fields']['field_apart_nalloc_incid_cost']['field'] = 'field_apart_nalloc_incid_cost';
  $handler->display->display_options['fields']['field_apart_nalloc_incid_cost']['label'] = 'Not allocable incidental costs (ca.)';
  $handler->display->display_options['fields']['field_apart_nalloc_incid_cost']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => ',',
    'scale' => '0',
    'prefix_suffix' => 1,
  );
  /* Feld: Inhalt: Moving in from */
  $handler->display->display_options['fields']['field_moving_in_from_1']['id'] = 'field_moving_in_from_1';
  $handler->display->display_options['fields']['field_moving_in_from_1']['table'] = 'field_data_field_moving_in_from';
  $handler->display->display_options['fields']['field_moving_in_from_1']['field'] = 'field_moving_in_from';
  $handler->display->display_options['fields']['field_moving_in_from_1']['label'] = 'Bezugsfrei ab';
  $handler->display->display_options['fields']['field_moving_in_from_1']['element_label_colon'] = FALSE;
  /* Feld: Inhalt: Type */
  $handler->display->display_options['fields']['field_apart_type']['id'] = 'field_apart_type';
  $handler->display->display_options['fields']['field_apart_type']['table'] = 'field_data_field_apart_type';
  $handler->display->display_options['fields']['field_apart_type']['field'] = 'field_apart_type';
  $handler->display->display_options['fields']['field_apart_type']['label'] = 'Apartment type';
  $handler->display->display_options['fields']['field_apart_type']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_apart_type']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_apart_type']['type'] = 'taxonomy_term_reference_plain';
  /* Feld: Inhalt: Purchasing price parking lot */
  $handler->display->display_options['fields']['field_apart_price_parking']['id'] = 'field_apart_price_parking';
  $handler->display->display_options['fields']['field_apart_price_parking']['table'] = 'field_data_field_apart_price_parking';
  $handler->display->display_options['fields']['field_apart_price_parking']['field'] = 'field_apart_price_parking';
  $handler->display->display_options['fields']['field_apart_price_parking']['label'] = 'Preis Garage / Stellplatz';
  $handler->display->display_options['fields']['field_apart_price_parking']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_apart_price_parking']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => ',',
    'scale' => '0',
    'prefix_suffix' => 1,
  );
  /* Feld: Inhalt: Status quo */
  $handler->display->display_options['fields']['field_status_quo_1']['id'] = 'field_status_quo_1';
  $handler->display->display_options['fields']['field_status_quo_1']['table'] = 'field_data_field_status_quo';
  $handler->display->display_options['fields']['field_status_quo_1']['field'] = 'field_status_quo';
  $handler->display->display_options['fields']['field_status_quo_1']['element_label_colon'] = FALSE;
  /* Feld: Inhalt: Floor */
  $handler->display->display_options['fields']['field_apart_floor']['id'] = 'field_apart_floor';
  $handler->display->display_options['fields']['field_apart_floor']['table'] = 'field_data_field_apart_floor';
  $handler->display->display_options['fields']['field_apart_floor']['field'] = 'field_apart_floor';
  $handler->display->display_options['fields']['field_apart_floor']['label'] = 'Etage';
  $handler->display->display_options['fields']['field_apart_floor']['element_label_colon'] = FALSE;
  /* Feld: Inhalt: No. of floors */
  $handler->display->display_options['fields']['field_no_of_floors']['id'] = 'field_no_of_floors';
  $handler->display->display_options['fields']['field_no_of_floors']['table'] = 'field_data_field_no_of_floors';
  $handler->display->display_options['fields']['field_no_of_floors']['field'] = 'field_no_of_floors';
  $handler->display->display_options['fields']['field_no_of_floors']['relationship'] = 'field_object_ref_target_id';
  $handler->display->display_options['fields']['field_no_of_floors']['label'] = 'Etagenzahl';
  $handler->display->display_options['fields']['field_no_of_floors']['element_label_colon'] = FALSE;
  /* Feld: Inhalt: Year built */
  $handler->display->display_options['fields']['field_year_built']['id'] = 'field_year_built';
  $handler->display->display_options['fields']['field_year_built']['table'] = 'field_data_field_year_built';
  $handler->display->display_options['fields']['field_year_built']['field'] = 'field_year_built';
  $handler->display->display_options['fields']['field_year_built']['relationship'] = 'field_object_ref_target_id';
  $handler->display->display_options['fields']['field_year_built']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_year_built']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Feld: Inhalt: Endenergiebedarf */
  $handler->display->display_options['fields']['field_objekt_endenergiebedarf']['id'] = 'field_objekt_endenergiebedarf';
  $handler->display->display_options['fields']['field_objekt_endenergiebedarf']['table'] = 'field_data_field_objekt_endenergiebedarf';
  $handler->display->display_options['fields']['field_objekt_endenergiebedarf']['field'] = 'field_objekt_endenergiebedarf';
  $handler->display->display_options['fields']['field_objekt_endenergiebedarf']['relationship'] = 'field_object_ref_target_id';
  $handler->display->display_options['fields']['field_objekt_endenergiebedarf']['label'] = 'Final energy demand';
  $handler->display->display_options['fields']['field_objekt_endenergiebedarf']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_objekt_endenergiebedarf']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => ',',
    'scale' => '0',
    'prefix_suffix' => 1,
  );
  /* Feld: Inhalt: Energieausweistyp */
  $handler->display->display_options['fields']['field_objekt_energieausweistyp']['id'] = 'field_objekt_energieausweistyp';
  $handler->display->display_options['fields']['field_objekt_energieausweistyp']['table'] = 'field_data_field_objekt_energieausweistyp';
  $handler->display->display_options['fields']['field_objekt_energieausweistyp']['field'] = 'field_objekt_energieausweistyp';
  $handler->display->display_options['fields']['field_objekt_energieausweistyp']['relationship'] = 'field_object_ref_target_id';
  $handler->display->display_options['fields']['field_objekt_energieausweistyp']['label'] = 'Energy Performance Certificate';
  $handler->display->display_options['fields']['field_objekt_energieausweistyp']['element_label_colon'] = FALSE;
  /* Feld: Inhalt: Ausstelldatum */
  $handler->display->display_options['fields']['field_obj_enev_date']['id'] = 'field_obj_enev_date';
  $handler->display->display_options['fields']['field_obj_enev_date']['table'] = 'field_data_field_obj_enev_date';
  $handler->display->display_options['fields']['field_obj_enev_date']['field'] = 'field_obj_enev_date';
  $handler->display->display_options['fields']['field_obj_enev_date']['relationship'] = 'field_object_ref_target_id';
  $handler->display->display_options['fields']['field_obj_enev_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_obj_enev_date']['settings'] = array(
    'format_type' => 'datum_ohne_uhrzeit',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Feld: Inhalt: Energieeffizienzklasse */
  $handler->display->display_options['fields']['field_objekt_effizienzklasse']['id'] = 'field_objekt_effizienzklasse';
  $handler->display->display_options['fields']['field_objekt_effizienzklasse']['table'] = 'field_data_field_objekt_effizienzklasse';
  $handler->display->display_options['fields']['field_objekt_effizienzklasse']['field'] = 'field_objekt_effizienzklasse';
  $handler->display->display_options['fields']['field_objekt_effizienzklasse']['relationship'] = 'field_object_ref_target_id';
  $handler->display->display_options['fields']['field_objekt_effizienzklasse']['label'] = 'Energy efficiency class';
  $handler->display->display_options['fields']['field_objekt_effizienzklasse']['element_label_colon'] = FALSE;
  /* Feld: Inhalt: Energieträger */
  $handler->display->display_options['fields']['field_objekt_energietraeger']['id'] = 'field_objekt_energietraeger';
  $handler->display->display_options['fields']['field_objekt_energietraeger']['table'] = 'field_data_field_objekt_energietraeger';
  $handler->display->display_options['fields']['field_objekt_energietraeger']['field'] = 'field_objekt_energietraeger';
  $handler->display->display_options['fields']['field_objekt_energietraeger']['relationship'] = 'field_object_ref_target_id';
  $handler->display->display_options['fields']['field_objekt_energietraeger']['label'] = 'Energy sources';
  $handler->display->display_options['fields']['field_objekt_energietraeger']['element_label_colon'] = FALSE;
  $handler->display->display_options['pane_category']['name'] = 'Panel-Ansichten';

  /* Display: Objekt ID */
  $handler = $view->new_display('panel_pane', 'Objekt ID', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'objekt-id';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Feld: Inhalt: Objekt ID */
  $handler->display->display_options['fields']['field_objektid_nunumeric']['id'] = 'field_objektid_nunumeric';
  $handler->display->display_options['fields']['field_objektid_nunumeric']['table'] = 'field_data_field_objektid_nunumeric';
  $handler->display->display_options['fields']['field_objektid_nunumeric']['field'] = 'field_objektid_nunumeric';
  $handler->display->display_options['fields']['field_objektid_nunumeric']['relationship'] = 'field_object_ref_target_id';
  $handler->display->display_options['fields']['field_objektid_nunumeric']['label'] = '';
  $handler->display->display_options['fields']['field_objektid_nunumeric']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_objektid_nunumeric']['alter']['text'] = '[field_objektid_nunumeric-value]-';
  $handler->display->display_options['fields']['field_objektid_nunumeric']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_objektid_nunumeric']['element_default_classes'] = FALSE;
  $handler->display->display_options['pane_category']['name'] = 'Panel-Ansichten';

  /* Display: House description */
  $handler = $view->new_display('panel_pane', 'House description', 'description');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Beschreibung';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'aparttexts';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Feld: Inhalt: Category */
  $handler->display->display_options['fields']['field_kategorie']['id'] = 'field_kategorie';
  $handler->display->display_options['fields']['field_kategorie']['table'] = 'field_data_field_kategorie';
  $handler->display->display_options['fields']['field_kategorie']['field'] = 'field_kategorie';
  $handler->display->display_options['fields']['field_kategorie']['label'] = 'Kategorie';
  $handler->display->display_options['fields']['field_kategorie']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_kategorie']['type'] = 'taxonomy_term_reference_plain';
  /* Feld: Inhalt: House description */
  $handler->display->display_options['fields']['field_object_description']['id'] = 'field_object_description';
  $handler->display->display_options['fields']['field_object_description']['table'] = 'field_data_field_object_description';
  $handler->display->display_options['fields']['field_object_description']['field'] = 'field_object_description';
  $handler->display->display_options['fields']['field_object_description']['relationship'] = 'field_object_ref_target_id';
  $handler->display->display_options['fields']['field_object_description']['label'] = '';
  $handler->display->display_options['fields']['field_object_description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_object_description']['element_label_colon'] = FALSE;
  /* Feld: Inhalt: House Description Commercial */
  $handler->display->display_options['fields']['field_object_desc_commercial']['id'] = 'field_object_desc_commercial';
  $handler->display->display_options['fields']['field_object_desc_commercial']['table'] = 'field_data_field_object_desc_commercial';
  $handler->display->display_options['fields']['field_object_desc_commercial']['field'] = 'field_object_desc_commercial';
  $handler->display->display_options['fields']['field_object_desc_commercial']['relationship'] = 'field_object_ref_target_id';
  $handler->display->display_options['fields']['field_object_desc_commercial']['label'] = 'Beschreibung Gewerbe ';
  $handler->display->display_options['fields']['field_object_desc_commercial']['exclude'] = TRUE;
  /* Feld: Inhalt: House Description Investment */
  $handler->display->display_options['fields']['field_object_description_invest']['id'] = 'field_object_description_invest';
  $handler->display->display_options['fields']['field_object_description_invest']['table'] = 'field_data_field_object_description_invest';
  $handler->display->display_options['fields']['field_object_description_invest']['field'] = 'field_object_description_invest';
  $handler->display->display_options['fields']['field_object_description_invest']['relationship'] = 'field_object_ref_target_id';
  $handler->display->display_options['fields']['field_object_description_invest']['label'] = 'Beschreibung Vermietete Wohnungen';
  $handler->display->display_options['fields']['field_object_description_invest']['exclude'] = TRUE;
  /* Feld: Ansichten: Views Conditional */
  $handler->display->display_options['fields']['views_conditional']['id'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['table'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['field'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['label'] = '';
  $handler->display->display_options['fields']['views_conditional']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_conditional']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['views_conditional']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['views_conditional']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['views_conditional']['if'] = 'field_kategorie';
  $handler->display->display_options['fields']['views_conditional']['condition'] = '7';
  $handler->display->display_options['fields']['views_conditional']['equalto'] = 'capital';
  $handler->display->display_options['fields']['views_conditional']['then'] = '[field_object_description_invest]';
  $handler->display->display_options['fields']['views_conditional']['or'] = '0';
  $handler->display->display_options['fields']['views_conditional']['strip_tags'] = 0;
  /* Feld: Ansichten: Views Conditional */
  $handler->display->display_options['fields']['views_conditional_1']['id'] = 'views_conditional_1';
  $handler->display->display_options['fields']['views_conditional_1']['table'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional_1']['field'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional_1']['label'] = '';
  $handler->display->display_options['fields']['views_conditional_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_conditional_1']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['views_conditional_1']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['views_conditional_1']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['views_conditional_1']['if'] = 'field_kategorie';
  $handler->display->display_options['fields']['views_conditional_1']['condition'] = '7';
  $handler->display->display_options['fields']['views_conditional_1']['equalto'] = 'commercial';
  $handler->display->display_options['fields']['views_conditional_1']['then'] = '[field_object_desc_commercial]';
  $handler->display->display_options['fields']['views_conditional_1']['or'] = '0';
  $handler->display->display_options['fields']['views_conditional_1']['strip_tags'] = 0;
  /* Feld: Ansichten: Views Conditional */
  $handler->display->display_options['fields']['views_conditional_2']['id'] = 'views_conditional_2';
  $handler->display->display_options['fields']['views_conditional_2']['table'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional_2']['field'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional_2']['label'] = '';
  $handler->display->display_options['fields']['views_conditional_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_conditional_2']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['views_conditional_2']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['views_conditional_2']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['views_conditional_2']['if'] = 'field_kategorie';
  $handler->display->display_options['fields']['views_conditional_2']['condition'] = '7';
  $handler->display->display_options['fields']['views_conditional_2']['equalto'] = 'freehold';
  $handler->display->display_options['fields']['views_conditional_2']['then'] = '[field_object_description]';
  $handler->display->display_options['fields']['views_conditional_2']['or'] = '0';
  $handler->display->display_options['fields']['views_conditional_2']['strip_tags'] = 0;
  /* Feld: Ansichten: Views Conditional */
  $handler->display->display_options['fields']['views_conditional_3']['id'] = 'views_conditional_3';
  $handler->display->display_options['fields']['views_conditional_3']['table'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional_3']['field'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional_3']['label'] = '';
  $handler->display->display_options['fields']['views_conditional_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_conditional_3']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['views_conditional_3']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['views_conditional_3']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['views_conditional_3']['if'] = 'field_kategorie';
  $handler->display->display_options['fields']['views_conditional_3']['condition'] = '7';
  $handler->display->display_options['fields']['views_conditional_3']['equalto'] = 'gewerbe';
  $handler->display->display_options['fields']['views_conditional_3']['then'] = '[field_object_desc_commercial]';
  $handler->display->display_options['fields']['views_conditional_3']['or'] = '0';
  $handler->display->display_options['fields']['views_conditional_3']['strip_tags'] = 0;
  /* Feld: Ansichten: Views Conditional */
  $handler->display->display_options['fields']['views_conditional_4']['id'] = 'views_conditional_4';
  $handler->display->display_options['fields']['views_conditional_4']['table'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional_4']['field'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional_4']['label'] = '';
  $handler->display->display_options['fields']['views_conditional_4']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_conditional_4']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['views_conditional_4']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['views_conditional_4']['if'] = 'field_kategorie';
  $handler->display->display_options['fields']['views_conditional_4']['condition'] = '7';
  $handler->display->display_options['fields']['views_conditional_4']['equalto'] = 'bezugsfreie';
  $handler->display->display_options['fields']['views_conditional_4']['then'] = '[field_object_description]';
  $handler->display->display_options['fields']['views_conditional_4']['or'] = '0';
  $handler->display->display_options['fields']['views_conditional_4']['strip_tags'] = 0;
  /* Feld: Ansichten: Views Conditional */
  $handler->display->display_options['fields']['views_conditional_5']['id'] = 'views_conditional_5';
  $handler->display->display_options['fields']['views_conditional_5']['table'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional_5']['field'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional_5']['label'] = '';
  $handler->display->display_options['fields']['views_conditional_5']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_conditional_5']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['views_conditional_5']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['views_conditional_5']['if'] = 'field_kategorie';
  $handler->display->display_options['fields']['views_conditional_5']['condition'] = '7';
  $handler->display->display_options['fields']['views_conditional_5']['equalto'] = 'vermietet';
  $handler->display->display_options['fields']['views_conditional_5']['then'] = '[field_object_description_invest]';
  $handler->display->display_options['fields']['views_conditional_5']['or'] = '0';
  $handler->display->display_options['fields']['views_conditional_5']['strip_tags'] = 0;
  $handler->display->display_options['pane_category']['name'] = 'Panel-Ansichten';

  /* Display: Location */
  $handler = $view->new_display('panel_pane', 'Location', 'panel_pane_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Standort';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'aparttexts';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Feld: Inhalt: Location */
  $handler->display->display_options['fields']['field_object_location']['id'] = 'field_object_location';
  $handler->display->display_options['fields']['field_object_location']['table'] = 'field_data_field_object_location';
  $handler->display->display_options['fields']['field_object_location']['field'] = 'field_object_location';
  $handler->display->display_options['fields']['field_object_location']['relationship'] = 'field_object_ref_target_id';
  $handler->display->display_options['fields']['field_object_location']['exclude'] = TRUE;
  /* Feld: Inhalt: Apartment location */
  $handler->display->display_options['fields']['field_apart_location']['id'] = 'field_apart_location';
  $handler->display->display_options['fields']['field_apart_location']['table'] = 'field_data_field_apart_location';
  $handler->display->display_options['fields']['field_apart_location']['field'] = 'field_apart_location';
  $handler->display->display_options['fields']['field_apart_location']['label'] = '';
  $handler->display->display_options['fields']['field_apart_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_apart_location']['empty'] = '[field_object_location]';
  $handler->display->display_options['fields']['field_apart_location']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['pane_category']['name'] = 'Panel-Ansichten';

  /* Display: Other */
  $handler = $view->new_display('panel_pane', 'Other', 'panel_pane_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Andere';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'aparttexts';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Feld: Inhalt: Other */
  $handler->display->display_options['fields']['field_object_other']['id'] = 'field_object_other';
  $handler->display->display_options['fields']['field_object_other']['table'] = 'field_data_field_object_other';
  $handler->display->display_options['fields']['field_object_other']['field'] = 'field_object_other';
  $handler->display->display_options['fields']['field_object_other']['relationship'] = 'field_object_ref_target_id';
  $handler->display->display_options['fields']['field_object_other']['label'] = '';
  $handler->display->display_options['fields']['field_object_other']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_object_other']['element_label_colon'] = FALSE;
  /* Feld: Inhalt: Apartment other */
  $handler->display->display_options['fields']['field_apart_other']['id'] = 'field_apart_other';
  $handler->display->display_options['fields']['field_apart_other']['table'] = 'field_data_field_apart_other';
  $handler->display->display_options['fields']['field_apart_other']['field'] = 'field_apart_other';
  $handler->display->display_options['fields']['field_apart_other']['label'] = '';
  $handler->display->display_options['fields']['field_apart_other']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_apart_other']['empty'] = '[field_object_other]';
  $handler->display->display_options['fields']['field_apart_other']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['pane_category']['name'] = 'Panel-Ansichten';

  /* Display: Objektadresse */
  $handler = $view->new_display('panel_pane', 'Objektadresse', 'objektadresse');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'apartaddress';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Feld: Inhalt: Address - Strasse Nr. */
  $handler->display->display_options['fields']['field_address_thoroughfare']['id'] = 'field_address_thoroughfare';
  $handler->display->display_options['fields']['field_address_thoroughfare']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_thoroughfare']['field'] = 'field_address_thoroughfare';
  $handler->display->display_options['fields']['field_address_thoroughfare']['relationship'] = 'field_object_ref_target_id';
  $handler->display->display_options['fields']['field_address_thoroughfare']['label'] = '';
  $handler->display->display_options['fields']['field_address_thoroughfare']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_address_thoroughfare']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_address_thoroughfare']['alter']['text'] = '<i class="icon-hk-icon-location"></i>[field_address_thoroughfare]';
  $handler->display->display_options['fields']['field_address_thoroughfare']['element_label_colon'] = FALSE;
  /* Feld: Inhalt: Address - PLZ */
  $handler->display->display_options['fields']['field_address_postal_code']['id'] = 'field_address_postal_code';
  $handler->display->display_options['fields']['field_address_postal_code']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_postal_code']['field'] = 'field_address_postal_code';
  $handler->display->display_options['fields']['field_address_postal_code']['relationship'] = 'field_object_ref_target_id';
  $handler->display->display_options['fields']['field_address_postal_code']['label'] = '';
  $handler->display->display_options['fields']['field_address_postal_code']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_address_postal_code']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address_postal_code']['element_default_classes'] = FALSE;
  /* Feld: Inhalt: Address - Ort (z.B. Stadt) */
  $handler->display->display_options['fields']['field_address_locality']['id'] = 'field_address_locality';
  $handler->display->display_options['fields']['field_address_locality']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_locality']['field'] = 'field_address_locality';
  $handler->display->display_options['fields']['field_address_locality']['relationship'] = 'field_object_ref_target_id';
  $handler->display->display_options['fields']['field_address_locality']['label'] = '';
  $handler->display->display_options['fields']['field_address_locality']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_address_locality']['alter']['text'] = '[field_address_thoroughfare], [field_address_postal_code] [field_address_locality] ';
  $handler->display->display_options['fields']['field_address_locality']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Kontextfilter: Inhalt: Beitrags-ID */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['nid']['default_argument_options']['index'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'apartment' => 'apartment',
  );
  $handler->display->display_options['pane_category']['name'] = 'Panel-Ansichten';
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'context',
      'context' => 'entity:node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Nid',
    ),
  );

  /* Display: Thumbslider */
  $handler = $view->new_display('panel_pane', 'Thumbslider', 'thumbslider');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Thumbslider';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'flexslider';
  $handler->display->display_options['style_options']['optionset'] = 'thumbslider';
  $handler->display->display_options['style_options']['id'] = 'thumbslide';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Feld: Inhalt: Object images */
  $handler->display->display_options['fields']['field_object_images']['id'] = 'field_object_images';
  $handler->display->display_options['fields']['field_object_images']['table'] = 'field_data_field_object_images';
  $handler->display->display_options['fields']['field_object_images']['field'] = 'field_object_images';
  $handler->display->display_options['fields']['field_object_images']['label'] = '';
  $handler->display->display_options['fields']['field_object_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_object_images']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_object_images']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_object_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_object_images']['settings'] = array(
    'image_style' => 'flexslider_thumbnail',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_object_images']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_object_images']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_object_images']['multi_type'] = 'ul';
  /* Feld: Inhalt: Galerie */
  $handler->display->display_options['fields']['field_apart_gallery']['id'] = 'field_apart_gallery';
  $handler->display->display_options['fields']['field_apart_gallery']['table'] = 'field_data_field_apart_gallery';
  $handler->display->display_options['fields']['field_apart_gallery']['field'] = 'field_apart_gallery';
  $handler->display->display_options['fields']['field_apart_gallery']['label'] = '';
  $handler->display->display_options['fields']['field_apart_gallery']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_apart_gallery']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_apart_gallery']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_apart_gallery']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_apart_gallery']['settings'] = array(
    'image_style' => 'flexslider_thumbnail',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_apart_gallery']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_apart_gallery']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_apart_gallery']['multi_type'] = 'ul';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Kontextfilter: Inhalt: Beitrags-ID */
  $handler->display->display_options['arguments']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['arguments']['nid_1']['table'] = 'node';
  $handler->display->display_options['arguments']['nid_1']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid_1']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid_1']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['nid_1']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid_1']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid_1']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid_1']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid_1']['validate_options']['types'] = array(
    'apartment' => 'apartment',
    'objekt' => 'objekt',
  );
  $handler->display->display_options['arguments']['nid_1']['validate']['fail'] = 'access denied';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterium: Inhalt: Typ */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'objekt' => 'objekt',
    'apartment' => 'apartment',
  );
  $handler->display->display_options['pane_category']['name'] = 'Panel-Ansichten';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Slideshow */
  $handler = $view->new_display('panel_pane', 'Slideshow', 'slideshow');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Slideshow';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'slideshow';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'flexslider';
  $handler->display->display_options['style_options']['optionset'] = 'wohnungsansicht';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Feld: Inhalt: Galerie */
  $handler->display->display_options['fields']['field_apart_gallery']['id'] = 'field_apart_gallery';
  $handler->display->display_options['fields']['field_apart_gallery']['table'] = 'field_data_field_apart_gallery';
  $handler->display->display_options['fields']['field_apart_gallery']['field'] = 'field_apart_gallery';
  $handler->display->display_options['fields']['field_apart_gallery']['label'] = '';
  $handler->display->display_options['fields']['field_apart_gallery']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_apart_gallery']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_apart_gallery']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_apart_gallery']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_apart_gallery']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_apart_gallery']['type'] = 'picture';
  $handler->display->display_options['fields']['field_apart_gallery']['settings'] = array(
    'picture_mapping' => 'flexfull_mapping',
    'fallback_image_style' => '',
    'image_link' => 'colorbox',
    'colorbox_settings' => array(
      'colorbox_group' => 'colorbox_mapping',
      'colorbox_gallery' => 'page',
      'colorbox_gallery_custom' => '',
      'colorbox_caption' => 'title',
      'colorbox_caption_custom' => '',
    ),
  );
  $handler->display->display_options['fields']['field_apart_gallery']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_apart_gallery']['delta_offset'] = '0';
  /* Feld: Inhalt: Object images */
  $handler->display->display_options['fields']['field_object_images']['id'] = 'field_object_images';
  $handler->display->display_options['fields']['field_object_images']['table'] = 'field_data_field_object_images';
  $handler->display->display_options['fields']['field_object_images']['field'] = 'field_object_images';
  $handler->display->display_options['fields']['field_object_images']['label'] = '';
  $handler->display->display_options['fields']['field_object_images']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_object_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_object_images']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_object_images']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_object_images']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_object_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_object_images']['type'] = 'picture';
  $handler->display->display_options['fields']['field_object_images']['settings'] = array(
    'picture_mapping' => 'flexfull_mapping',
    'fallback_image_style' => '',
    'image_link' => 'colorbox',
    'colorbox_settings' => array(
      'colorbox_group' => 'colorbox_mapping',
      'colorbox_gallery' => 'page',
      'colorbox_gallery_custom' => '',
      'colorbox_caption' => 'title',
      'colorbox_caption_custom' => '',
    ),
  );
  $handler->display->display_options['fields']['field_object_images']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_object_images']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Kontextfilter: Inhalt: Beitrags-ID */
  $handler->display->display_options['arguments']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['arguments']['nid_1']['table'] = 'node';
  $handler->display->display_options['arguments']['nid_1']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid_1']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid_1']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['nid_1']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid_1']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid_1']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid_1']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid_1']['validate_options']['types'] = array(
    'apartment' => 'apartment',
    'objekt' => 'objekt',
  );
  $handler->display->display_options['arguments']['nid_1']['validate']['fail'] = 'access denied';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterium: Inhalt: Typ */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'objekt' => 'objekt',
    'apartment' => 'apartment',
  );
  $handler->display->display_options['pane_category']['name'] = 'Panel-Ansichten';
  $handler->display->display_options['argument_input'] = array(
    'nid_1' => array(
      'type' => 'none',
      'context' => 'entity:crm_core_activity.activity-id',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Nid',
    ),
  );
  $export['apartment'] = $view;

  $view = new view();
  $view->name = 'merkliste';
  $view->description = 'Merkliste von mit Flags erzeugten Favoriten';
  $view->tag = 'hk';
  $view->base_table = 'node';
  $view->human_name = 'Favoriten';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Ausgewählte Favoriten';
  $handler->display->display_options['css_class'] = 'favoriten';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mehr';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Anwenden';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Zurücksetzen';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortieren nach';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Aufsteigend';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Absteigend';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elemente pro Seite';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« erste Seite';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ vorherige Seite';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'nächste Seite ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'letzte Seite »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'ds';
  $handler->display->display_options['row_options']['load_comments'] = 0;
  $handler->display->display_options['row_options']['alternating'] = 0;
  $handler->display->display_options['row_options']['grouping'] = 0;
  $handler->display->display_options['row_options']['advanced'] = 0;
  $handler->display->display_options['row_options']['delta_fieldset']['delta_fields'] = array();
  $handler->display->display_options['row_options']['grouping_fieldset']['group_field'] = 'node|created';
  $handler->display->display_options['row_options']['default_fieldset']['view_mode'] = 'teaser';
  /* Verhalten, wenn keine Ergebnisse vorliegen: Global: Textbereich */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'Favoriten Platzhalter Text';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'You didn\'t chose any favorites yet. When you click on the star in the top right corner of an offer, it will get saved to your favorites here. Try it, and send us your favorites to make an appointment with the handy inquiry button. ';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Beziehung: Flags: merken Zähler */
  $handler->display->display_options['relationships']['flag_count_rel']['id'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_count_rel']['field'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel']['label'] = 'Merkliste Zähler';
  $handler->display->display_options['relationships']['flag_count_rel']['flag'] = 'merken';
  /* Beziehung: Flags: merken */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['label'] = 'flaged by current user';
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'merken';
  /* Sortierkriterien: Inhalt: Beitragsdatum */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filterkriterium: Inhalt: Veröffentlicht */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterium: Inhalt: Typ */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'apartment' => 'apartment',
  );
  $handler->display->display_options['use_ajax_flags'] = array(
    'merken' => 'merken',
    'bookmarks' => 0,
  );
  $handler->display->display_options['use_ajax_flags_widget'] = 'throbber';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['use_ajax_flags'] = array(
    'merken' => 'merken',
    'bookmarks' => 0,
  );
  $handler->display->display_options['use_ajax_flags_widget'] = 'throbber';
  $handler->display->display_options['path'] = 'favorites';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elemente pro Seite';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« erste Seite';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ vorherige Seite';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'nächste Seite ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'letzte Seite »';
  $handler->display->display_options['use_ajax_flags'] = array(
    'merken' => 'merken',
    'bookmarks' => 0,
  );
  $handler->display->display_options['use_ajax_flags_widget'] = 'throbber';

  /* Display: Rules */
  $handler = $view->new_display('views_rules', 'Rules', 'views_rules_favoriten');

  /* Display: Attachment */
  $handler = $view->new_display('attachment', 'Attachment', 'attachment_1');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Feld: Inhalt: Beitrags-ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_rel'] = '';
  /* Feld: Global: Benutzerdefinierter Text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="/anfrage?field_angefragte_wohnung=[nid]&width=800&height=600&destination=/favoriten" class="colorbox-node btn full">Inquiry</a>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['hide_empty'] = TRUE;
  $handler->display->display_options['merge_rows'] = TRUE;
  $handler->display->display_options['field_config'] = array(
    'nid' => array(
      'merge_option' => 'merge',
      'separator' => ',',
    ),
    'nothing' => array(
      'merge_option' => 'merge',
      'separator' => '',
    ),
  );
  $handler->display->display_options['displays'] = array(
    'default' => 'default',
    'page' => 0,
    'block' => 0,
  );
  $export['merkliste'] = $view;

  return $export;
}
