/**
 * Implementation of Drupal behavior.
 */
(function($) {
Drupal.behaviors.ae_admin = {};
Drupal.behaviors.ae_admin.attach = function(context) {
  // If there are both main column and side column buttons, only show the main
  // column buttons if the user scrolls past the ones to the side.
  $('div.form:has(div.column-main div.form-actions):not(.ae_admin-processed)').each(function() {
    var form = $(this);
    var offset = $('div.column-side div.form-actions', form).height() + $('div.column-side div.form-actions', form).offset().top;
    $(window).scroll(function () {
      if ($(this).scrollTop() > offset) {
        $('div.column-main div.form-actions', form).show();
      }
      else {
        $('div.column-main div.form-actions', form).hide();
      }
    });
    form.addClass('ae_admin-processed');
  });

  $('a.toggler:not(.ae_admin-processed)', context).each(function() {
    var id = $(this).attr('href').split('#')[1];
    // Target exists, add click handler.
    if ($('#' + id).size() > 0) {
      $(this).click(function() {
        toggleable = $('#' + id);
        toggleable.toggle();
        $(this).toggleClass('toggler-active');
        return false;
      });
    }
    // Target does not exist, remove click handler.
    else {
      $(this).addClass('toggler-disabled');
      $(this).click(function() { return false; });
    }
    // Mark as processed.
    $(this).addClass('ae_admin-processed');
  });

  // set/unset actice class on ae webform submit text element
  // (on click or focus/blur)
  $('.form-item-submit-button-text #edit-submit-button-text').focus(function() {
      $(this).parent().addClass('form-active');
  });
  $('.form-item-submit-button-text #edit-submit-button-text').blur(function() {
      $(this).parent().removeClass('form-active');
  });
  $('.form-item-submit-button-text #edit-submit-button-text').click(function(e) {
      $(this).parent().addClass('form-active');
      e.stopPropagation();
  });
  $('html').click(function() {
      $('.form-item-submit-button-text').removeClass('form-active');
  });
};
})(jQuery);
