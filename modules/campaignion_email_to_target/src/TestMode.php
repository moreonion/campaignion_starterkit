<?php

namespace Drupal\campaignion_email_to_target;


class TestMode {
  protected $node;

  public static function fromNode($node) {
    return new static($node);
  }

  protected function __construct($node) {
    $this->node = $node;
  }

  public function generateLink($path = NULL, $options = [], $user = NULL) {
    $user = $user ? $user : $GLOBALS['user'];
    $path = $path ? $path : "node/{$this->node->nid}";
    $options += [
      'query' => [],
      'attributes' => ['class' => ['test-mode-link']],
      'html' => FALSE,
    ];
    $p = variable_get('access_unpublished_url_key', 'hash');
    $options['query'] = [
      $p => access_unpublished_get_hash_from_nodeid($this->node->nid),
      'email_uid' => $user->uid,
      'email_uidh' => $this->sign($user->uid),
    ] + $options['query'];
    return [
      '#text' => '',
      '#theme' => 'link',
      '#path' => $path,
      '#options' => $options,
    ];
  }

  protected function sign($uid) {
    $nid = $this->node->nid;
    return drupal_hmac_base64("$nid:$uid", drupal_get_private_key());
  }

  public function uidFromUrl($query = NULL) {
    $query = $query ? $query : drupal_get_query_parameters();
    if (!empty($query['email_uid']) && !empty($query['email_uidh'])) {
      if ($this->sign($query['email_uid']) == $query['email_uidh']) {
        return (int) $query['email_uid'];
      }
    }
  }

}
