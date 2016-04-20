var Vue = require('vue')
var App = require('./app.vue')

Vue.use(require('vue-dnd'));

new Vue({
  el: '.email-to-target-messages-widget',
  components: {
    'app': App
  }
})
