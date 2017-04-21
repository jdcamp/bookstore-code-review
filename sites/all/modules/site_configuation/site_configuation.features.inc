<?php
/**
 * @file
 * site_configuation.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function site_configuation_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
