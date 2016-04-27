<template>
  <div>
    <button @click="newSpec('message-template')" class="btn add-message" type="button">Add specific message</button>
    <button @click="newSpec('exclusion')" class="btn add-exclusion" type="button">Add exclusion</button>

    <ul class="specs">
      <li v-for="spec in specs" :spec="spec" v-draggable:x="{index: $index, dragged: 'dragged'}" v-dropzone:x="sort(specs, $index, $droptag, $dropdata)" class="spec row">
        <div class="col-sm-12 col-md-8 col-lg-6">
          <div class="card">
            <div class="spec-info">
              <div class="spec-label">
                <template v-if="spec.label">{{ spec.label }}</template>
                <template v-else>[ {{ filterStrPrefix(spec.type) }} all {{ $index !== 0 ? 'remaining ' : null}}targets where {{{ spec.filterStr }}} ]</template>
              </div>
              <div v-if="spec.label" class="spec-description">{{ filterStrPrefix(spec.type) }} all {{ $index !== 0 ? 'remaining ' : null}}targets where {{{ spec.filterStr }}}</div>
            </div>
            <dropdown class="spec-actions">
              <button type="button" class="btn" @click="editSpec($index)">Edit</button>
              <button type="button" class="btn dropdown-toggle" data-toggle="dropdown" aria-haspopup="true" aria-expanded="false">
                <span class="sr-only">Toggle Dropdown</span>
              </button>
              <div name="dropdown-menu" class="dropdown-menu">
                <a class="dropdown-item" href="#" @click="duplicateSpec($index)">Duplicate</a>
                <a class="dropdown-item" href="#" @click="removeSpec(spec)">Delete</a>
              </div>
            </dropdown>
          </div>
        </div>
        <div class="col-sm-12 col-md-4 col-lg-6">
          <ul class="spec-errors">
            <li v-for="error in spec.errors" class="spec-error">{{ error }}</li>
          </ul>
        </div>
      </li>
    </ul>

    <h3>{{ specs.length ? 'Message to all remaining targets' : 'Default message' }}</h3>
    <div class="row">
      <message-editor :message.sync="defaultMessage.message" class="col-sm-12 col-md-8 col-lg-6"></message-editor>
    </div>

    <modal :show.sync="showSpecModal">
      <div slot="modal-header" class="modal-header">
        <button type="button" class="close" @click="tryCloseModal"><span>&times;</span></button>
        <h4 class="modal-title" >{{modalTitle}}</h4>
      </div>
      <div slot="modal-body" class="modal-body">
        <div class="form-group">
          <label for="spec-label">Label <small>(seen only by you)</small></label>
          <input type="text" v-model="currentSpec.label" id="spec-label" class="form-control">
        </div>
        <filter-editor
          :fields="targetAttributes"
          :filters.sync="currentSpec.filters"
          :filter-default="{type: 'target-attribute'}"
          :operators="operators"
          >
        </filter-editor>
        <section v-if="currentSpec.type == 'message-template'">
          <a href="#" @click="prefillMessage()">Prefill from default message</a>
          <message-editor :message.sync="currentSpec.message"></message-editor>
        </section>
      </div>
      <div slot="modal-footer" :class="{'modal-footer': true, 'alert': modalDirty}">
        {{ modalDirty ? 'You have unsaved changes!' : null }}
        <button type="button" class="btn btn-secondary modal-cancel" @click="tryCloseModal">{{ modalDirty ? 'Discard my changes' : 'Cancel' }}</button>
        <button type="button" class="btn btn-primary modal-save" :disabled="currentSpecIsEmpty" @click="updateSpec">Done</button>
      </div>
    </modal>
  </div>
</template>

<script>
var isEqual = require('lodash/isEqual')

module.exports = {

  mixins: [require('./mixins/defaults.vue'), require('./mixins/utils.vue')],

  components: {
    filterEditor: require('./components/filter-editor.vue'),
    messageEditor: require('./components/message-editor.vue'),
    dropdown: require('./components/custom-vue-strap/Dropdown.vue'),
    modal: require('./components/custom-vue-strap/Modal.vue')
  },

  data() {
    return {
      specs: [],
      defaultMessage: {},
      targetAttributes: [],
      hardValidation: false,
      showSpecModal: false,  // show the modal to edit a specification
      modalDirty: false,     // true if user edited a field in the modal and tried to cancel once
      currentSpecIndex: -1,  // the item in the specs array that is currently edited
      currentSpec: {},       // the specification that is currently edited
      operators: new Map([
        ['==', 'is'],
        ['!=', 'is not'],
        ['regexp', 'matches']
      ])
    };
  },

  computed: {

    modalTitle() {
      if (this.currentSpecIndex != -1) {
        return 'Edit ' + this.currentSpec.label
      } else {
        switch (this.currentSpec.type) {
          case 'message-template':
            return 'Add specific Message'
          case 'exclusion':
            return 'Add exclusion'
        }
      }
    },

    currentSpecIsEmpty() {
      return isEqual(this.currentSpec, this.emptySpec('message-template')) || isEqual(this.currentSpec, this.emptySpec('exclusion'))
    }

  },

  methods: {

    newSpec(type) {
      if (this.validSpecificationTypes().indexOf(type) === -1) return
      this.currentSpec = this.emptySpec(type)
      this.currentSpecIndex = -1
      this.showModal()
    },

    editSpec(index) {
      if (!this.specs[index]) return
      this.currentSpec = this.clone(this.specs[index])
      this.currentSpecIndex = index
      this.showModal()
    },

    updateSpec() {
      this.currentSpec.filterStr = this.filterStr(this.currentSpec.filters)
      if (this.currentSpecIndex == -1) {
        this.specs.push(this.currentSpec)
      } else {
        this.specs.$set(this.currentSpecIndex, this.currentSpec)
      }
      this.validateSpecs()
      this.hideModal()
    },

    duplicateSpec(index) {
      if (!this.specs[index]) return
      var duplicate = this.clone(this.specs[index])
      duplicate.label += ' (Copy)'
      this.currentSpec = duplicate
      this.currentSpecIndex = -1
      this.showModal()
    },

    removeSpec(spec) {
      this.specs.$remove(spec)
    },

    showModal() {
      this.modalDirty = false
      this.showSpecModal = true
    },

    tryCloseModal() {
      if (!this.showSpecModal) return
      // any changes?
      if ( this.currentSpecIndex !== -1 && isEqual(this.currentSpec, this.specs[this.currentSpecIndex])
        || this.currentSpecIndex === -1 && this.currentSpecIsEmpty || this.modalDirty ) {
        // no changes, allow to close modal
        this.hideModal()
      } else {
        // there are unsaved changes, alert!
        this.modalDirty = true
      }
    },

    hideModal() {
      this.showSpecModal = false
    },

    sort(list, id, tag, data) {
      const tmp = list[data.index]
      list.splice(data.index, 1)
      list.splice(id, 0, tmp)
      this.validateSpecs()
    },

    prefillMessage() {
      if (!this.currentSpec.message) return
      for (var field in this.currentSpec.message) {
        if (this.currentSpec.message.hasOwnProperty(field)) {
          if (!this.currentSpec.message[field].trim()) {
            this.currentSpec.message[field] = this.defaultMessage.message[field]
          }
        }
      }
    },

    filterStr(filters) {
      // compose filter string from filters
      var filterStr = ''
      filters.forEach((el, index) => {
        if (index) filterStr += ' and '
        filterStr += '<span class="filter-condition">' + el.attributeLabel + ' ' + this.operators.get(el.operator) + ' ' + (el.value || '<span class="value-missing">[ please specify a value ]</span>') + '</span>'
      })
      return filterStr || '<span class="filter-missing">[ please add a filter ]</span>'
    },

    filterStrPrefix(type) {
      switch(type) {
        case 'message-template': return 'Send this mail to'
        case 'exclusion': return 'Exclude'
      }
    },

    validateSpecs() {
      var errors
      for (let i = 0, j = this.specs.length; i < j; i++) {
        errors = []
        if (!this.specs[i].filters.length) {
          errors.push('No filter selected')
        } else {
          for (let ii = 0, jj = this.specs[i].filters.length; ii < jj; ii++) {
            if (!this.specs[i].filters[ii].value) {
              errors.push('A filter value is missing')
              break
            }
          }
        }
        if ( this.specs[i].type == 'message-template' && !( this.specs[i].message.subject.trim() || this.specs[i].message.header.trim() || this.specs[i].message.body.trim() || this.specs[i].message.footer.trim() ) ) {
          errors.push('Message is empty')
        }
        for (let ii = 0, jj = i; ii < jj; ii++) {
          if (isEqual(this.specs[i].filters, this.specs[ii].filters)) {
            switch (this.specs[i].type) {
              case 'message-template':
                errors.push('This message won’t be sent. The same filter has been applied above.')
                break
              case 'exclusion':
                errors.push('This exclusion won’t be taken into account. The same filter has been applied above.')
                break
            }
            break
          }
        }
        this.specs[i].errors = errors
      }
    },

    parseData(data) {
      if (data.messageSelection && data.messageSelection.length) {
        // The default message is the last message in the messageSelection array and has no filters
        if (data.messageSelection[data.messageSelection.length - 1].filters.length === 0) {
          this.defaultMessage = Object.assign({}, data.messageSelection[data.messageSelection.length - 1])
          this.specs = this.clone(data.messageSelection).slice(0, -1)
        } else {
          this.defaultMessage = this.emptySpec('message-template')
          this.specs = this.clone(data.messageSelection)
        }
      } else {
        this.defaultMessage = this.emptySpec('message-template')
      }

      if (data.targetAttributes) this.targetAttributes = data.targetAttributes
      if (typeof data.hardValidation !== 'undefined') this.hardValidation = data.hardValidation
    }

  },

  created() {
    // stub until campaignion is ready
    if (typeof Drupal.settings.campaignion_email_to_target === 'undefined') {
      Drupal.settings.campaignion_email_to_target = {
        messages: {
          messageSelection: [],
          targetAttributes: [
            {
              name: 'party',
              label: 'Party',
              description: 'Filter by party'
            },
            {
              name: 'constituency',
              label: 'Constituency',
              description: 'Filter by constituency'
            }
          ],
          hardValidation: false
        }
      }
    }

    // Initialize data
    this.parseData(Drupal.settings.campaignion_email_to_target.messages)
    this.validateSpecs()
    for (let i = 0, j = this.specs.length; i < j; i++) {
      this.specs[i].filterStr = this.filterStr(this.specs[i].filters)
    }
  },

  ready() {
    $(document).on("keypress.messages-widget", ":input:not(textarea):not([type=submit])", function(event) {
      if (event.keyCode == 13) {
          event.preventDefault();
      }
    });
  },

  beforeDestroy() {
    $(document).off("keypress.messages-widget")
  }

}
</script>

<style>
</style>
