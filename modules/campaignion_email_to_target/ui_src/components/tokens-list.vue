<template>
  <section class="tokens-list">
      <table v-for="cat in tokenCategories" class="table table-sm">
        <thead>
          <tr class="token-category">
            <th colspan="2">
              <a href="#" @mousedown.prevent="toggle($index)" @click.prevent>
                <span class="category-expand">{{ expanded[$index] ? '–' : '+' }}</span>
                <strong class="category-title">{{{ cat.title }}}</strong>
              </a>
            </th>
            <th class="category-description">{{{ cat.description }}}</th>
          </tr>
        </thead>
        <tbody v-if="cat.tokens.length && expanded[$index]">
          <tr v-for="token in cat.tokens">
            <td class="token-title">{{{ token.title }}}</td>
            <td class="token-token">
              <a href="#" @mousedown.prevent="insert(token.token)" @click.prevent title="Insert token at cursor position">{{ token.token }}</a>
            </td>
            <td class="token-description">{{{ token.description }}}</td>
          </tr>
        </tbody>
      </table>
  </section>
</template>

<script>
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
