var Vue = require('vue')
var App = require('./app.vue')

Vue.use(require('vue-dnd'));
Vue.use(require('vue-resource'));

new Vue({
  el: '.email-to-target-messages-widget',
  components: {
    'app': App
  },
  http: {
    headers: {
//      Authorization: 'Basic YXBpOnBhc3N3b3Jk'
    }
  }
})
