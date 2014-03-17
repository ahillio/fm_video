<?php
/**
 * @file
 * fm_video.features.inc
 */

/**
 * Implements hook_views_api().
 */
function fm_video_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_mediafront_default_presets().
 */
function fm_video_mediafront_default_presets() {
  $items = array(
    'video_player' => array(
      'name' => 'video_player',
      'description' => '',
      'player' => 'osmplayer',
      'connect' => array(
        'iscontroller' => array(),
        'isplaylist' => array(),
      ),
      'settings' => array(
        'showPlaylist' => 1,
        'file' => '',
        'flashPlayer' => 'minplayer/minplayer.swf',
        'image' => '',
        'volume' => '80',
        'autostart' => 0,
        'autoLoad' => 1,
        'streamer' => '',
        'apiKey' => '',
        'sessid' => '',
        'api' => 2,
        'drupalVersion' => 6,
        'links' => array(),
        'linksvertical' => FALSE,
        'logo' => '',
        'link' => '',
        'logopos' => 'sw',
        'logoWidth' => '49',
        'logoHeight' => '15',
        'logox' => '5',
        'logoy' => '5',
        'node' => '',
        'shuffle' => 0,
        'loop' => 0,
        'repeat' => 0,
        'pageLimit' => '10',
        'protocol' => 'json',
        'server' => 'drupal',
        'template' => 'default',
        'baseURL' => '',
        'draggable' => FALSE,
        'resizable' => FALSE,
        'playlist' => '',
        'args' => array(),
        'wildcard' => '*',
        'gateway' => '',
        'vertical' => '1',
        'scrollSpeed' => '15',
        'updateTimeout' => 20,
        'hysteresis' => 40,
        'dynamic' => FALSE,
        'scrollMode' => 'auto',
        'pageLink' => 0,
        'debug' => 0,
        'embedWidth' => '450',
        'embedHeight' => '337',
        'skin' => 'default',
        'autoNext' => 1,
        'prefix' => '',
        'showScrollbar' => 1,
        'controllerOnly' => 0,
        'wmode' => 'transparent',
        'forceOverflow' => 0,
        'volumeVertical' => FALSE,
        'incrementTime' => '5',
        'quality' => 'default',
        'zIndex' => '400',
        'timeout' => '4',
        'fluidWidth' => 1,
        'fluidHeight' => 0,
        'fullscreen' => 0,
        'width' => '550',
        'height' => '400',
        'theme' => 'dark-hive',
        'version' => '0.01',
        'showController' => 1,
        'disablePlaylist' => 0,
        'playlistOnly' => 0,
        'showNodeVoter' => FALSE,
        'showTeaserVoter' => FALSE,
        'showTitleBar' => 1,
        'showWhenEmpty' => 1,
        'playerPath' => '/sites/all/modules/mediafront/players/osmplayer/player/',
      ),
    ),
  );
  return $items;
}

/**
 * Implements hook_node_info().
 */
function fm_video_node_info() {
  $items = array(
    'video' => array(
      'name' => t('Video'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
