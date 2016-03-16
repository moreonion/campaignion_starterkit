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
  var firstButton = $('.form-item-first-button-text #edit-first-button-text');
  var nextButton = $('.form-item-next-button-text #edit-next-button-text');
  var submitButton = $('.form-item-submit-button-text #edit-submit-button-text');

  firstButton.focus(function() {
      $(this).parent().addClass('form-active');
  });
  firstButton.blur(function() {
      $(this).parent().removeClass('form-active');
  });
  firstButton.click(function(e) {
      $(this).parent().addClass('form-active');
      e.stopPropagation();
  });
  nextButton.focus(function() {
      $(this).parent().addClass('form-active');
  });
  nextButton.blur(function() {
      $(this).parent().removeClass('form-active');
  });
  nextButton.click(function(e) {
      $(this).parent().addClass('form-active');
      e.stopPropagation();
  });
  submitButton.focus(function() {
      $(this).parent().addClass('form-active');
  });
  submitButton.blur(function() {
      $(this).parent().removeClass('form-active');
  });
  submitButton.click(function(e) {
      $(this).parent().addClass('form-active');
      e.stopPropagation();
  });
  $('html').click(function() {
      $('.form-item-first-button-text').removeClass('form-active');
      $('.form-item-next-button-text').removeClass('form-active');
      $('.form-item-submit-button-text').removeClass('form-active');
  });

  // call resizeIframe (again) to set the height of the media-browser iframe
  // after it is *fully* rendered
  if(Drupal.media && Drupal.media.browser) {
    setTimeout(Drupal.media.browser.resizeIframe, 1);
  }

  $('.wizard-form', context).each(function() {
    $('.wizard-title .form-actions', this).sticky();
  });
};
})(jQuery);
