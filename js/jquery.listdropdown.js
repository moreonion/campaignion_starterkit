/*
 * call it like this: $('ul#id').listdropdown()
 * expects ul with lis in it
 * <a> in li are not handled at the moment
 */
(function ( $ ) {

  $.fn.listdropdown = function( options ) {

    var $self = this;

    var defaults = {
      defaultText: 'Choose',
      createWrapper: true,
      emptyListText: 'nothing to choose'
    };
    var settings = $.extend({}, defaults, options );

    $self.hide();

    // create a wrapper around the ul and the trigger
    // needed for positioning of the menu
    if (settings.createWrapper) {
      $self.wrap('<div class="listdropdown-wrapper">');
    }

    // var $active = $switcher.find('a.active');
    // if ($active.length > 0) {
    //   default_text = $active.html();
    // }

    var $trigger = $('<a href="#" class="listdropdown-trigger">' + settings.defaultText + '</a>')
    .insertBefore($self)
    .click(function(e) {
      $self.toggle();
      e.preventDefault();
      e.stopPropagation();
    });

    var $allItems = $self.find('li');
    $allItems.click(function(event) {
       var $target = $(event.delegateTarget);
       $allItems.removeClass('active');
       $target.addClass('active');
       // $trigger.html($target.html());
       $self.hide();
    });

    $('html').click(function(e) {
      // $allItems.removeClass('active');
      $self.hide();
    });

    return this;

  };


}( jQuery ));
