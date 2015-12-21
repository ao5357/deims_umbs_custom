<?php

/**
 * @file
 * Migrate module integration for the deims_umbs_custom module.
 */

/**
 * Implements hook_migrate_api().
 */
function deims_umbs_custom_migrate_api() {
  $info = array(
    'api' => 2,
    'migrations' => array(
      'DUCContentBlog' => array(
        'class_name' => 'DUCContentBlogMigration',
      ),
    ),
  );

  foreach ($info['migrations'] as &$migration) {
    $migration['group_name'] = DEIMS_D6_MIGRATION_GROUP;
  }

  return $info;
}

/**
 * Implements hook_deims_migration_overrides().
 */
function deims_umbs_custom_deims_migration_overrides() {
  return array();
}
