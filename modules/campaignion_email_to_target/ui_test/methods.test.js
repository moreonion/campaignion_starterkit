import {setup, teardown} from './test-helper.js'
import find from 'lodash/find'

import app from '../ui_src/app.vue'
import testData from './data/example-data.js'

describe('methods', function() {
  var vm

  beforeEach(function() {
    vm = setup(app, testData)
  })

  afterEach(function() {
    teardown(vm)
  })

  describe('emptySpec', function() {
    it('returns empty message-template', function() {
      var m = vm.emptySpec('message-template');

      expect(m.id).toBe(null)
      expect(m.type).toBe('message-template')
      expect(m.label).toBe('')
      expect(m.filters.length).toBe(0)
      expect(m.message).toEqual({
        subject: '',
        header: '',
        body: '',
        footer: ''
      })
    })

    it('returns empty exclusion', function() {
      var m = vm.emptySpec('exclusion');

      expect(m.id).toBe(null)
      expect(m.type).toBe('exclusion')
      expect(m.label).toBe('')
      expect(m.filters.length).toBe(0)
    })

  })

  describe('clone', function() {
    it('clones an object', function() {
      var object = {foo: 21, bar: 'baz'}
      var clone = vm.clone(object);

      expect(clone).toEqual(object)
      expect(clone).not.toBe(object)
    })
  })

  describe('newSpec', function() {

    beforeEach(function() {
      spyOn(vm, 'showModal');
      vm.newSpec('message-template');
    })

    it('populates currentSpec', function() {
      expect(vm.currentSpec).toEqual(vm.emptySpec('message-template'))
    })

    it('sets currentSpecIndex', function() {
      expect(vm.currentSpecIndex).toBe(-1)
    })

    it('calls showModal', function() {
      expect(vm.showModal).toHaveBeenCalled()
    })

  })

  describe('editSpec', function() {

    beforeEach(function() {
      spyOn(vm, 'showModal');
      vm.editSpec(1);
    })

    it('populates currentSpec', function() {
      expect(vm.currentSpec).toEqual(vm.specs[1])
      expect(vm.currentSpec).not.toBe(vm.specs[1])
    })

    it('sets currentSpecIndex', function() {
      expect(vm.currentSpecIndex).toBe(1)
    })

    it('calls showModal', function() {
      expect(vm.showModal).toHaveBeenCalled()
    })

  })

  describe('updateSpec', function() {

    beforeEach(function() {
      spyOn(vm, 'filterStr').and.callThrough();
      spyOn(vm, 'validateSpecs');
      spyOn(vm, 'hideModal');

      this.idx = 2;
      this.newLabel = 'this is the new label';
    })

    it('stores a new message', function() {
      vm.newSpec('message-template');
      vm.currentSpec.label = this.newLabel;
      vm.updateSpec();

      expect(vm.filterStr).toHaveBeenCalled()
      expect(vm.specs[vm.specs.length - 1].label).toEqual(this.newLabel)
      expect(vm.validateSpecs).toHaveBeenCalled()
      expect(vm.hideModal).toHaveBeenCalled()
    })

    it('updates a message', function() {
      vm.editSpec(this.idx);
      vm.currentSpec.label = this.newLabel;
      vm.updateSpec();

      expect(vm.filterStr).toHaveBeenCalled()
      expect(vm.specs[this.idx].label).toEqual(this.newLabel)
      expect(vm.validateSpecs).toHaveBeenCalled()
      expect(vm.hideModal).toHaveBeenCalled()
    })

  })

  describe('duplicateSpec', function() {
    it('clones a message', function() {
      spyOn(vm, 'showModal');

      vm.duplicateSpec(0);

      expect(vm.currentSpec.id).toBe(vm.emptySpec(vm.specs[0].type).id)
      expect(vm.currentSpec.label).toBe(vm.specs[0].label + ' (Copy)')
      expect(vm.currentSpecIndex).toBe(-1)
      expect(vm.showModal).toHaveBeenCalled()
    })
  })

  describe('removeSpec', function() {

    beforeEach(function() {
      spyOn(vm, '$broadcast');

      vm.removeSpec(vm.specs[0]);
      this.eventArgs = vm.$broadcast.calls.mostRecent().args;
    })

    it('broadcasts confirm event and provides callback', function() {
      expect(vm.$broadcast).toHaveBeenCalled()
      expect(this.eventArgs[0]).toBe('confirm')
      expect(typeof this.eventArgs[1].confirm).toBe('function')
    })

    it('callback function removes a message', function() {
      var specsCount = vm.specs.length;

      this.eventArgs[1].confirm()

      expect(vm.specs.length).toBe(specsCount - 1)
    })

  })

  describe('showModal', function() {

    beforeEach(function(done) {
      spyOn(vm.$refs.specModal, '$broadcast');

      vm.showModal();
      vm.$nextTick(function() {
        done()
      })
    })

    it('sets properties and broadcasts collapseHelpText event', function(done) {
      expect(vm.modalDirty).toBe(false)
      expect(vm.showSpecModal).toBe(true)
      expect(vm.$refs.specModal.$broadcast).toHaveBeenCalled()
      expect(vm.$refs.specModal.$broadcast.calls.mostRecent().args[0]).toBe('collapseHelpText')
      done()
    })

    it('puts the focus on the first input and scrolls to the top', function(done) {
      expect($('input', vm.$refs.specModal.$el)).toBeFocused()
      expect(vm.$refs.specModal.$el.scrollTop).toBe(0)
      done()
    })
  })

  describe('tryCloseModal', function() {

    beforeEach(function() {
      spyOn(vm, 'hideModal')
    })

    afterEach(function() {
      vm.hideModal.calls.reset()
    })

    it('closes the dialog if an existing message was left unchanged', function() {
      vm.editSpec(0);
      vm.tryCloseModal()

      expect(vm.hideModal).toHaveBeenCalled()
    })

    it('closes the dialog if a new message was left unchanged', function() {
      vm.newSpec('message-template');
      vm.tryCloseModal()

      expect(vm.hideModal).toHaveBeenCalled()
    })

    it('sets modalDirty if an existing message was changed', function() {
      vm.editSpec(0);
      vm.currentSpec.message.subject = 'foobarxyz';
      vm.tryCloseModal();

      expect(vm.modalDirty).toBe(true)
      expect(vm.hideModal).not.toHaveBeenCalled()
    })

    it('sets modalDirty if a new message has content', function() {
      vm.newSpec('message-template');
      vm.currentSpec.message.body = 'foobarxyz';
      vm.tryCloseModal()

      expect(vm.modalDirty).toBe(true)
      expect(vm.hideModal).not.toHaveBeenCalled()
    })

    it('closes the dialog if called twice, second time via cancel button', function() {
      vm.newSpec('message-template');
      vm.currentSpec.message.body = 'foobarxyz';
      vm.tryCloseModal()
      vm.tryCloseModal({button: 'cancel'})

      expect(vm.hideModal).toHaveBeenCalled()
    })

  })

  describe('hideModal', function() {
    it('sets showSpecModal', function() {
      vm.showSpecModal = true;
      vm.hideModal()

      expect(vm.showSpecModal).toBe(false)
    })
  })

  describe('prefillMessage', function() {

    it('clones defaultMessage to currentSpec.message', function() {
      vm.newSpec('message-template');
      vm.currentSpec.message.body = '    '; // this should count as a blank field
      vm.prefillMessage();

      for (var field in vm.defaultMessage) {
        if (vm.defaultMessage.hasOwnProperty(field)) {
          expect(vm.currentSpec.message[field]).toBe(vm.defaultMessage.message[field])
        }
      }
    })

    it('leaves fields with content alone', function() {
      vm.newSpec('message-template');
      vm.currentSpec.message.body = 'foobar';
      vm.prefillMessage();

      for (var field in vm.defaultMessage) {
        if (vm.defaultMessage.hasOwnProperty(field) && field != 'body') {
          expect(vm.currentSpec.message[field]).toBe(vm.defaultMessage.message[field])
        }
      }
      expect(vm.currentSpec.message.body).toBe('foobar')
    })

  })

  describe('filterStr', function() {
    var openingTag = '<span class="filter-condition">';
    var closingTag = '</span>';

    it('composes string for one filter', function() {
      var s = vm.filterStr([{
        attributeName: 'first_name',
        attributeLabel: 'first name',
        operator: '==',
        value: 'jane'
      }])

      expect(s).toBe(openingTag + 'first name is jane' + closingTag)
    })

    it('composes string for two filters', function() {
      var s = vm.filterStr([{
        attributeName: 'first_name',
        attributeLabel: 'first name',
        operator: '==',
        value: 'jane'
      },
      {
        attributeName: 'last_name',
        attributeLabel: 'last name',
        operator: '!=',
        value: 'doe'
      }])

      expect(s).toBe(openingTag + 'first name is jane' + closingTag + ' and ' + openingTag + 'last name is not doe' + closingTag)
    })

    it('inserts error message for missing value', function() {
      var s = vm.filterStr([{
        attributeName: 'first_name',
        attributeLabel: 'first name',
        operator: '==',
        value: ''
      }])

      expect(s).toContain('<span class="value-missing">')
    })

    it('returns error message for missing filter', function() {
      var s = vm.filterStr([])

      expect(s).toBe('<span class="filter-missing">[&nbsp;please add a filter&nbsp;]</span>')
    })

  })

  describe('isEmptyMessage', function() {

    it('considers a message with content in one field not empty', function() {
      var empty = vm.isEmptyMessage({
        subject: '',
        header: 'foo',
        body: '',
        footer: ''
      });

      expect(empty).toBe(false)
    })

    it('considers a message with only whitespace characters empty', function() {
      var empty = vm.isEmptyMessage({
        subject: '  ',
        header: '\n   ',
        body: '  \r',
        footer: '\t '
      });

      expect(empty).toBe(true)
    })

  })

  describe('serializeData', function() {

    beforeEach(function() {
      this.data = vm.serializeData()
    })

    it('returns a string', function() {
      expect(typeof this.data).toBe('string')
    })

    it('appends the default message to the specs array', function() {
      var messageSelection = JSON.parse(this.data).messageSelection;

      expect(vm.specs.length).toBe(messageSelection.length - 1)
      expect(vm.defaultMessage).toEqual(jasmine.objectContaining(messageSelection[messageSelection.length - 1]))
      expect(vm.specs[0]).toEqual(jasmine.objectContaining(messageSelection[0]))
    })

  })

  describe('unsavedChanges', function() {
    var initialSpecs;

    beforeEach(function() {
      initialSpecs = vm.specs;
    })

    afterEach(function() {
      vm.specs = JSON.parse(JSON.stringify(initialSpecs));
    })

    it('returns false if nothing was changed', function() {
      expect(vm.unsavedChanges()).toBe(false)
    })

    it('returns true if a filter value was changed', function() {
      vm.specs[1].filters[0].value += 'bla';

      expect(vm.unsavedChanges()).toBe(true)
    })

    it('returns true if a message subject was changed', function() {
      vm.specs[0].message.subject += 'foo';

      expect(vm.unsavedChanges()).toBe(true)
    })

    it('returns true if the message order was changed', function() {
      var s = vm.specs[3];
      vm.specs[3] = vm.specs[2];
      vm.specs[2] = s;

      expect(vm.unsavedChanges()).toBe(true)
    })

    it('returns true if the default message was changed', function() {
      vm.defaultMessage.body += 'foo';

      expect(vm.unsavedChanges()).toBe(true)
    })

  })

})
