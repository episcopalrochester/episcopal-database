<?php
/**
 * @file
 * prayer_requests.features.inc
 */

/**
 * Implements hook_node_info().
 */
function prayer_requests_node_info() {
  $items = array(
    'prayer' => array(
      'name' => t('Prayer Request'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => t('<h2><strong>IMPORTANT! HELP US PROTECT PRIVACY AND AVOID HIPAA VIOLATIONS!</strong></h2>

<p>Prayer requests tagged to appear on the website will be published onto the <strong>public</strong> Episcopal Diocese of Rochester website, under the "Prayers" tab, <em>immediately.</em> Any prayer requests related to a person\'s health must have that person\'s authorization to publish. <strong>We are responsible for compliance with the <a href="http://www.hhs.gov/ocr/privacy/">Health Insurance Portability & Accountability Act of 1996.</a></strong></p>

<p>If you have any concerns about privacy violations, <strong>identify the person in the prayer request by first name or first initial only.</strong> Or call Diocesan House at (585) 473-2977.</p>'),
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
