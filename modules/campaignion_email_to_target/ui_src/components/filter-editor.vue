<template>
  <section class="filter-editor">
    <header>
      <dropdown>
        <button type="button" class="btn dropdown-toggle" data-toggle="dropdown">
          Add filter <span class="caret"></span>
        </button>
        <ul name="dropdown-menu" class="dropdown-menu">
          <li v-for="field in fields">
            <a href="#" class="dropdown-item" @click="addFilter(field)">{{ field.label }}</a>
          </li>
        </ul>
      </dropdown>
    </header>

    <ul class="filters">
      <li v-for="filter in filters" class="filter card form-inline">

        <span v-if="$index === 0" class="logical-connective">If</span>
        <span v-else class="logical-connective">and</span>

        <span class="attribute-label">{{ filter.attributeLabel }}</span>

        <v-select :value.sync="filter.operator" :options="operatorOptions" :close-on-select="true"></v-select>

        <template v-if="filter.operator == 'regexp'">
          /<input class="form-control" type="text" v-model="filter.value" placeholder="regular expression">/
        </template>
        <template v-else>
          <input class="form-control" type="text" v-model="filter.value">
        </template>

        <a href="#" @click="removeFilter(filter)">Delete</a>

      </li>
    </ul>

  </section>
</template>

<script>
module.exports = {

  components: {
    dropdown: require('./custom-vue-strap/Dropdown.vue'),
    vSelect: require('./custom-vue-strap/Select.vue')
  },

  props: {
    fields: Array,
    filters: {
      type: Array,
      twoWay: true
    },
    filterDefault: Object,
    operators: {
      type: Object,
      required: true
    }
  },

  data: function() {
    return {}
  },

  computed: {
    operatorOptions() {
      // provide operators in the format {value: '==', label: 'is'}
      if (!this.operators) return
      var arr = []
      this.operators.forEach(function(value, key) {
        arr.push({
          value: key,
          label: value
        })
      })
      return arr
    }
  },

  methods: {
    addFilter(field) {
      if (!field.name || !field.label) return
      var filter = Object.assign({}, this.filterDefault)
      filter.attributeName = field.name
      filter.attributeLabel = field.label
      filter.operator = '==' // default
      filter.value = ''
      this.filters.push(filter)
    },
    removeFilter(filter) {
      this.filters.$remove(filter)
    }
  }

}
</script>
