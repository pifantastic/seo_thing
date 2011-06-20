<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function campaigns_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: primary-links:campaigns
  $menu_links['primary-links:campaigns'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'campaigns',
    'router_path' => 'campaigns',
    'link_title' => 'Campaigns',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: primary-links:keywords
  $menu_links['primary-links:keywords'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'keywords',
    'router_path' => 'keywords',
    'link_title' => 'Keywords',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: primary-links:node/add/campaign
  $menu_links['primary-links:node/add/campaign'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'node/add/campaign',
    'router_path' => 'node/add/campaign',
    'link_title' => 'Create Campaign',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Campaigns');
  t('Create Campaign');
  t('Keywords');


  return $menu_links;
}
