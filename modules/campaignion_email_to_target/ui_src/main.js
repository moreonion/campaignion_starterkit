import Vue from 'vue'
import App from './app.vue'

import dragula from './plugins/vue-dragula.js'
import resource from 'vue-resource'

Vue.use(dragula);
Vue.use(resource);

new Vue({
  el: '.email-to-target-messages-widget',
  components: {
    'app': App
  }
})
