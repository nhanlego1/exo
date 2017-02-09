<?php

/**
 * @file
 * Administration pages for Tubular module
 */

/**
 * General configuration form.
 */
function tubular_admin_settings() {
  $form = array();
  
  $form['tubular_video_id'] = array(
    '#type' => 'textfield',
    '#title' => t('Video ID'),
    '#description' => t('Video ID of the Youtube video'),
    '#default_value' => variable_get('tubular_video_id', ''),
    '#required' => TRUE,
  );
  
  $form['tubular_wrapper_id'] = array(
    '#type' => 'textfield',
    '#title' => t('Wrapper ID'),
    '#description' => t('The ID of the wrapper div without the #, eg. page-wrapper'),
    '#default_value' => variable_get('tubular_wrapper_id', ''),
    '#required' => TRUE,
  );
  
  $form['tubular_pages'] = array(
    '#type' => 'textarea',
    '#title' => t('Enable tubular on the following pages only'),
    '#description' => t('Specify pages by using their paths. Enter one path per line. The \'*\' character is a wildcard. Example paths are blog for the blog page and blog/* for every personal blog. <front> is the front page.'),
    '#default_value' => variable_get('tubular_pages', ''),
    '#required' => TRUE,
  );
  
  $form['tubular_buttons'] = array(
    '#type' => 'checkboxes',
    '#title' => t('Enable the following buttons'),
    '#description' => t('Control buttons for the video'),
    '#options' => tubular_buttons_options(),
    '#default_value' => variable_get('tubular_buttons', array()),
  );
  
  $form['tubular_buttons_positions'] = array(
    '#type' => 'checkboxes',
    '#title' => t('Position of the Tubular buttons'),
    '#description' => t('Where to show the buttons on the page.'),
    '#options' => array(
      'absolute' => t('Absolute'),
      'block' => t('In a block'),
    ),
    '#default_value' => variable_get('tubular_buttons_positions', array()),
  );
  
  return system_settings_form($form);
}