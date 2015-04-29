<?php
/**
 * @file
 * hk_ct.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function hk_ct_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'body'
  $field_bases['body'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'node',
    ),
    'field_name' => 'body',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 1,
    'type' => 'text_with_summary',
  );

  // Exported field_base: 'description_field'
  $field_bases['description_field'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'description_field',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 1,
    'type' => 'text_with_summary',
  );

  // Exported field_base: 'field_address'
  $field_bases['field_address'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_address',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'addressfield',
    'settings' => array(
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'addressfield',
  );

  // Exported field_base: 'field_ansprechpartner'
  $field_bases['field_ansprechpartner'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_ansprechpartner',
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'handler' => 'base',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'sort' => array(
          'type' => 'none',
        ),
        'target_bundles' => array(
          'individual' => 'individual',
        ),
      ),
      'target_type' => 'crm_core_contact',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  // Exported field_base: 'field_apart_bathrooms'
  $field_bases['field_apart_bathrooms'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_apart_bathrooms',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'number_integer',
  );

  // Exported field_base: 'field_apart_commission'
  $field_bases['field_apart_commission'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_apart_commission',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(
      'decimal_separator' => ',',
      'entity_translation_sync' => FALSE,
      'precision' => 10,
      'scale' => 2,
    ),
    'translatable' => 1,
    'type' => 'number_decimal',
  );

  // Exported field_base: 'field_apart_description'
  $field_bases['field_apart_description'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_apart_description',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 1,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_apart_expose'
  $field_bases['field_apart_expose'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_apart_expose',
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'file',
    'settings' => array(
      'display_default' => 0,
      'display_field' => 0,
      'entity_translation_sync' => array(
        0 => 'fid',
      ),
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'file',
  );

  // Exported field_base: 'field_apart_floor'
  $field_bases['field_apart_floor'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_apart_floor',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_apart_floor_plan'
  $field_bases['field_apart_floor_plan'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_apart_floor_plan',
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'image',
    'settings' => array(
      'default_image' => 0,
      'entity_translation_sync' => array(
        0 => 'fid',
      ),
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'image',
  );

  // Exported field_base: 'field_apart_hoa_fee'
  $field_bases['field_apart_hoa_fee'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_apart_hoa_fee',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(
      'decimal_separator' => ',',
      'entity_translation_sync' => FALSE,
      'precision' => 10,
      'scale' => 2,
    ),
    'translatable' => 0,
    'type' => 'number_decimal',
  );

  // Exported field_base: 'field_apart_living_space'
  $field_bases['field_apart_living_space'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_apart_living_space',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(
      'decimal_separator' => ',',
      'entity_translation_sync' => FALSE,
      'precision' => 10,
      'scale' => 0,
    ),
    'translatable' => 0,
    'type' => 'number_decimal',
  );

  // Exported field_base: 'field_apart_location'
  $field_bases['field_apart_location'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_apart_location',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 1,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_apart_net_rent'
  $field_bases['field_apart_net_rent'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_apart_net_rent',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(
      'decimal_separator' => '.',
      'entity_translation_sync' => FALSE,
      'precision' => 10,
      'scale' => 2,
    ),
    'translatable' => 0,
    'type' => 'number_decimal',
  );

  // Exported field_base: 'field_apart_no'
  $field_bases['field_apart_no'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_apart_no',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_apart_other'
  $field_bases['field_apart_other'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_apart_other',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 1,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_apart_pictures'
  $field_bases['field_apart_pictures'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_apart_pictures',
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'image',
    'settings' => array(
      'default_image' => 0,
      'entity_translation_sync' => array(
        0 => 'fid',
      ),
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'image',
  );

  // Exported field_base: 'field_apart_price'
  $field_bases['field_apart_price'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_apart_price',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(
      'decimal_separator' => ',',
      'entity_translation_sync' => FALSE,
      'precision' => 10,
      'scale' => 0,
    ),
    'translatable' => 0,
    'type' => 'number_decimal',
  );

  // Exported field_base: 'field_apart_price_parking'
  $field_bases['field_apart_price_parking'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_apart_price_parking',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(
      'decimal_separator' => ',',
      'entity_translation_sync' => FALSE,
      'precision' => 10,
      'scale' => 0,
    ),
    'translatable' => 0,
    'type' => 'number_decimal',
  );

  // Exported field_base: 'field_apart_rate_of_return'
  $field_bases['field_apart_rate_of_return'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_apart_rate_of_return',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(
      'decimal_separator' => '.',
      'entity_translation_sync' => FALSE,
      'precision' => 10,
      'scale' => 2,
    ),
    'translatable' => 0,
    'type' => 'number_decimal',
  );

  // Exported field_base: 'field_apart_rooms'
  $field_bases['field_apart_rooms'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_apart_rooms',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'number_integer',
  );

  // Exported field_base: 'field_apart_sleeping_rooms'
  $field_bases['field_apart_sleeping_rooms'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_apart_sleeping_rooms',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'number_integer',
  );

  // Exported field_base: 'field_apart_type'
  $field_bases['field_apart_type'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_apart_type',
    'indexes' => array(
      'tid' => array(
        0 => 'tid',
      ),
    ),
    'locked' => 0,
    'module' => 'taxonomy',
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'vocabulary_6',
          'parent' => 0,
        ),
      ),
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'taxonomy_term_reference',
  );

  // Exported field_base: 'field_ausstattung'
  $field_bases['field_ausstattung'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_ausstattung',
    'indexes' => array(
      'tid' => array(
        0 => 'tid',
      ),
    ),
    'locked' => 0,
    'module' => 'taxonomy',
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'vocabulary_5',
          'parent' => 0,
        ),
      ),
      'entity_translation_sync' => FALSE,
      'options_list_callback' => NULL,
    ),
    'translatable' => 1,
    'type' => 'taxonomy_term_reference',
    'type_name' => 'wohnung',
  );

  // Exported field_base: 'field_bezirk'
  $field_bases['field_bezirk'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_bezirk',
    'indexes' => array(
      'tid' => array(
        0 => 'tid',
      ),
    ),
    'locked' => 0,
    'module' => 'taxonomy',
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'vocabulary_3',
          'parent' => 0,
        ),
      ),
      'entity_translation_sync' => FALSE,
      'options_list_callback' => NULL,
    ),
    'translatable' => 1,
    'type' => 'taxonomy_term_reference',
    'type_name' => 'residential_commercial_building',
  );

  // Exported field_base: 'field_bild'
  $field_bases['field_bild'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_bild',
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'image',
    'settings' => array(
      'default_image' => 0,
      'description_field' => 0,
      'entity_translation_sync' => array(
        0 => 'fid',
      ),
      'list_default' => 1,
      'list_field' => 0,
      'semantic_cck_field_settings' => array(
        'enabled' => 0,
        'field_class' => 'right',
        'field_element' => 'div',
        'field_prefix' => '',
        'field_suffix' => '',
        'first_class' => 'first',
        'label_class_above' => '',
        'label_class_inline' => '',
        'label_element_above' => 'h3',
        'label_element_inline' => 'span',
        'label_suffix_above' => '',
        'label_suffix_inline' => ':',
        'last_class' => 'last',
        'last_every_nth' => 0,
        'multiple_item_class' => '',
        'multiple_item_element' => 'div',
        'multiple_item_separator' => '',
        'multiple_items_class' => '',
        'multiple_items_element' => 'div',
        'single_item_class' => '',
        'single_item_element' => 'div',
        'striping_classes' => 'odd even',
        'use_singlevalue_settings' => 0,
      ),
      'uri_scheme' => 'public',
    ),
    'translatable' => 1,
    'type' => 'image',
    'type_name' => 'page',
  );

  // Exported field_base: 'field_developer'
  $field_bases['field_developer'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_developer',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_heating_type'
  $field_bases['field_heating_type'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_heating_type',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'Central heating' => 'Central heating',
        'Central oil heating' => 'Central oil heating',
        'Self-contained central heating' => 'Self-contained central heating',
        'Self-contained gas heating' => 'Self-contained gas heating',
        'District heating' => 'District heating',
      ),
      'allowed_values_function' => '',
      'allowed_values_no_localization' => 0,
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 1,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_kategorie'
  $field_bases['field_kategorie'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_kategorie',
    'indexes' => array(
      'tid' => array(
        0 => 'tid',
      ),
    ),
    'locked' => 0,
    'module' => 'taxonomy',
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'category',
          'parent' => 0,
        ),
      ),
      'entity_translation_sync' => FALSE,
      'options_list_callback' => NULL,
    ),
    'translatable' => 1,
    'type' => 'taxonomy_term_reference',
  );

  // Exported field_base: 'field_moving_in_from'
  $field_bases['field_moving_in_from'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_moving_in_from',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_no_of_floors'
  $field_bases['field_no_of_floors'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_no_of_floors',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_obj_apartments'
  $field_bases['field_obj_apartments'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_obj_apartments',
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'handler' => 'base',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'sort' => array(
          'type' => 'none',
        ),
        'target_bundles' => array(
          'apartment' => 'apartment',
        ),
      ),
      'target_type' => 'node',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  // Exported field_base: 'field_object_desc_commercial'
  $field_bases['field_object_desc_commercial'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_object_desc_commercial',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 1,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_object_description'
  $field_bases['field_object_description'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_object_description',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 1,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_object_description_invest'
  $field_bases['field_object_description_invest'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_object_description_invest',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 1,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_object_images'
  $field_bases['field_object_images'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_object_images',
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'image',
    'settings' => array(
      'default_image' => 0,
      'entity_translation_sync' => array(
        0 => 'fid',
      ),
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'image',
  );

  // Exported field_base: 'field_object_location'
  $field_bases['field_object_location'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_object_location',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 1,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_object_multi_apart_types'
  $field_bases['field_object_multi_apart_types'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_object_multi_apart_types',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => 'nein',
        1 => 'ja',
      ),
      'allowed_values_function' => '',
      'allowed_values_no_localization' => 0,
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'list_boolean',
  );

  // Exported field_base: 'field_object_other'
  $field_bases['field_object_other'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_object_other',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 1,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_object_ref'
  $field_bases['field_object_ref'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_object_ref',
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'handler' => 'base',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'sort' => array(
          'type' => 'none',
        ),
        'target_bundles' => array(
          'objekt' => 'objekt',
        ),
      ),
      'target_type' => 'node',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  // Exported field_base: 'field_objekt_wkt'
  $field_bases['field_objekt_wkt'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_objekt_wkt',
    'indexes' => array(
      'bbox' => array(
        0 => 'top',
        1 => 'bottom',
        2 => 'left',
        3 => 'right',
      ),
      'bottom' => array(
        0 => 'bottom',
      ),
      'centroid' => array(
        0 => 'lat',
        1 => 'lon',
      ),
      'geohash' => array(
        0 => 'geohash',
      ),
      'lat' => array(
        0 => 'lat',
      ),
      'left' => array(
        0 => 'left',
      ),
      'lon' => array(
        0 => 'lon',
      ),
      'right' => array(
        0 => 'right',
      ),
      'top' => array(
        0 => 'top',
      ),
    ),
    'locked' => 0,
    'module' => 'geofield',
    'settings' => array(
      'backend' => 'default',
      'entity_translation_sync' => FALSE,
      'openlayers_cck_feature_types' => array(
        'path' => 0,
        'point' => 'point',
        'polygon' => 0,
      ),
      'semantic_cck_field_settings' => array(
        'enabled' => 0,
        'field_class' => '',
        'field_element' => 'div',
        'field_prefix' => '',
        'field_suffix' => '',
        'first_class' => 'first',
        'label_class_above' => '',
        'label_class_inline' => '',
        'label_element_above' => 'h3',
        'label_element_inline' => 'span',
        'label_suffix_above' => '',
        'label_suffix_inline' => ':',
        'last_class' => 'last',
        'last_every_nth' => 0,
        'multiple_item_class' => '',
        'multiple_item_element' => 'div',
        'multiple_item_separator' => '',
        'multiple_items_class' => '',
        'multiple_items_element' => 'div',
        'single_item_class' => '',
        'single_item_element' => 'div',
        'striping_classes' => 'odd even',
        'use_singlevalue_settings' => 0,
      ),
      'srid' => 4326,
    ),
    'translatable' => 0,
    'type' => 'geofield',
    'type_name' => 'residential_commercial_building',
  );

  // Exported field_base: 'field_objektid_nunumeric'
  $field_bases['field_objektid_nunumeric'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_objektid_nunumeric',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'allowed_values' => '',
      'allowed_values_php' => '',
      'entity_translation_sync' => FALSE,
      'max_length' => 255,
      'semantic_cck_field_settings' => array(
        'enabled' => 0,
        'field_class' => '',
        'field_element' => '',
        'field_prefix' => '',
        'field_suffix' => '',
        'first_class' => 'first',
        'label_class_above' => '',
        'label_class_inline' => '',
        'label_element_above' => 'h3',
        'label_element_inline' => 'span',
        'label_suffix_above' => '',
        'label_suffix_inline' => ':',
        'last_class' => 'last',
        'last_every_nth' => 0,
        'multiple_item_class' => '',
        'multiple_item_element' => 'div',
        'multiple_item_separator' => '',
        'multiple_items_class' => '',
        'multiple_items_element' => 'div',
        'single_item_class' => '',
        'single_item_element' => 'div',
        'striping_classes' => 'odd even',
        'use_singlevalue_settings' => 0,
      ),
      'text_processing' => 0,
    ),
    'translatable' => 0,
    'type' => 'text',
    'type_name' => 'wohnung',
  );

  // Exported field_base: 'field_rent_commission'
  $field_bases['field_rent_commission'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_rent_commission',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_sale_commission'
  $field_bases['field_sale_commission'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_sale_commission',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_status_quo'
  $field_bases['field_status_quo'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_status_quo',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'First Occupancy' => 'First Occupancy',
        'First Occupancy after Renovation' => 'First Occupancy after Renovation',
        'Well-Tended' => 'Well-Tended',
        'Normal' => 'Normal',
        'Well preserved' => 'Well preserved',
        'Like New' => 'Like New',
        'Modernised' => 'Modernised',
        'Completely Refurbished' => 'Completely Refurbished',
        'Partially restored' => 'Partially restored',
        'Renovated' => 'Renovated',
        'No Information' => 'No Information',
      ),
      'allowed_values_function' => '',
      'allowed_values_no_localization' => 0,
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 1,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_topobjekt'
  $field_bases['field_topobjekt'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_topobjekt',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'allowed_values' => '',
      'allowed_values_php' => '',
      'entity_translation_sync' => FALSE,
      'max_length' => 100,
      'semantic_cck_field_settings' => array(
        'enabled' => 0,
        'field_class' => '',
        'field_element' => '',
        'field_prefix' => '',
        'field_suffix' => '',
        'first_class' => 'first',
        'label_class_above' => '',
        'label_class_inline' => '',
        'label_element_above' => 'h3',
        'label_element_inline' => 'span',
        'label_suffix_above' => '',
        'label_suffix_inline' => ':',
        'last_class' => 'last',
        'last_every_nth' => 0,
        'multiple_item_class' => '',
        'multiple_item_element' => 'div',
        'multiple_item_separator' => '',
        'multiple_items_class' => '',
        'multiple_items_element' => 'div',
        'single_item_class' => '',
        'single_item_element' => 'div',
        'striping_classes' => 'odd even',
        'use_singlevalue_settings' => 0,
      ),
      'text_processing' => 1,
    ),
    'translatable' => 0,
    'type' => 'text',
    'type_name' => 'objekt',
  );

  // Exported field_base: 'field_wug_act_rent'
  $field_bases['field_wug_act_rent'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_wug_act_rent',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(
      'allowed_values' => array(),
      'allowed_values_php' => '',
      'decimal_separator' => '.',
      'entity_translation_sync' => FALSE,
      'max' => '',
      'min' => '',
      'precision' => 14,
      'prefix' => '',
      'scale' => 2,
      'semantic_cck_field_settings' => array(
        'enabled' => 0,
        'field_class' => '',
        'field_element' => 'div',
        'field_prefix' => '',
        'field_suffix' => '',
        'first_class' => 'first',
        'label_class_above' => '',
        'label_class_inline' => '',
        'label_element_above' => 'h3',
        'label_element_inline' => 'span',
        'label_suffix_above' => '',
        'label_suffix_inline' => ':',
        'last_class' => 'last',
        'last_every_nth' => 0,
        'multiple_item_class' => '',
        'multiple_item_element' => 'div',
        'multiple_item_separator' => '',
        'multiple_items_class' => '',
        'multiple_items_element' => 'div',
        'single_item_class' => '',
        'single_item_element' => 'div',
        'striping_classes' => 'odd even',
        'use_singlevalue_settings' => 0,
      ),
      'suffix' => '€',
    ),
    'translatable' => 0,
    'type' => 'number_decimal',
    'type_name' => 'residential_commercial_building',
  );

  // Exported field_base: 'field_wug_no_of_units'
  $field_bases['field_wug_no_of_units'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_wug_no_of_units',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'number_integer',
  );

  // Exported field_base: 'field_wug_occupancy'
  $field_bases['field_wug_occupancy'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_wug_occupancy',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(
      'allowed_values' => array(),
      'allowed_values_php' => '',
      'entity_translation_sync' => FALSE,
      'max' => '',
      'min' => '',
      'prefix' => '',
      'semantic_cck_field_settings' => array(
        'enabled' => 0,
        'field_class' => '',
        'field_element' => 'div',
        'field_prefix' => '',
        'field_suffix' => '',
        'first_class' => 'first',
        'label_class_above' => '',
        'label_class_inline' => '',
        'label_element_above' => 'h3',
        'label_element_inline' => 'span',
        'label_suffix_above' => '',
        'label_suffix_inline' => ':',
        'last_class' => 'last',
        'last_every_nth' => 0,
        'multiple_item_class' => '',
        'multiple_item_element' => 'div',
        'multiple_item_separator' => '',
        'multiple_items_class' => '',
        'multiple_items_element' => 'div',
        'single_item_class' => '',
        'single_item_element' => 'div',
        'striping_classes' => 'odd even',
        'use_singlevalue_settings' => 0,
      ),
      'suffix' => ' %',
    ),
    'translatable' => 0,
    'type' => 'number_integer',
    'type_name' => 'residential_commercial_building',
  );

  // Exported field_base: 'field_wug_opt_constrruct'
  $field_bases['field_wug_opt_constrruct'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_wug_opt_constrruct',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'number_integer',
  );

  // Exported field_base: 'field_wug_total_space'
  $field_bases['field_wug_total_space'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_wug_total_space',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'number_integer',
  );

  // Exported field_base: 'field_year_built'
  $field_bases['field_year_built'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_year_built',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'number_integer',
  );

  // Exported field_base: 'name_field'
  $field_bases['name_field'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'name_field',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max_length' => 255,
    ),
    'translatable' => 1,
    'type' => 'text',
  );

  // Exported field_base: 'title_field'
  $field_bases['title_field'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'title_field',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max_length' => 255,
    ),
    'translatable' => 1,
    'type' => 'text',
  );

  return $field_bases;
}
