<?php

namespace Drupal\campaignion_email_to_target;

use \Drupal\little_helpers\DB\Model;


class MessageTemplate extends Model {
  protected static $table  = 'campaignion_email_to_target_messages';
  protected static $key = ['id'];
  protected static $values = ['nid', 'weight', 'subject', 'header', 'message', 'footer'];

  public $id;
  public $message_id;
  public $weight;
  public $subject;
  public $header;
  public $message;
  public $footer;
  public $filters = [];

  public function __construct($data = [], $new = TRUE) {
    parent::__construct($data, $new);
    $this->setFilters($this->filters);
  }

  public function setFilters($new_filters) {
    $w = 0;
    $filters = [];
    foreach ($new_filters as $f) {
      if (!($f instanceof Filter)) {
        $f = Filter::fromArray($f);
      }
      $f->message_id = $this->id;
      $f->weight = $w++;
      $filters[] = $f;
    }
    $this->filters = $filters;
  }

  /**
   * Get a list of message templates by their their nid.
   *
   * Messages are ordered by their weight.
   *
   * @param int $nid
   *   Node ID of the action.
   * @return array
   *   Array of MessageTemplate objects keyed by their id.
   */
  public static function byNid($nid) {
    $result = db_select(static::$table, 'm')
      ->fields('m')
      ->condition('nid', $nid)
      ->orderBy('weight')
      ->execute();
    $messages = [];
    foreach ($result as $row) {
      $messages[$row->id] = new static($row, FALSE);
    }
    foreach (Filter::byMessageIds(array_keys($messages)) as $filter) {
      $messages[$filter->message_id]->filters[] = $filter;
    }
    return $messages;
  }

  public function toArray() {
    $data = [];
    foreach (array_merge(static::$key, static::$values) as $k) {
      $data[$k] = $this->$k;
    }
    $filters = [];
    foreach ($this->filters as $f) {
      $filters[] = $f->toArray();
    }
    $data['filters'] = $filters;
    unset($data['weight']);
    unset($data['nid']);
    return $data;
  }

  public function save() {
    parent::save();
    foreach ($this->filters as $f) {
      $f->message_id = $this->id;
      $f->save();
    }
  }

  public function delete() {
    parent::delete();
    foreach ($this->filters as $f) {
      $f->delete();
    }
  }

}
