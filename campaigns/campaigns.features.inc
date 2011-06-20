<?php

/**
 * Implementation of hook_node_info().
 */
function campaigns_node_info() {
  $items = array(
    'campaign' => array(
      'name' => t('Campaign'),
      'module' => 'features',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Campaign Name'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function campaigns_views_api() {
  return array(
    'api' => '2',
  );
}
