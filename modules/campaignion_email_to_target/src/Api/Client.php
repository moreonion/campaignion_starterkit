<?php

namespace Drupal\campaignion_email_to_target\Api;

use \Dflydev\Hawk\Credentials\Credentials;
use \Dflydev\Hawk\Client\ClientBuilder;

class Client {
  protected $client;
  protected $credentials;
  protected $url;

  public static function fromConfig() {
    $c = variable_get('campaignion_email_to_target_credentials', []);
    foreach (['url', 'public_key', 'secret_key'] as $v) {
      if (!isset($c[$v])) {
        throw new ConfigError(
          'No valid logcrm credentials found. The credentials must contain ' .
          'at least values for "url", "public_key" and "private_key".'
        );
      }
    }
    return new static($c['url'], $c['public_key'], $c['secret_key']);
  }

  public function __construct($url, $pk, $sk) {
    $this->url = $url;
    $this->credentials = new Credentials($sk, 'sha256', $pk);
    $this->client = ClientBuilder::create()->build();
  }

  /**
   * Get data from the API-server.
   *
   * @return string
   *   The response from the server.
   */
  public function get($path) {
    $url = $this->url . '/' . $path;
    $hawk = $this->client->createRequest($this->credentials, $url, 'GET');
    $headers[$hawk->header()->fieldName()] = $hawk->header()->fieldValue();

    $options['headers'] = $headers;
    $options['method'] = 'GET';
    $r = drupal_http_request($url, $options);
    if ($r->code < 0) {
      // Some kind of connection error.
      throw new Error($r->code, $r->error, '');
    }
    if ($r->code != 200) {
      $d = \drupal_json_decode($r->data);
      throw new Error($r->code, $r->status_message, $d['message']);
    }
    return \drupal_json_decode($r->data);
  }

  public function getDatasetList() {
    if ($c = cache_get('campaignion_email_to_target_dataset_list')) {
      return $c->data;
    }
    $datasets = [];
    $dataset_list = $this->get('');
    foreach ($dataset_list as $dataset) {
      $datasets[] = Dataset::fromArray($dataset);
    }
    cache_set('campaignion_email_to_target_dataset_list', $datasets, 'cache');
    return $datasets;
  }

  public function getDataset($key) {
    foreach ($this->getDatasetList() as $dataset) {
      if ($dataset->key == $key) {
        return $dataset;
      }
    }
    return NULL;
  }

  public function getTargets($dataset_key, $postcode) {
    $postcode = urlencode($postcode);
    return $this->get("$dataset_key/postcode/$postcode");
  }
}
