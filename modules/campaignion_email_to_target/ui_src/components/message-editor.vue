<template>
  <section class="message-editor">
    <div class="form-group">
      <label for="message-subject-{{ _uid }}">Subject</label>
      <input type="text" v-model="message.subject" data-token-insertable class="form-control" id="message-subject-{{ _uid }}">
    </div>
    <div class="form-group">
      <label for="message-header-{{ _uid }}">Header</label>
      <textarea rows="3" v-model="message.header" data-token-insertable class="form-control" id="message-header-{{ _uid }}"></textarea>
    </div>
    <div class="form-group">
      <label for="message-body-{{ _uid }}">Body</label>
      <textarea rows="6" v-model="message.body" data-token-insertable class="form-control" id="message-body-{{ _uid }}"></textarea>
    </div>
    <div class="form-group">
      <label for="message-footer-{{ _uid }}">Footer</label>
      <textarea rows="3" v-model="message.footer" data-token-insertable class="form-control" id="message-footer-{{ _uid }}"></textarea>
    </div>
  </section>
</template>

<script>
module.exports = {

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
  }

}
</script>
