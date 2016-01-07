<?php
/**
 * @file
 * blackman_twp_plumbing_li_type.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function blackman_twp_plumbing_li_type_taxonomy_default_vocabularies() {
  return array(
    'plumbing_project_type' => array(
      'name' => 'Plumbing project type',
      'machine_name' => 'plumbing_project_type',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
