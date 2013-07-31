<?php
/**
 * @file
 * stanford_quote.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function stanford_quote_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'stanford_quote';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Stanford Quote';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Stanford Quote';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '1800';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '1800';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Field: Image (field_s_image_info) */
  $handler->display->display_options['relationships']['field_s_image_info_value']['id'] = 'field_s_image_info_value';
  $handler->display->display_options['relationships']['field_s_image_info_value']['table'] = 'field_data_field_s_image_info';
  $handler->display->display_options['relationships']['field_s_image_info_value']['field'] = 'field_s_image_info_value';
  $handler->display->display_options['relationships']['field_s_image_info_value']['delta'] = '-1';
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_s_image_image']['id'] = 'field_s_image_image';
  $handler->display->display_options['fields']['field_s_image_image']['table'] = 'field_data_field_s_image_image';
  $handler->display->display_options['fields']['field_s_image_image']['field'] = 'field_s_image_image';
  $handler->display->display_options['fields']['field_s_image_image']['relationship'] = 'field_s_image_info_value';
  $handler->display->display_options['fields']['field_s_image_image']['label'] = '';
  $handler->display->display_options['fields']['field_s_image_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_image_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_s_image_image']['settings'] = array(
    'image_style' => '3-col-well-header',
    'image_link' => '',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['body']['element_wrapper_class'] = 'quote';
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  /* Field: Content: Credits */
  $handler->display->display_options['fields']['field_s_quote_credits']['id'] = 'field_s_quote_credits';
  $handler->display->display_options['fields']['field_s_quote_credits']['table'] = 'field_data_field_s_quote_credits';
  $handler->display->display_options['fields']['field_s_quote_credits']['field'] = 'field_s_quote_credits';
  $handler->display->display_options['fields']['field_s_quote_credits']['label'] = '';
  $handler->display->display_options['fields']['field_s_quote_credits']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_s_quote_credits']['alter']['text'] = '— [field_s_quote_credits]';
  $handler->display->display_options['fields']['field_s_quote_credits']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_quote_credits']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_s_quote_credits']['element_wrapper_class'] = 'credits';
  $handler->display->display_options['fields']['field_s_quote_credits']['element_default_classes'] = FALSE;
  /* Field: Content: More Links */
  $handler->display->display_options['fields']['field_s_quote_links']['id'] = 'field_s_quote_links';
  $handler->display->display_options['fields']['field_s_quote_links']['table'] = 'field_data_field_s_quote_links';
  $handler->display->display_options['fields']['field_s_quote_links']['field'] = 'field_s_quote_links';
  $handler->display->display_options['fields']['field_s_quote_links']['label'] = '';
  $handler->display->display_options['fields']['field_s_quote_links']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_quote_links']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_s_quote_links']['element_wrapper_class'] = 'more-link';
  $handler->display->display_options['fields']['field_s_quote_links']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_s_quote_links']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_s_quote_links']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_s_quote_links']['multi_type'] = 'ul';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['edit_node']['element_wrapper_class'] = 'edit-link';
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'stanford_quote' => 'stanford_quote',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Stanford Quotes Page';
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Field: Image (field_s_image_info) */
  $handler->display->display_options['relationships']['field_s_image_info_value']['id'] = 'field_s_image_info_value';
  $handler->display->display_options['relationships']['field_s_image_info_value']['table'] = 'field_data_field_s_image_info';
  $handler->display->display_options['relationships']['field_s_image_info_value']['field'] = 'field_s_image_info_value';
  $handler->display->display_options['relationships']['field_s_image_info_value']['delta'] = '-1';
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    's_destination' => 's_destination',
    'tags' => 0,
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['limit'] = '0';
  $handler->display->display_options['arguments']['name']['path_case'] = 'lower';
  $handler->display->display_options['arguments']['name']['transform_dash'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'stanford_quote' => 'stanford_quote',
  );
  $handler->display->display_options['path'] = 'quotes';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Quotes';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Prospective Student Block */
  $handler = $view->new_display('block', 'Prospective Student Block', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Prospective student?';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'stanford_quote' => 'stanford_quote',
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    45 => '45',
  );
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 's_destination';
  /* Filter criterion: Content: Featured (field_s_quote_featured) */
  $handler->display->display_options['filters']['field_s_quote_featured_value']['id'] = 'field_s_quote_featured_value';
  $handler->display->display_options['filters']['field_s_quote_featured_value']['table'] = 'field_data_field_s_quote_featured';
  $handler->display->display_options['filters']['field_s_quote_featured_value']['field'] = 'field_s_quote_featured_value';
  $handler->display->display_options['filters']['field_s_quote_featured_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['block_description'] = 'Quote: Prospective student?';

  /* Display: Why I Teach Block */
  $handler = $view->new_display('block', 'Why I Teach Block', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Why I Teach';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'stanford_quote' => 'stanford_quote',
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    47 => '47',
  );
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 's_destination';
  /* Filter criterion: Content: Featured (field_s_quote_featured) */
  $handler->display->display_options['filters']['field_s_quote_featured_value']['id'] = 'field_s_quote_featured_value';
  $handler->display->display_options['filters']['field_s_quote_featured_value']['table'] = 'field_data_field_s_quote_featured';
  $handler->display->display_options['filters']['field_s_quote_featured_value']['field'] = 'field_s_quote_featured_value';
  $handler->display->display_options['filters']['field_s_quote_featured_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['block_description'] = 'Quote: Why I Teach';

  /* Display: Info4 Undergrad */
  $handler = $view->new_display('block', 'Info4 Undergrad', 'block_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_s_image_image']['id'] = 'field_s_image_image';
  $handler->display->display_options['fields']['field_s_image_image']['table'] = 'field_data_field_s_image_image';
  $handler->display->display_options['fields']['field_s_image_image']['field'] = 'field_s_image_image';
  $handler->display->display_options['fields']['field_s_image_image']['relationship'] = 'field_s_image_info_value';
  $handler->display->display_options['fields']['field_s_image_image']['label'] = '';
  $handler->display->display_options['fields']['field_s_image_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_image_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_image_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_s_image_image']['settings'] = array(
    'image_style' => 'med-square',
    'image_link' => '',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['body']['element_wrapper_class'] = 'quote';
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  /* Field: Content: Credits */
  $handler->display->display_options['fields']['field_s_quote_credits']['id'] = 'field_s_quote_credits';
  $handler->display->display_options['fields']['field_s_quote_credits']['table'] = 'field_data_field_s_quote_credits';
  $handler->display->display_options['fields']['field_s_quote_credits']['field'] = 'field_s_quote_credits';
  $handler->display->display_options['fields']['field_s_quote_credits']['label'] = '';
  $handler->display->display_options['fields']['field_s_quote_credits']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_quote_credits']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_s_quote_credits']['alter']['text'] = '— [field_s_quote_credits]';
  $handler->display->display_options['fields']['field_s_quote_credits']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_quote_credits']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_s_quote_credits']['element_wrapper_class'] = 'credits';
  $handler->display->display_options['fields']['field_s_quote_credits']['element_default_classes'] = FALSE;
  /* Field: Content: More Links */
  $handler->display->display_options['fields']['field_s_quote_links']['id'] = 'field_s_quote_links';
  $handler->display->display_options['fields']['field_s_quote_links']['table'] = 'field_data_field_s_quote_links';
  $handler->display->display_options['fields']['field_s_quote_links']['field'] = 'field_s_quote_links';
  $handler->display->display_options['fields']['field_s_quote_links']['label'] = '';
  $handler->display->display_options['fields']['field_s_quote_links']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_quote_links']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_quote_links']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_s_quote_links']['element_wrapper_class'] = 'more-link';
  $handler->display->display_options['fields']['field_s_quote_links']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_s_quote_links']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_s_quote_links']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_s_quote_links']['multi_type'] = 'ul';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['edit_node']['element_wrapper_class'] = 'edit-link';
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="postcard-left">
<div class="postcard-image">
     <div>[field_s_image_image]</div>
</div>
<div class="postcard-content">
     <div class="quote">[body]</div>
     <div class="credits">[field_s_quote_credits]</div>
     <div class="more-link">[field_s_quote_links]</div>
     <div class="edit-link">[edit_node]</div>
</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'stanford_quote' => 'stanford_quote',
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    233 => '233',
  );
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 's_destination';
  /* Filter criterion: Content: Featured (field_s_quote_featured) */
  $handler->display->display_options['filters']['field_s_quote_featured_value']['id'] = 'field_s_quote_featured_value';
  $handler->display->display_options['filters']['field_s_quote_featured_value']['table'] = 'field_data_field_s_quote_featured';
  $handler->display->display_options['filters']['field_s_quote_featured_value']['field'] = 'field_s_quote_featured_value';
  $handler->display->display_options['filters']['field_s_quote_featured_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['block_description'] = 'Quote: Info For Undergrad';

  /* Display: Info4 Grad */
  $handler = $view->new_display('block', 'Info4 Grad', 'block_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_s_image_image']['id'] = 'field_s_image_image';
  $handler->display->display_options['fields']['field_s_image_image']['table'] = 'field_data_field_s_image_image';
  $handler->display->display_options['fields']['field_s_image_image']['field'] = 'field_s_image_image';
  $handler->display->display_options['fields']['field_s_image_image']['relationship'] = 'field_s_image_info_value';
  $handler->display->display_options['fields']['field_s_image_image']['label'] = '';
  $handler->display->display_options['fields']['field_s_image_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_image_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_image_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_s_image_image']['settings'] = array(
    'image_style' => 'med-square',
    'image_link' => '',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['body']['element_wrapper_class'] = 'quote';
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  /* Field: Content: Credits */
  $handler->display->display_options['fields']['field_s_quote_credits']['id'] = 'field_s_quote_credits';
  $handler->display->display_options['fields']['field_s_quote_credits']['table'] = 'field_data_field_s_quote_credits';
  $handler->display->display_options['fields']['field_s_quote_credits']['field'] = 'field_s_quote_credits';
  $handler->display->display_options['fields']['field_s_quote_credits']['label'] = '';
  $handler->display->display_options['fields']['field_s_quote_credits']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_quote_credits']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_s_quote_credits']['alter']['text'] = '— [field_s_quote_credits]';
  $handler->display->display_options['fields']['field_s_quote_credits']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_quote_credits']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_s_quote_credits']['element_wrapper_class'] = 'credits';
  $handler->display->display_options['fields']['field_s_quote_credits']['element_default_classes'] = FALSE;
  /* Field: Content: More Links */
  $handler->display->display_options['fields']['field_s_quote_links']['id'] = 'field_s_quote_links';
  $handler->display->display_options['fields']['field_s_quote_links']['table'] = 'field_data_field_s_quote_links';
  $handler->display->display_options['fields']['field_s_quote_links']['field'] = 'field_s_quote_links';
  $handler->display->display_options['fields']['field_s_quote_links']['label'] = '';
  $handler->display->display_options['fields']['field_s_quote_links']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_quote_links']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_quote_links']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_s_quote_links']['element_wrapper_class'] = 'more-link';
  $handler->display->display_options['fields']['field_s_quote_links']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_s_quote_links']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_s_quote_links']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_s_quote_links']['multi_type'] = 'ul';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['edit_node']['element_wrapper_class'] = 'edit-link';
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="postcard-left">
<div class="postcard-image">
     <div>[field_s_image_image]</div>
</div>
<div class="postcard-content">
     <div class="quote">[body]</div>
     <div class="credits">[field_s_quote_credits]</div>
     <div class="more-link">[field_s_quote_links]</div>
     <div class="edit-link">[edit_node]</div>
</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'stanford_quote' => 'stanford_quote',
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    235 => '235',
  );
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 's_destination';
  /* Filter criterion: Content: Featured (field_s_quote_featured) */
  $handler->display->display_options['filters']['field_s_quote_featured_value']['id'] = 'field_s_quote_featured_value';
  $handler->display->display_options['filters']['field_s_quote_featured_value']['table'] = 'field_data_field_s_quote_featured';
  $handler->display->display_options['filters']['field_s_quote_featured_value']['field'] = 'field_s_quote_featured_value';
  $handler->display->display_options['filters']['field_s_quote_featured_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['block_description'] = 'Quote: Info For Graduates';

  /* Display: Info4 Prospective Grad */
  $handler = $view->new_display('block', 'Info4 Prospective Grad', 'block_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_s_image_image']['id'] = 'field_s_image_image';
  $handler->display->display_options['fields']['field_s_image_image']['table'] = 'field_data_field_s_image_image';
  $handler->display->display_options['fields']['field_s_image_image']['field'] = 'field_s_image_image';
  $handler->display->display_options['fields']['field_s_image_image']['relationship'] = 'field_s_image_info_value';
  $handler->display->display_options['fields']['field_s_image_image']['label'] = '';
  $handler->display->display_options['fields']['field_s_image_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_image_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_image_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_s_image_image']['settings'] = array(
    'image_style' => 'med-square',
    'image_link' => '',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['body']['element_wrapper_class'] = 'quote';
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  /* Field: Content: Credits */
  $handler->display->display_options['fields']['field_s_quote_credits']['id'] = 'field_s_quote_credits';
  $handler->display->display_options['fields']['field_s_quote_credits']['table'] = 'field_data_field_s_quote_credits';
  $handler->display->display_options['fields']['field_s_quote_credits']['field'] = 'field_s_quote_credits';
  $handler->display->display_options['fields']['field_s_quote_credits']['label'] = '';
  $handler->display->display_options['fields']['field_s_quote_credits']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_quote_credits']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_s_quote_credits']['alter']['text'] = '— [field_s_quote_credits]';
  $handler->display->display_options['fields']['field_s_quote_credits']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_quote_credits']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_s_quote_credits']['element_wrapper_class'] = 'credits';
  $handler->display->display_options['fields']['field_s_quote_credits']['element_default_classes'] = FALSE;
  /* Field: Content: More Links */
  $handler->display->display_options['fields']['field_s_quote_links']['id'] = 'field_s_quote_links';
  $handler->display->display_options['fields']['field_s_quote_links']['table'] = 'field_data_field_s_quote_links';
  $handler->display->display_options['fields']['field_s_quote_links']['field'] = 'field_s_quote_links';
  $handler->display->display_options['fields']['field_s_quote_links']['label'] = '';
  $handler->display->display_options['fields']['field_s_quote_links']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_quote_links']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_quote_links']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_s_quote_links']['element_wrapper_class'] = 'more-link';
  $handler->display->display_options['fields']['field_s_quote_links']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_s_quote_links']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_s_quote_links']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_s_quote_links']['multi_type'] = 'ul';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['edit_node']['element_wrapper_class'] = 'edit-link';
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="postcard-left">
<div class="postcard-image">
     <div>[field_s_image_image]</div>
</div>
<div class="postcard-content">
     <div class="quote">[body]</div>
     <div class="credits">[field_s_quote_credits]</div>
     <div class="more-link">[field_s_quote_links]</div>
     <div class="edit-link">[edit_node]</div>
</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'stanford_quote' => 'stanford_quote',
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    237 => '237',
  );
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 's_destination';
  /* Filter criterion: Content: Featured (field_s_quote_featured) */
  $handler->display->display_options['filters']['field_s_quote_featured_value']['id'] = 'field_s_quote_featured_value';
  $handler->display->display_options['filters']['field_s_quote_featured_value']['table'] = 'field_data_field_s_quote_featured';
  $handler->display->display_options['filters']['field_s_quote_featured_value']['field'] = 'field_s_quote_featured_value';
  $handler->display->display_options['filters']['field_s_quote_featured_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['block_description'] = 'Quote: Info For Prospective Graduates';
  $export['stanford_quote'] = $view;

  $view = new view();
  $view->name = 'stanford_quote_manage';
  $view->description = 'View, edit, and delete your site\'s content.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Stanford Quote: Manage';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Manage Stanford Quotes';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'administer nodes';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Filter';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'counter' => 'counter',
    'views_bulk_operations' => 'views_bulk_operations',
    'field_s_person_profile_picture' => 'field_s_person_profile_picture',
    'title' => 'title',
    'timestamp' => 'title',
    'status' => 'status',
    'changed' => 'changed',
    'field_s_person_last_name' => 'field_s_person_last_name',
    'field_s_person_type' => 'field_s_person_type',
    'field_s_person_faculty_type' => 'field_s_person_faculty_type',
    'field_s_person_student_type' => 'field_s_person_student_type',
    'nid' => 'nid',
    'edit_node' => 'edit_node',
    'view_node' => 'edit_node',
    'delete_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'counter' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => ' | ',
      'empty_column' => 0,
    ),
    'field_s_person_profile_picture' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => ' | ',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => ' ',
      'empty_column' => 0,
    ),
    'timestamp' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'changed' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_s_person_last_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => ' | ',
      'empty_column' => 0,
    ),
    'field_s_person_type' => array(
      'align' => '',
      'separator' => ' | ',
      'empty_column' => 0,
    ),
    'field_s_person_faculty_type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => ' | ',
      'empty_column' => 0,
    ),
    'field_s_person_student_type' => array(
      'align' => '',
      'separator' => ' | ',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => ' ',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => ' | ',
      'empty_column' => 0,
    ),
    'view_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'delete_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h3><a href="https://sites.stanford.edu/english/admin/manage">Back to Manage All Content</a></h3>';
  $handler->display->display_options['header']['area']['format'] = 'content_editor_text_format';
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = 'Row';
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['operations'] = array(
    'action::node_assign_owner_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 1,
      'label' => 'Delete',
    ),
    'action::system_message_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_script_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_sticky_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_unsticky_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 1,
      'label' => 'Modify',
      'settings' => array(
        'show_all_tokens' => 0,
        'display_values' => array(
          'stanford_quote::field_s_quote_destination' => 'stanford_quote::field_s_quote_destination',
          'stanford_quote::field_s_quote_featured' => 'stanford_quote::field_s_quote_featured',
        ),
      ),
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'action::node_promote_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_publish_action' => array(
      'selected' => 1,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 1,
      'label' => 'Publish',
    ),
    'action::system_goto_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpromote_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_save_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::system_send_email_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_action' => array(
      'selected' => 1,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 1,
      'label' => 'Unpublish',
    ),
    'action::node_unpublish_by_keyword_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::pathauto_node_update_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['display_result'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['merge_single_action'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['force_single'] = 0;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_s_image_info']['id'] = 'field_s_image_info';
  $handler->display->display_options['fields']['field_s_image_info']['table'] = 'field_data_field_s_image_info';
  $handler->display->display_options['fields']['field_s_image_info']['field'] = 'field_s_image_info';
  $handler->display->display_options['fields']['field_s_image_info']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_image_info']['settings'] = array(
    'edit' => '',
    'delete' => '',
    'add' => '',
    'description' => 0,
    'view_mode' => 'stanford_thumbnail_square',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Has new content */
  $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['table'] = 'history';
  $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['label'] = '';
  $handler->display->display_options['fields']['timestamp']['element_label_colon'] = FALSE;
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['date_format'] = 'short';
  /* Field: Content: Featured */
  $handler->display->display_options['fields']['field_s_quote_featured']['id'] = 'field_s_quote_featured';
  $handler->display->display_options['fields']['field_s_quote_featured']['table'] = 'field_data_field_s_quote_featured';
  $handler->display->display_options['fields']['field_s_quote_featured']['field'] = 'field_s_quote_featured';
  /* Field: Content: Destination */
  $handler->display->display_options['fields']['field_s_quote_destination']['id'] = 'field_s_quote_destination';
  $handler->display->display_options['fields']['field_s_quote_destination']['table'] = 'field_data_field_s_quote_destination';
  $handler->display->display_options['fields']['field_s_quote_destination']['field'] = 'field_s_quote_destination';
  $handler->display->display_options['fields']['field_s_quote_destination']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_s_quote_destination']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_s_quote_destination']['multi_type'] = 'ul';
  /* Field: Content: More Links */
  $handler->display->display_options['fields']['field_s_quote_links']['id'] = 'field_s_quote_links';
  $handler->display->display_options['fields']['field_s_quote_links']['table'] = 'field_data_field_s_quote_links';
  $handler->display->display_options['fields']['field_s_quote_links']['field'] = 'field_s_quote_links';
  $handler->display->display_options['fields']['field_s_quote_links']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_s_quote_links']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_s_quote_links']['multi_type'] = 'ul';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'Node ID';
  $handler->display->display_options['fields']['nid']['link_to_node'] = TRUE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Actions';
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'stanford_quote' => 'stanford_quote',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    13 => 0,
    11 => 0,
    9 => 0,
    7 => 0,
    5 => 0,
    15 => 0,
    17 => 0,
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 'All';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['exposed'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Published';
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    13 => 0,
    11 => 0,
    9 => 0,
    7 => 0,
    5 => 0,
    15 => 0,
    17 => 0,
  );
  /* Filter criterion: Content: Featured (field_s_quote_featured) */
  $handler->display->display_options['filters']['field_s_quote_featured_value']['id'] = 'field_s_quote_featured_value';
  $handler->display->display_options['filters']['field_s_quote_featured_value']['table'] = 'field_data_field_s_quote_featured';
  $handler->display->display_options['filters']['field_s_quote_featured_value']['field'] = 'field_s_quote_featured_value';
  $handler->display->display_options['filters']['field_s_quote_featured_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_s_quote_featured_value']['expose']['operator_id'] = 'field_s_quote_featured_value_op';
  $handler->display->display_options['filters']['field_s_quote_featured_value']['expose']['label'] = 'Featured';
  $handler->display->display_options['filters']['field_s_quote_featured_value']['expose']['operator'] = 'field_s_quote_featured_value_op';
  $handler->display->display_options['filters']['field_s_quote_featured_value']['expose']['identifier'] = 'field_s_quote_featured_value';
  $handler->display->display_options['filters']['field_s_quote_featured_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    13 => 0,
    11 => 0,
    9 => 0,
    7 => 0,
    5 => 0,
    15 => 0,
    17 => 0,
  );
  /* Filter criterion: Content: Destination (field_s_quote_destination) */
  $handler->display->display_options['filters']['field_s_quote_destination_tid']['id'] = 'field_s_quote_destination_tid';
  $handler->display->display_options['filters']['field_s_quote_destination_tid']['table'] = 'field_data_field_s_quote_destination';
  $handler->display->display_options['filters']['field_s_quote_destination_tid']['field'] = 'field_s_quote_destination_tid';
  $handler->display->display_options['filters']['field_s_quote_destination_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_s_quote_destination_tid']['expose']['operator_id'] = 'field_s_quote_destination_tid_op';
  $handler->display->display_options['filters']['field_s_quote_destination_tid']['expose']['label'] = 'Destination';
  $handler->display->display_options['filters']['field_s_quote_destination_tid']['expose']['operator'] = 'field_s_quote_destination_tid_op';
  $handler->display->display_options['filters']['field_s_quote_destination_tid']['expose']['identifier'] = 'field_s_quote_destination_tid';
  $handler->display->display_options['filters']['field_s_quote_destination_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    13 => 0,
    11 => 0,
    9 => 0,
    7 => 0,
    5 => 0,
    15 => 0,
    17 => 0,
  );
  $handler->display->display_options['filters']['field_s_quote_destination_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_s_quote_destination_tid']['vocabulary'] = 's_destination';
  $handler->display->display_options['filters']['field_s_quote_destination_tid']['error_message'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/manage/stanford-quote';
  $export['stanford_quote_manage'] = $view;

  return $export;
}
