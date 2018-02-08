<?php
// %Id$

/**
 * @file
 * Admin page for ah velvet rope module
 */
 
function ah_velvet_rope_admin_settings(){
	$form['ah_velvet_rope_settings_max_pageviews'] = array(
		'#type' => 'textfield',
		'#title' => 'Max Page Views',
		'#default_value' => variable_get('ah_velvet_rope_settings_max_pageviews','10'),
		'#description' => 'Maximum number of pages an anonymous visitor can view before being redirected to the velvet rope page (defaults to 10).',		
	);
	$form['ah_velvet_rope_settings_reset_interval'] = array(
		'#type' => 'textfield',
		'#title' => 'Reset Interval',
		'#default_value' => variable_get('ah_velvet_rope_settings_timeout_interval','2592000'),
		'#description' => 'Length of time (in milliseconds) before the page view count resets (defaults to 2592000 ~ about a month).',		
	);
	$form['ah_velvet_rope_settings_url'] = array(
		'#type' => 'textfield',
		'#title' => 'URL',
		'#default_value' => variable_get('ah_velvet_rope_settings_url','velvet-rope'),
		'#description' => 'URL of velvet rope page that users will be redirected to. No leading slash',		
	);
	$form['ah_velvet_rope_settings_static_exemptions'] = array(
		'#type' => 'textarea',
		'#title' => 'URL',
		'#default_value' => variable_get('ah_velvet_rope_settings_static_exemptions','/, join, user, advanced-search, hideaway-report-archive'),
		'#description' => 'Comma-separated list of pages that do not count towards the page view limit. No leading slash',
	);
	
	return system_settings_form($form);
}






