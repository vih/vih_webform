<?php
/**
 * @file
 * vih_webform.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function vih_webform_taxonomy_default_vocabularies() {
  return array(
    'webform_category' => array(
      'name' => 'Webform category',
      'machine_name' => 'webform_category',
      'description' => 'Used to categorize webforms so it is easier to create good views.',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
