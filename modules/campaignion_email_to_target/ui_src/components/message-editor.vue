<template>
  <section class="message-editor">
    <div class="form-group">
      <label for="message-subject-{{ _uid }}">Subject <a href="#" @click.prevent="toggleHelpText('subject')">?</a></label>
      <input type="text" v-model="message.subject" data-token-insertable class="form-control" id="message-subject-{{ _uid }}">
      <small v-if="helpText['subject']" class="text-muted">Helptext goes here.</small>
    </div>
    <div class="form-group">
      <label for="message-header-{{ _uid }}">Header <a href="#" @click.prevent="toggleHelpText('header')">?</a></label>
      <textarea rows="3" v-model="message.header" data-token-insertable class="form-control" id="message-header-{{ _uid }}"></textarea>
      <small v-if="helpText['header']" class="text-muted">Helptext goes here.</small>
    </div>
    <div class="form-group">
      <label for="message-body-{{ _uid }}">Body <a href="#" @click.prevent="toggleHelpText('body')">?</a></label>
      <textarea rows="6" v-model="message.body" data-token-insertable class="form-control" id="message-body-{{ _uid }}"></textarea>
      <small v-if="helpText['body']" class="text-muted">Helptext goes here.</small>
    </div>
    <div class="form-group">
      <label for="message-footer-{{ _uid }}">Footer <a href="#" @click.prevent="toggleHelpText('footer')">?</a></label>
      <textarea rows="3" v-model="message.footer" data-token-insertable class="form-control" id="message-footer-{{ _uid }}"></textarea>
      <small v-if="helpText['footer']" class="text-muted">Helptext goes here.</small>
    </div>
  </section>
</template>

<script>
module.exports = {

  data() {
    return {
      helpText: {
        subject: false,
        header: false,
        body: false,
        footer: false
      }
    }
  },

  props: {
    message: {
      type: Object,
      twoWay: true,
      default() {
        return {
          subject: null,
          header: null,
          body: null,
          footer: null
        }
      }
    }
  },

  methods: {
    toggleHelpText(which) {
      this.helpText[which] = !this.helpText[which]
    }
  },

  events: {
    collapseHelpText() {
      for (var which in this.helpText) {
        if (this.helpText.hasOwnProperty(which)) {
          this.helpText[which] = false
        }
      }
    }
  }

}
</script>
