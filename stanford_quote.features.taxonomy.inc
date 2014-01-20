<?php
/**
 * @file
 * stanford_quote.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function stanford_quote_taxonomy_default_vocabularies() {
  return array(
    's_destination' => array(
      'name' => 'Destination',
      'machine_name' => 's_destination',
      'description' => 'Where this content should be displayed on your site.',
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
