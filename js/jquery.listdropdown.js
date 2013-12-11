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

    var $trigger = $('<a href="#" class="listdropdown-trigger">' + settings.defaultText + '<span class="caret"></span></a>')
    .insertBefore($self)
    .click(function(e) {
      $self.toggle();
      _checkIfEmpty($self);
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

    // creates and toggles the empty list info element
    function _checkIfEmpty($ul) {
      var $li = $('li', $ul).not('.empty-list-text');
      var $visible = $li.filter(':visible');
      var $emptyListText = $('.empty-list-text');
      
      // generate empty-list li if not already there
      if ($emptyListText.length < 1) {
        $emptyListText = $('<li class="empty-list-text">' + settings.emptyListText + '</li>')
        $ul.prepend($emptyListText);
      }

      // use classes fist/last to determine the first/last *visible* li
      // this cannot be done easily in css
      $li.removeClass('first last');

      if ($visible.length > 0) {
        $emptyListText.hide();
        $visible.first().addClass('first');
        $visible.last().addClass('last');
      } else {
        $emptyListText.show();
      }

    }
    
    return this;

  };


}( jQuery ));
