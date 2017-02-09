<template>
  <section class="filter-editor">
    <header>
      <dropdown>
        <button type="button" class="btn dropdown-toggle" data-toggle="dropdown">
          Add filter <span class="caret"></span>
        </button>
        <ul name="dropdown-menu" class="dropdown-menu">
          <li v-for="field in fields">
            <a href="#" class="dropdown-item" @click.prevent="addFilter(field)">{{ field.label }}</a>
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

        <template v-if="filter.operator == 'regexp'">/&nbsp;</template>
        <type-ahead
          :value.sync="filter.value"
          :placeholder="filter.operator == 'regexp' ? 'regular expression' : 'type to browse values'"
          :show-dropdown-on-focus="true"
          key="values"
          :async="e2tApi.url + '/' + e2tApi.dataset + '/attributes/' + filter.attributeName + '/values'"
          search-param="search"
          count-param="count"
          page-param="offset"
          :count="100"
          :lazy-load="true"
          page-mode="offset"
          :headers="{'Authorization': 'JWT ' + e2tApi.token}"
          >
        </type-ahead>
        <template v-if="filter.operator == 'regexp'">&nbsp;/</template>

        <a href="#" @click="removeFilter(filter)" class="remove-filter" title="Remove filter"><span>Delete</span></a>

      </li>
    </ul>

  </section>
</template>

<script>
module.exports = {

  mixins: [require('../mixins/utils.vue')],

  components: {
    dropdown: require('./custom-vue-strap/Dropdown.vue'),
    vSelect: require('./custom-vue-strap/Select.vue'),
    typeAhead: require('./custom-vue-strap/Typeahead.vue')
  },

  props: {
    fields: Array,
    filters: {
      type: Array,
      twoWay: true
    },
    filterDefault: Object,
    operators: {
      type: Map,
      required: true
    }
  },

  data: function() {
    return {
      e2tApi: this.clone(Drupal.settings.campaignion_email_to_target.endpoints['e2t-api']) || {}
    }
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
      filter.id = null
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
