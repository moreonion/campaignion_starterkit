<template>
  <div style="position: relative"
       v-bind:class="{
         'typeahead': true,
         'open': showDropdown
       }"
  >
    <input type="text" class="form-control typeahead-input"
      :placeholder="placeholder"
      autocomplete="off"
      v-model="value"
      @input="update"
      @keydown.up="up"
      @keydown.down="down"
      @keydown.enter= "hit"
      @keydown.esc="reset"
      @blur="showDropdown = false"
    />
    <ul class="dropdown-menu" v-el:dropdown>
      <li v-for="item in items" v-bind:class="{'active': isActive($index)}">
        <a class="dropdown-item" @mousedown.prevent="hit" @mousemove="setActive($index)">
          <partial :name="templateName"></partial>
        </a>
      </li>
    </ul>
  </div>
</template>

<script>
import {coerce, delayer} from './utils/utils.js'
import Vue from 'vue'

const _DELAY_ = 200

export default {
  created () {
    this.items = this.primitiveData
  },
  partials: {
    default: '<span v-html="item | highlight value"></span>'
  },
  props: {
    value: {
      twoWay : true,
      type: String,
      default: ''
    },
    data: {
      type: Array
    },
    limit: {
      type: Number,
      default: 8
    },
    async: {
      type: String
    },
    headers: {
      type: Object,
      default: {}
    },
    template: {
      type: String
    },
    templateName: {
      type: String,
      default: 'default'
    },
    key: {
      type: String,
      default: null
    },
    matchCase: {
      type: Boolean,
      coerce: coerce.boolean,
      default: false
    },
    matchStart: {
      type: Boolean,
      coerce: coerce.boolean,
      default: false
    },
    onHit: {
      type: Function,
      default (items) {
        this.reset()
        this.value = items
      }
    },
    placeholder: {
      type: String
    },
    delay: {
      type: Number,
      default: _DELAY_,
      coerce: coerce.number
    }
  },
  data () {
    return {
      showDropdown: false,
      noResults: true,
      current: 0,
      items: []
    }
  },
  computed: {
    primitiveData () {
      if (this.data) {
        return this.data.filter(value => {
          value = this.matchCase ? value : value.toLowerCase()
          var query = this.matchCase ? this.value : this.value.toLowerCase()
          return this.matchStart ? value.indexOf(query) === 0 : value.indexOf(query) !== -1
        }).slice(0, this.limit)
      }
    }
  },
  ready () {
    // register a partial:
    if (this.templateName && this.templateName !== 'default') {
      Vue.partial(this.templateName, this.template)
    }
  },
  methods: {
    update () {
      if (!this.value) {
        this.reset()
        return false
      }
      if (this.data) {
        this.items = this.primitiveData
        this.showDropdown = this.items.length > 0
      }
      if (this.async) this.query()
    },
    query: delayer(function () {
      this.$http.get(this.async + this.value, {
        headers: this.headers
      }).then(response => {
        var data = response.body
        this.items = (this.key ? data[this.key] : data).slice(0, this.limit)
        this.showDropdown = this.items.length > 0
      })
    }, 'delay', _DELAY_),
    reset () {
      this.items = []
      this.value = ''
      this.loading = false
      this.showDropdown = false
    },
    setActive (index) {
      this.current = index
    },
    isActive (index) {
      return this.current === index
    },
    hit (e) {
      e.preventDefault()
      //e.stopPropagation()
      this.onHit(this.items[this.current], this)
    },
    up (e) {
      e.preventDefault()
      if (this.current > 0) this.current--
    },
    down (e) {
      e.preventDefault()
      if (this.current < this.items.length - 1) this.current++
    }
  },
  filters: {
    highlight (value, phrase) {
      return value.replace(new RegExp('(' + phrase + ')', 'gi'), '<strong>$1</strong>')
    }
  }
}
</script>

<style>
.dropdown-menu > li > a {
  cursor: pointer;
}
.typeahead.open .dropdown-menu {
  display: block;
}
</style>
