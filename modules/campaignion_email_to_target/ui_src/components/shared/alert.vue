<template>
  <v-modal :show.sync="show" effect="zoom" :small="true" id="alert-modal">
    <div slot="modal-header" class="modal-header" :style="{'display': options.title ? 'block' : 'none'}">
      <h4 class="modal-title" >{{ options.title }}</h4>
    </div>
    <div slot="modal-body" class="modal-body">
      {{{ options.message }}}
    </div>
    <div slot="modal-footer" class="modal-footer">
      <button type="button" class="btn btn-secondary" v-if="isConfirm" @click="cancel">{{ options.cancelBtn || 'Cancel' }}</button>
      <button type="button" class="btn btn-primary" @click="ok">{{ options.confirmBtn || 'OK' }}</button>
    </div>
  </v-modal>
</template>

<script>
export default {
  replace: false,
  components: {
    vModal: require('../custom-vue-strap/Modal.vue')
  },
  data() {
    return {
      show: false,
      isConfirm: false,
      options: {
        title: '',
        message: '',
        confirmBtn: '',
        cancelBtn: '',
        confirm: function() {},
        cancel: function() {}
      }
    }
  },
  methods: {
    ok() {
      if (typeof this.options.confirm == 'function') {
        this.options.confirm()
      }
      this.show = false
    },
    cancel() {
      this.show = false
      if (typeof this.options.cancel == 'function') {
        this.options.cancel()
      }
    }
  },
  events: {
    'alert': function(options) {
      this.options = options
      this.isConfirm = false
      this.show = true
    },
    'confirm': function(options) {
      this.options = options
      this.isConfirm = true
      this.show = true
    }
  }
}
</script>
