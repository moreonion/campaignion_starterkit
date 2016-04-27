var Vue = require('vue');

module.exports = {
  setup: function(app, data) {
    Drupal = {
      settings: {
        campaignion_email_to_target: {
          messages: data
        }
      }
    }

    $('body').append($('<div id="app"></div>'))

    rootInstance = new Vue({
      el: '#app',
      template: '<div class="email-to-target-messages-widget e2tmw"><test></test></div>',
      components: {
        'test': app
      }
    })

    return rootInstance.$children[0]
  },

  teardown: function(vm) {
    vm.$root.$destroy(true);
    $('body').empty()
    Drupal = null
  }
}
