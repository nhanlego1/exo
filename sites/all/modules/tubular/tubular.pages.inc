<?php

/**
 * @file
 * Theme functions for Tubular module
 */

/**
 * Theme function for the tubular buttons set
 *
 * @return
 *  HTML for the tubular buttons
 */
function theme_tubular_buttons($variables) {
  $buttons = $variables['buttons'];
  $position = $variables['position'];
  $output = '';
  
  $output .= '<ul id="tubular-buttons" class="tubular-position-' . $position . '">';
  foreach ($buttons as $button) {
    $output .= '<li>' . theme('tubular_button', array('button' => $button)) . '</li>';
  }
  $output .= '</ul>';
  
  return $output;
}

/**
 * Theme function for a single tubular button
 *
 * @return
 *  HTML for the single tubular button
 */
function theme_tubular_button($variables) {
  $button = $variables['button'];
  
  return l($button['title'], '', array(
    'fragment' => FALSE,
    'external' => TRUE,
    'attributes' => array(
      'class' => array('btn-tubular', $button['class']),  
    ),
  ));
}