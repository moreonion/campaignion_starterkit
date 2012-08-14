/**
 * Implementation of Drupal behavior.
 */
(function($) {
Drupal.behaviors.ae_itoggle = {
  attach: function(context) {

  // substitute all checkboxes found by .form-type-checkbox
  $('.form-type-checkbox', context).iToggle({
      easing: 'easeOutExpo',
      keepLabel: true,
      speed: 300,
      onClickOn: function() {
        var idToClick = $(this).attr('for');
        // if there is an associated input tag
        if (idToClick && idToClick.length > 0) {
          $('#' + idToClick).attr('checked', 'checked');
          // trigger click event to fire attached actions, e.g. table select all
          // or #permission's .dummy-checkboxes
          // a little ugly: edit-menu needs change() event --> whitelisted
          if ($(this).closest('fieldset').attr('id') === "edit-menu") {
            $('#' + idToClick).change();
          } else {
            $('#' + idToClick).click();
          }
        }
      },
      onClickOff: function() {
        var idToClick = $(this).attr('for');
        if (idToClick && idToClick.length > 0) {
          $('#' + idToClick).removeAttr('checked');
          if ($(this).closest('fieldset').attr('id') === "edit-menu") {
            $('#' + idToClick).change();
          } else {
            $('#' + idToClick).click();
          }
        }
      }
  });
 
  // change itoggle if checkbox is changed
  function toggleTheIToggle() {
    if ($(this).is(':enabled')) {
      if ($(this).is(':checked')) {
        $(this).siblings('label.itoggle')
          .animate({backgroundPosition: '0% -20px'}, 1000, 'easeOutExpo', function () {
            $(this).removeClass('iToff').addClass('iTon');
          });
      } else {
        $(this).siblings('label.itoggle')
          .animate({backgroundPosition: '100% -20px'}, 1000, 'easeOutExpo', function () {
            $(this).removeClass('iToff').addClass('iTon');
          });
      }
    }
  }
  // on every change of an iT_checkbox call toggleTheIToggle
  $('.form-type-checkbox input:checkbox.iT_checkbox', context).live('change', toggleTheIToggle);

  // tables with .select-all checkbox: toggle the tables itoggles
  $('thead .select-all input:checkbox', context).click(function() {
    if ($(this).is(':checked')) {
      $(this).closest('table').find('label.itoggle').each(function() {
        $(this).animate({backgroundPosition: '0% -20px'}, 1000, 'easeOutExpo', function () {
          $(this).removeClass('iToff').addClass('iTon');
        });
      });
    } else {
      $(this).closest('table').find('label.itoggle').each(function() {
        $(this).animate({backgroundPosition: '100% -20px'}, 1000, 'easeOutExpo', function () {
          $(this).removeClass('iToff').addClass('iTon');
        });
      });
    }
    });


  // permissions: add real resp. dummy checkbox to itoggles
  // disabled checkboxes are not visible as disabled, when substituted with 
  // an itoggle
  $('#permissions .form-type-checkbox label.itoggle', context).each(function() {
    // classes setzen
    if ($(this).next('input').is('.dummy-checkbox')) {
      // (assuming) every .dummy-checkbox was disabled from the
      // user.permissions.js script --> doing it for the itoggles
      $(this).addClass('dummy-checkbox').addClass('disabled-itoggle');
    } else if ($(this).next('input').is('.real-checkbox')) {
      $(this).addClass('real-checkbox');
    }
  });

  // permissions: after setting the read/dummy classes: set toggle on/off
  // depending on the checkbox for 'authenticated user' i.e. .rid-2
  // cf. modules/user/user.permissions.js
  $('#permissions .rid-2').each(function() {
    var authCheckbox = this, $row = $(this).closest('tr');
    $row.find('.real-checkbox').each(function () {
      this.style.display = (authCheckbox.checked ? 'none' : '');
    });
    $row.find('.dummy-checkbox').each(function () {
      this.style.display = (authCheckbox.checked ? '' : 'none');
    });
  });

  } // attach
};
})(jQuery);
