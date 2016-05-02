<template>
  <section class="tokens-list">
    <ul class="token-categories">
      <li v-for="cat in tokenCategories">
        <a href="#" @click.prevent="toggle(cat)">
          <span class="category-expand">{{ cat.expanded ? '-' : '+' }}</span>
          <strong class="category-title">{{ cat.title }}</strong>
        </a>
        <span class="category-description">{{ cat.description }}</span>
        <ul v-if="cat.tokens.length && cat.expanded" class="tokens">
          <li v-for="token in cat.tokens">
            <span class="token-title">{{ token.title }}</span>
            <span class="token-token">{{ token.token }}</span>
            <span class="token-description">{{ token.description }}</span>
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
  methods: {
    toggle(cat) {
      if (typeof cat.expanded === 'undefined') {
        Vue.set(cat, 'expanded', true)
      } else {
        cat.expanded = !cat.expanded
      }
    }
  }
}
</script>
