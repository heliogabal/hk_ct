<?php
/**
 * @file
 * hk_ct.default_picture_mapping.inc
 */

/**
 * Implements hook_default_picture_mapping().
 */
function hk_ct_default_picture_mapping() {
  $export = array();

  $picture_mapping = new PictureMapping();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 2;
  $picture_mapping->label = 'Colorbox Mapping';
  $picture_mapping->machine_name = 'colorbox_mapping';
  $picture_mapping->breakpoint_group = 'hk_theme';
  $picture_mapping->mapping = array(
    'breakpoints.theme.hk_theme.tv' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => '_original image_',
      ),
    ),
    'breakpoints.theme.hk_theme.wide' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'colorboxbreakpoints_theme_hk_theme_wide_1x',
      ),
    ),
    'breakpoints.theme.hk_theme.desk' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'colorboxbreakpoints_theme_hk_theme_desk_1x',
      ),
    ),
    'breakpoints.theme.hk_theme.narrow' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'colorboxbreakpoints_theme_hk_theme_narrow_1x',
      ),
    ),
    'breakpoints.theme.hk_theme.mobile' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'colorboxbreakpoints_theme_hk_theme_mobile_1x',
      ),
      '1.5x' => array(
        'mapping_type' => '_none',
      ),
      '2x' => array(
        'mapping_type' => '_none',
      ),
    ),
  );
  $export['colorbox_mapping'] = $picture_mapping;

  $picture_mapping = new PictureMapping();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 2;
  $picture_mapping->label = 'Flexfull Mapping';
  $picture_mapping->machine_name = 'flexfull_mapping';
  $picture_mapping->breakpoint_group = 'hk_theme';
  $picture_mapping->mapping = array(
    'breakpoints.theme.hk_theme.tv' => array(
      '1x' => array(
        'mapping_type' => '_none',
      ),
    ),
    'breakpoints.theme.hk_theme.wide' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'flexfullbreakpoints_theme_hk_theme_wide_1x',
      ),
    ),
    'breakpoints.theme.hk_theme.desk' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'flexfullbreakpoints_theme_hk_theme_desk_1x',
      ),
    ),
    'breakpoints.theme.hk_theme.narrow' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'flexfullbreakpoints_theme_hk_theme_desk_1x',
      ),
    ),
    'breakpoints.theme.hk_theme.mobile' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'flexfullbreakpoints_theme_hk_theme_mobile_1x',
      ),
      '1.5x' => array(
        'mapping_type' => '_none',
      ),
      '2x' => array(
        'mapping_type' => '_none',
      ),
    ),
  );
  $export['flexfull_mapping'] = $picture_mapping;

  $picture_mapping = new PictureMapping();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 2;
  $picture_mapping->label = 'Flexthumb Mapping';
  $picture_mapping->machine_name = 'flexthumb_mapping';
  $picture_mapping->breakpoint_group = 'hk_theme';
  $picture_mapping->mapping = array(
    'breakpoints.theme.hk_theme.tv' => array(
      '1x' => array(
        'mapping_type' => '_none',
      ),
    ),
    'breakpoints.theme.hk_theme.wide' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'flexthumbbreakpoints_theme_hk_theme_wide_1x',
      ),
    ),
    'breakpoints.theme.hk_theme.desk' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'flexthumbbreakpoints_theme_hk_theme_desk_1x',
      ),
    ),
    'breakpoints.theme.hk_theme.narrow' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'flexthumbbreakpoints_theme_hk_theme_narrow_1x',
      ),
    ),
    'breakpoints.theme.hk_theme.mobile' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'flexthumbbreakpoints_theme_hk_theme_mobile_1x',
      ),
      '1.5x' => array(
        'mapping_type' => '_none',
      ),
      '2x' => array(
        'mapping_type' => '_none',
      ),
    ),
  );
  $export['flexthumb_mapping'] = $picture_mapping;

  return $export;
}
