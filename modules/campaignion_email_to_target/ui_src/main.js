var Vue = require('vue')
var App = require('./app.vue')

new Vue({
  el: '.email-to-target-messages-widget',
  components: {
    'app': App
  }
})
