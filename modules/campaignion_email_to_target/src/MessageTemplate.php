<?php

namespace Drupal\campaignion_email_to_target;

use \Drupal\little_helpers\DB\Model;


class MessageTemplate extends Model {
  protected static $table  = 'campaignion_email_to_target_messages';
  protected static $key = ['id'];
  protected static $values = ['nid', 'weight', 'type', 'label', 'subject', 'header', 'message', 'footer'];

  public $id;
  public $nid;
  public $weight = 0;
  public $type = 'message';
  public $label = '';
  public $subject = '';
  public $header = '';
  public $message = '';
  public $footer = '';
  public $filters = [];

  public function __construct($data = [], $new = TRUE) {
    parent::__construct($data, $new);
    $filters = $this->filters;
    $this->filters = [];
    $this->setFilters($filters);
  }

  /**
   * Reset data based on an array.
   */
  public function setData($data = []) {
    foreach (static::$values as $k) {
      if ($k == 'nid') {
        continue;
      }
      if (isset($data[$k])) {
        $this->{$k} = $data[$k];
      }
    }
    if (isset($data['filters'])) {
      $this->setFilters($data['filters']);
    }
  }

  public function setFilters($new_filters) {
    $old_filters = [];
    foreach ($this->filters as $f) {
      $old_filters[$f->id] = $f;
    }
    $w = 0;
    $filters = [];

    foreach ($new_filters as $nf) {
      if ($nf instanceof Filter) {
        $f = $nf;
      }
      else {
        // Reuse filter objects if 'id' is passed and found.
        if (isset($nf['id']) && isset($old_filters[$nf['id']])) {
          $f = $old_filters[$nf['id']];
          $f->setData($nf);
          unset($old_filters[$f->id]);
        }
        // Create a new filter object.
        else {
          $f = Filter::fromArray($nf);
        }
      }
      $f->message_id = $this->id;
      $f->weight = $w++;
      $filters[] = $f;
    }
    $this->filters = $filters;
    // Remove all filters that are not reused.
    foreach ($old_filters as $f) {
      $f->delete();
    }
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
    // Weights are only represented by order.
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

  public function checkFilters($target, $constituency) {
    foreach ($this->filters as $f) {
      if (!$f->match($target, $constituency)) {
        return FALSE;
      }
    }
    return TRUE;
  }

}
