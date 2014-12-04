<?php
/**
 * @file
 * uit_newsletter.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function uit_newsletter_taxonomy_default_vocabularies() {
  return array(
    'newsletter_issue' => array(
      'name' => 'Newsletter Issue',
      'machine_name' => 'newsletter_issue',
      'description' => 'An individual newsletter issue',
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
