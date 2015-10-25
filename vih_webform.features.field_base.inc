<?php
/**
 * @file
 * vih_webform.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function vih_webform_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_webform_category'
  $field_bases['field_webform_category'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_webform_category',
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
          'vocabulary' => 'webform_category',
          'parent' => 0,
        ),
      ),
    ),
    'translatable' => 0,
    'type' => 'taxonomy_term_reference',
  );

  return $field_bases;
}
