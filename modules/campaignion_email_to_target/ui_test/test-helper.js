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
      }
    })

    rootInstance = new Vue(options)

    return rootInstance.$children[0]
  },

  teardown: function(vm) {
    vm.$root.$destroy(true);
    $('body').empty()
    Drupal = null
  }
}
