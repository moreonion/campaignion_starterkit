describe('messages widget', function() {
  var setup = require('./test-helper.js').setup;
  var teardown = require('./test-helper.js').teardown;
  var triggerDragAndDrop = require('./test-helper.js').triggerDragAndDrop;
  var find = require('lodash/find');

  var Vue = require('vue');
  var app = require('../ui_src/app.vue');

  it('has initial data', function() {
    var data = app.data();

    expect(data.specs.length).toBe(0);
    expect(Object.getOwnPropertyNames(data.defaultMessage).length).toBe(0); // should not have properties of its own
    expect(data.targetAttributes.length).toBe(0);
    expect(data.tokenCategories.length).toBe(0);
    expect(data.hardValidation).toBe(false);
    expect(data.showSpecModal).toBe(false);
    expect(data.modalDirty).toBe(false);
    expect(data.currentSpecIndex).toBe(-1);
    expect(Object.getOwnPropertyNames(data.currentSpec).length).toBe(0); // should not have properties of its own
    expect(data.operators.has('==')).toBe(true);
    expect(data.operators.has('!=')).toBe(true);
    expect(data.operators.has('regexp')).toBe(true);
  });

  describe('initialisation', function() {
    var vm, testData = require('./data/example-data.js')

    beforeAll(function() {
      vm = setup(app, testData)
    })

    afterAll(function() {
      teardown(vm)
    })

    it('parses bootstrapped data', function() {
      var compareSpec = testData.messageSelection[0]
      compareSpec.filters[0].attributeLabel = 'Political Affiliation';

      expect(vm.defaultMessage.message).toEqual(testData.messageSelection[testData.messageSelection.length - 1].message)
      expect(vm.specs.length).toBe(testData.messageSelection.length - 1)
      expect(vm.specs[0]).toEqual(jasmine.objectContaining(compareSpec))
      expect(vm.targetAttributes).toEqual(testData.targetAttributes)
      expect(vm.tokenCategories).toEqual(testData.tokens)
      expect(vm.hardValidation).toBe(testData.hardValidation)
      expect(vm.specs[0].filters[0].attributeLabel).toBe(compareSpec.filters[0].attributeLabel)
    });


    describe('spec validation', function() {

      it('checks if a spec lacks a filter', function() {
        var s = find(vm.specs, ['label', 'exclusion without a filter']);
        expect(s.errors).toEqual(jasmine.arrayContaining([{type: 'filter', message: 'No filter selected'}]))
      })

      it('checks if a filter lacks a value', function() {
        var s = find(vm.specs, ['label', 'message with a previously used filter and a missing filter value']);
        expect(s.errors).toEqual(jasmine.arrayContaining([{type: 'filter', message: 'A filter value is missing'}]))
      })

      it('checks if a message is empty or consists of white space only', function() {
        var s = find(vm.specs, ['label', 'same filter as message above, empty message']);
        expect(s.errors).toEqual(jasmine.arrayContaining([{type: 'message', message: 'Message is empty'}]))
      })

      it('checks if a filter has been used by a preceding spec', function() {
        var s1 = find(vm.specs, ['label', 'shares a filter with first message']);
        var s2 = find(vm.specs, ['label', 'same filter as message above, empty message']);

        expect(s1.errors).toEqual(jasmine.arrayContaining([{type: 'filter', message: 'This message won’t be sent. The same filter has been applied above.'}]))
        expect(s2.errors).toEqual(jasmine.arrayContaining([{type: 'filter', message: 'This message won’t be sent. The same filter has been applied above.'}]))
      })

      it('ignores the filter order if a spec has other filter errors', function() {
        var s = find(vm.specs, ['label', 'message with a previously used filter and a missing filter value']);

        expect(s.errors).not.toEqual(jasmine.arrayContaining([{type: 'filter', message: 'This message won’t be sent. The same filter has been applied above.'}]))
      })

    })

    it('creates filter strings for bootstrapped data', function() {
      expect(vm.specs[0].filterStr).toContain('Political Affiliation')
      expect(vm.specs[0].filterStr).toContain('Green Party')
    })

    it('renders the form header', function() {
      expect(vm.$el.querySelector('.message-editor legend').textContent).toBe('Message to all remaining targets')
    })

  })

});
