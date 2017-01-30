/*
 * Basic implementation of dragula.js in Vue - single container only
 * Heavily inspired by https://github.com/valor-software/ng2-dragula
 *
 * Needs Vue commit 2486a3b as a fix for https://github.com/vuejs/vue/issues/2745
 *
 * use like:
 *  <ul v-dragula="list" :dragula-options="{ ... }">
 *    <li v-for="item in list">{{ item }}</li>
 *  </ul>
 *
 */

import dragula from 'dragula'

export default {

  install: function (Vue) {

    Vue.directive('dragula', {

      params: ['dragula-options'],

      bind: function() {
        var self = this;
        var dragIndex;
        var dragElm;
        var options = this.params.dragulaOptions || {};

        if (this.el.querySelector('[dragula-handle]')) {
          options.moves = function (el, container, handle) {
            return handle.hasAttribute('dragula-handle');
          }
        }

        this.drake = dragula([this.el], options);

        this.drake.on('drag', function(el, source) {
          dragElm = el;
          dragIndex = domIndexOf(el, source);
        });

        this.drake.on('drop', function(dropElm, target, source) {
          if (!target) return;
          var dropIndex = domIndexOf(dropElm, target);
          if (target === source) {
            self.vm[self.expression].splice(dropIndex, 0, self.vm[self.expression].splice(dragIndex, 1)[0]);
          }
        })

        function domIndexOf(child, parent) {
          return Array.prototype.indexOf.call(parent.children, child);
        }
      },

      unbind: function() {
        this.drake.destroy()
      }

    })

  }

}
