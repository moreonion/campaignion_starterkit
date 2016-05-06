<template>
  <section class="tokens-list">
    <ul class="token-categories">
      <li v-for="cat in tokenCategories">
        <a href="#" @mousedown.prevent="toggle($index)" @click.prevent>
          <span class="category-expand">{{ expanded[$index] ? '-' : '+' }}</span>
          <strong class="category-title">{{{ cat.title }}}</strong>
        </a>
        <span class="category-description">{{{ cat.description }}}</span>
        <ul v-if="cat.tokens.length && expanded[$index]" class="tokens">
          <li v-for="token in cat.tokens">
            <span class="token-title">{{{ token.title }}}</span>
            <span class="token-token">
              <a href="#" @mousedown.prevent="insert(token.token)" @click.prevent title="Insert token at cursor position">{{ token.token }}</a>
            </span>
            <span class="token-description">{{{ token.description }}}</span>
          </li>
        </ul>
      </li>
    </ul>
  </section>
</template>

<script>
var Vue = require('vue')

export default {
  props: {
    tokenCategories: Array
  },
  data() {
    return {
      expanded: []
    }
  },
  methods: {
    toggle(idx) {
      this.expanded.$set(idx, !this.expanded[idx])
    },

    insert(token) {
      if (document.activeElement.hasAttribute('data-token-insertable')) {
        this.insertAtCaret(document.activeElement, token)
      }
    },

    insertAtCaret(txtarea, text) {
      var scrollPos = txtarea.scrollTop;
      var strPos = 0;
      var br = ((txtarea.selectionStart || txtarea.selectionStart == '0') ?
        "ff" : (document.selection ? "ie" : false ) );
      if (br == "ie") {
        txtarea.focus();
        var range = document.selection.createRange();
        range.moveStart ('character', -txtarea.value.length);
        strPos = range.text.length;
      }
      else if (br == "ff") strPos = txtarea.selectionStart;

      var front = (txtarea.value).substring(0,strPos);
      var back = (txtarea.value).substring(strPos,txtarea.value.length);
      txtarea.value=front+text+back;
      strPos = strPos + text.length;
      if (br == "ie") {
        txtarea.focus();
        var range = document.selection.createRange();
        range.moveStart ('character', -txtarea.value.length);
        range.moveStart ('character', strPos);
        range.moveEnd ('character', 0);
        range.select();
      }
      else if (br == "ff") {
        txtarea.selectionStart = strPos;
        txtarea.selectionEnd = strPos;
        txtarea.focus();
      }
      txtarea.scrollTop = scrollPos;
    }
  }
}
</script>
