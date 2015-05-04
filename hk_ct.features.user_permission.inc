<?php
/**
 * @file
 * hk_ct.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function hk_ct_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create apartment content'.
  $permissions['create apartment content'] = array(
    'name' => 'create apartment content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create objekt content'.
  $permissions['create objekt content'] = array(
    'name' => 'create objekt content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create page content'.
  $permissions['create page content'] = array(
    'name' => 'create page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any page content'.
  $permissions['delete any page content'] = array(
    'name' => 'delete any page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any apartment content'.
  $permissions['edit any apartment content'] = array(
    'name' => 'edit any apartment content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any objekt content'.
  $permissions['edit any objekt content'] = array(
    'name' => 'edit any objekt content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any page content'.
  $permissions['edit any page content'] = array(
    'name' => 'edit any page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
