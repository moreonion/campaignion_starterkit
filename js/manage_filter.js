
/**
 * Implementation of Drupal behavior.
 */
(function($) {
Drupal.behaviors.manage_filter = {};
Drupal.behaviors.manage_filter.attach = function(context) {
  var $filterWrapper = $('#campaignion-manage-filter-form');
  $('fieldset[id^=edit-filter]', $filterWrapper).each(function () {
    var $filterFieldset = $(this);
    $filterFieldset.append('<span class="manage-filter-remove">remove</span>');
  });
  $('.manage-filter-remove').click(function() {
    var $fieldsetContent = $(this).siblings('.fieldset-content');
    var $myCheckbox = $('input.filter-active-toggle', $fieldsetContent);
    $myCheckbox.attr('checked', false).trigger('change');
  });
};

})(jQuery);
