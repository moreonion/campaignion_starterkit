
/**
 * Implementation of Drupal behavior.
 */
(function($) {
Drupal.behaviors.manage_bulk = {};
Drupal.behaviors.manage_bulk.attach = function(context) {
  var $bulkWrapper = $('#edit-bulk-wrapper');
  $bulkWrapper.hide().addClass('bulk-dialog');
  $bulkWrapper.before('<a class="button" id="bulk-edit-button">' + Drupal.t('Bulk edit') + '</a>');
  var $button = $('#bulk-edit-button');
  $button.click(function(e) {
    e.preventDefault();
    e.stopPropagation();

    $bulkWrapper.show();
    $dialogBg.show();
  });

  $('> legend', $bulkWrapper).append('<div id="bulk-dialog-close">' + Drupal.t('Close') + '</div>');
  var $closeWrapper = $('#bulk-dialog-close');
  $closeWrapper.click(function(e) {
    $bulkWrapper.hide();
    $dialogBg.hide();
  });

  var $dialogBg;
  if ($('.mo-dialog-wrapper').length > 0) {
    $dialogBg = $('.mo-dialog-wrapper');
  } else {
    $dialogBg = $('<div class="mo-dialog-wrapper"></div>')
    .appendTo($('body', context));
  }

  // initialize checked state on label
  $('.form-item-bulk-wrapper-operations input[type=radio]:checked', $bulkWrapper).siblings('label').addClass('active');
  // trigger active states on checked changes
  $('.form-item-bulk-wrapper-operations input[type=radio]', $bulkWrapper).change(function() {
    var $self = $(this);
    var $label = $self.siblings('label');
    // reset all labels to set the active one afterwards
    $('.form-item-bulk-wrapper-operations label', $bulkWrapper).removeClass('active');
    if ($self.attr('checked') === 'checked') {
      $label.addClass('active');
    }
  });

};

})(jQuery);
