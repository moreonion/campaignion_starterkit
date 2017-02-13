<?php

namespace Drupal\campaignion_email_to_target\Api;

use \Dflydev\Hawk\Credentials\Credentials;
use \Dflydev\Hawk\Client\ClientBuilder;

use \Drupal\little_helpers\Rest\Client as _Client;
use \Drupal\little_helpers\Rest\HttpError;

class Client extends _Client {
  CONST API_VERSION = 'v2';
  protected $hawk;
  protected $credentials;

  public static function fromConfig() {
    $c = variable_get('campaignion_email_to_target_credentials', []);
    foreach (['url', 'public_key', 'secret_key'] as $v) {
      if (!isset($c[$v])) {
        throw new ConfigError(
          'No valid e2t_api credentials found. The credentials must contain ' .
          'at least values for "url", "public_key" and "private_key".'
        );
      }
    }
    return new static($c['url'], $c['public_key'], $c['secret_key']);
  }

  public function __construct($url, $pk, $sk) {
    parent::__construct($url . '/' . static::API_VERSION);
    $this->credentials = new Credentials($sk, 'sha256', $pk);
    $this->hawk = ClientBuilder::create()->build();
  }

  /**
   * Return the endpoint URL.
   */
  public function getEndpoint() {
    return $this->endpoint;
  }

  /**
   * Add HAWK authentication headers to the request.
   */
  protected function sendRequest($url, array $options) {
    $options += ['method' => 'GET'];
    $method = $options['method'];
    $hawk = $this->hawk->createRequest($this->credentials, $url, $method);
    $header = $hawk->header();
    $options['headers'][$header->fieldName()] = $header->fieldValue();
    return parent::sendRequest($url, $options);
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
    try {
      $postcode = urlencode($postcode);
      return $this->get("$dataset_key/postcode/$postcode");
    }
    catch (HttpError $e) {
      if (in_array($e->getCode(), [400, 404])) {
        return [];
      }
      throw $e;
    }
  }

  public function getAccessToken() {
    $res = $this->post('access-token');
    return $res['access_token'];
  }

}
