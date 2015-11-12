<?php
/**
 * @file
 * e_permits_taxonomy.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function e_permits_taxonomy_taxonomy_default_vocabularies() {
  return array(
    'principal_type_of_frame' => array(
      'name' => 'Principal Type of Frame',
      'machine_name' => 'principal_type_of_frame',
      'description' => 'Types of building frame.',
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
    'principal_type_of_heating_fuel' => array(
      'name' => 'Principal Type of Heating Fuel',
      'machine_name' => 'principal_type_of_heating_fuel',
      'description' => 'Types of heating fuel.',
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
    'type_of_improvement' => array(
      'name' => 'Type of Improvement',
      'machine_name' => 'type_of_improvement',
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
