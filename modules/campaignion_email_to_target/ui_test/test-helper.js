var Vue = require('vue');

module.exports = {

  setup: function(app, data, options) {
    Drupal = {
      settings: {
        campaignion_email_to_target: data
      }
    }

    $('body').append($('<div id="app"></div>'))

    if (typeof options === 'undefined') options = {}

    $.extend(options, {
      el: '#app',
      template: '<div class="email-to-target-messages-widget e2tmw"><test></test></div>',
      components: {
        'test': app
      },
      ready: function() {
        $(window).off('beforeunload') // karma does't like this event handler...
      }
    })

    var rootInstance = new Vue(options)

    return rootInstance.$children[0]
  },

  teardown: function(vm) {
    vm.$root.$destroy(true);
    $('body').empty()
    Drupal = null
  },

  triggerDragAndDrop: function (elemDrag, elemDrop) {
    if (!elemDrag || !elemDrop) return false;

    // function for triggering mouse events
    var fireMouseEvent = function (type, elem, centerX, centerY) {
      var evt = document.createEvent('MouseEvents');
      evt.initMouseEvent(type, true, true, window, 1, 1, 1, centerX, centerY, false, false, false, false, 0, elem);
      elem.dispatchEvent(evt);
    };

    // calculate positions
    var pos = elemDrag.getBoundingClientRect();
    var center1X = Math.floor((pos.left + pos.right) / 2);
    var center1Y = Math.floor((pos.top + pos.bottom) / 2);
    pos = elemDrop.getBoundingClientRect();
    var center2X = Math.floor((pos.left + pos.right) / 2);
    var center2Y = Math.floor((pos.top + pos.bottom) / 2);

    // mouse over dragged element and mousedown
    fireMouseEvent('mousemove', elemDrag, center1X, center1Y);
    fireMouseEvent('mouseenter', elemDrag, center1X, center1Y);
    fireMouseEvent('mouseover', elemDrag, center1X, center1Y);
    fireMouseEvent('mousedown', elemDrag, center1X, center1Y);

    // start dragging process over to drop target
    fireMouseEvent('dragstart', elemDrag, center1X, center1Y);
    fireMouseEvent('drag', elemDrag, center1X, center1Y);
    fireMouseEvent('mousemove', elemDrag, center1X, center1Y);
    fireMouseEvent('drag', elemDrag, center2X, center2Y);
    fireMouseEvent('mousemove', elemDrop, center2X, center2Y);

    // trigger dragging process on top of drop target
    fireMouseEvent('mouseenter', elemDrop, center2X, center2Y);
    fireMouseEvent('dragenter', elemDrop, center2X, center2Y);
    fireMouseEvent('mouseover', elemDrop, center2X, center2Y);
    fireMouseEvent('dragover', elemDrop, center2X, center2Y);

    // release dragged element on top of drop target
    fireMouseEvent('drop', elemDrop, center2X, center2Y);
    fireMouseEvent('dragend', elemDrag, center2X, center2Y);
    fireMouseEvent('mouseup', elemDrag, center2X, center2Y);

    return true;
  }

}

$.fn.selectRange = function(start, end) {
  if(end === undefined) {
    end = start;
  }
  return this.each(function() {
    if('selectionStart' in this) {
      this.selectionStart = start;
      this.selectionEnd = end;
    } else if(this.setSelectionRange) {
      this.setSelectionRange(start, end);
    } else if(this.createTextRange) {
      var range = this.createTextRange();
      range.collapse(true);
      range.moveEnd('character', end);
      range.moveStart('character', start);
      range.select();
    }
  });
};

$.fn.dispatch = function(type) {
  var e = document.createEvent("HTMLEvents");
  e.initEvent(type, true, true);
  return this.each(function() {
    this.dispatchEvent(e);
  })
}
