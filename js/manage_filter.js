
/**
 * Implementation of Drupal behavior.
 */
(function($) {
Drupal.behaviors.manage_filter = {};
Drupal.behaviors.manage_filter.attach = function(context) {
  var $filterWrapper = $('#campaignion-manage-filter-form');
  var $filterFieldsets = $('fieldset[id^=edit-filter-]', $filterWrapper);

  // generate filter list
  var html = '';
  html += '<ul class="manage-filter-dropdown listdropdown-menu">';
  $filterFieldsets.each(function () {
    var $label = $('label:not([for$=active])', $(this));
    html += '<li class="filter-toggle filter-disabled" data-filter-for="' + $(this).attr('id') + '">' + $label.text() + '</li>';
  });
  html += '</ul>';
  $ul = $(html);
  $filterWrapper.prepend($ul);

  // initialize hidden/shown state + add close button
  $filterFieldsets.each(function () {
    var $filterFieldset = $(this);
    $filterFieldset.append('<span class="manage-filter-remove">remove</span>');
    if (!$('input.filter-active-toggle', $filterFieldset).attr('checked')) {
      $filterFieldset.hide();
    } else {
      $('.filter-toggle[data-filter-for=' + $filterFieldset.attr('id') + ']', $filterWrapper).hide();
    }
  });

  // close button handler
  $('.manage-filter-remove').click(function() {
    var $fieldsetContent = $(this).siblings('.fieldset-content');
    var $filterFieldset = $(this).closest('fieldset');
    var $myCheckbox = $('input.filter-active-toggle', $fieldsetContent);
    $myCheckbox.attr('checked', false).trigger('change');

    $(this).closest('fieldset').hide();
    $('.filter-toggle[data-filter-for=' + $filterFieldset.attr('id') + ']', $filterWrapper).show();
  });

  // filter add handler
  // get fieldset, show it and enable filter active checkbox
  $('.filter-toggle', $filterWrapper).click(function() {
    var $self = $(this);
    var filterFieldsetId = $self.attr('data-filter-for');
    var $filterFieldset = $('#' + filterFieldsetId);

    $filterFieldset.show();
    $self.hide();
    $('input.filter-active-toggle', $filterFieldset).attr('checked', true).trigger('change');

  });

  $('ul.manage-filter-dropdown').listdropdown({
    defaultText: Drupal.t('Add filter')
  });

};

})(jQuery);
