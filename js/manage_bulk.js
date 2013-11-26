
/**
 * Implementation of Drupal behavior.
 */
(function($) {
Drupal.behaviors.manage_bulk = {};
Drupal.behaviors.manage_bulk.attach = function(context) {
  var $bulkWrapper = $('#edit-bulk-wrapper');
  var $bulkFieldsetWrapper = $('#edit-bulk-wrapper-op-wrapper');
  var $bulkOpsWrapper = $('#edit-bulk-wrapper-operations');
  $bulkWrapper.hide().addClass('bulk-dialog');
  $bulkWrapper.before('<a class="button" id="bulk-edit-button"  href="#">' + Drupal.t('Bulk edit') + '</a>');
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
  var $initRadio = $('.form-item-bulk-wrapper-operations input[type=radio]:checked', $bulkWrapper);
  $initRadio.siblings('label').addClass('active');
  $('#edit-bulk-wrapper-op-wrapper-op-' + $initRadio.val()).show();
  // trigger active states on checked changes
  $('.form-item-bulk-wrapper-operations input[type=radio]', $bulkWrapper).change(function() {
    var $self = $(this);
    var $label = $self.siblings('label');
    var operation = $self.val();

    // reset all labels to set the active one afterwards
    $('.form-item-bulk-wrapper-operations label', $bulkWrapper).removeClass('active');
    if ($self.attr('checked') === 'checked') {
      $label.addClass('active');
    }
    // set visibility of corresponding form fieldset
    $('fieldset', $bulkFieldsetWrapper).hide();
    $('#edit-bulk-wrapper-op-wrapper-op-' + operation).show();

  });

  // generate question marks for popover help
  $('label', $bulkOpsWrapper).after('<span class="bulk-question-mark">?</span>');
  if ($.fn.popover) {
    $('.bulk-question-mark', $bulkOpsWrapper).each(function() {
      var $me = $(this);
      var $input = $me.siblings('input');
      var operation = $input.val();
      var $helptext = $("#edit-bulk-wrapper-op-wrapper-op-" + operation + " .help-text", $bulkWrapper);

      $me.popover({
        content: $helptext.html()
      });
    });

    // hide other popovers (but not meself)
    $bulkWrapper.on('show.bs.popover', function(e) {
      var $self = $(e.target);
      $('.bulk-question-mark', $bulkOpsWrapper).not($self).popover('hide');
    });

  }
};

})(jQuery);
