<?php
/**
 * @file
 * stanford_quote.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function stanford_quote_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function stanford_quote_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function stanford_quote_node_info() {
  $items = array(
    'stanford_quote' => array(
      'name' => t('Quote'),
      'base' => 'node_content',
      'description' => t('<em>Stanford Quote</em> includes quote, credits, more links, and optional image.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
