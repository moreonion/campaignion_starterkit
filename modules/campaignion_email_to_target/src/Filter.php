<?php

namespace Drupal\campaignion_email_to_target;

use \Drupal\little_helpers\DB\Model;
use \Drupal\little_helpers\Webform\Submission;


class Filter extends Model {
  protected static $table  = 'campaignion_email_to_target_filters';
  protected static $key = ['id'];
  protected static $values = ['message_id', 'weight', 'type', 'config'];
  protected static $serialize = ['config' => TRUE];

  public $id;
  public $message_id;
  public $weight = 0;
  public $type;
  public $config = [];

  public static function fromArray($data) {
    $config = $data;
    $d = [];
    foreach (['id', 'message_id', 'type', 'weight'] as $k) {
      if (isset($data[$k])) {
        $d[$k] = $data[$k];
      }
      unset($config[$k]);
    }
    $d['config'] = $config;
    return new static($d);
  }

  /**
   * Get filters for given message_ids.
   *
   * @param array $ids
   *   Message IDs to get the filters for.
   * @return array
   *   Filters ordered by message_id and weight, and keyed by their Id.
   */
  public static function byMessageIds($ids) {
    // DB queries doesn't work well with empty arrays in IN() clauses.
    if (!$ids) {
      return [];
    }
    $result = db_select(static::$table, 'f')
      ->fields('f')
      ->condition('message_id', $ids)
      ->orderBy('message_id')
      ->orderBy('weight')
      ->execute();
    $filters = [];
    foreach ($result as $row) {
      $filters[$row->id] = new static($row, FALSE);
    }
    return $filters;
  }

  public function toArray() {
    $data = [];
    foreach (array_merge(static::$key, static::$values) as $k) {
      $data[$k] = $this->$k;
    }
    unset($data['weight']);
    unset($data['message_id']);
    if($config = $data['config']) {
      unset($data['config']);
      $data += $config;
    }
    return $data;
  }

  public function match($target, Submission $submission) {
    if ($this->type == 'target-attribute') {
      switch ($this->config['operator']) {
        case '==':
          return $target[$this->config['attributeName']] == $this->config['value'];
        case '!=':
          return $target[$this->config['attributeName']] != $this->config['value'];
        case 'regexp':
          return (bool) preg_match("/{$this->config['value']}/", $target[$this->config['attributeName']]);
      }
    }
    return TRUE;
  }

}
