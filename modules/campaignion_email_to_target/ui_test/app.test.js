describe('app', function() {
  var Vue = require('vue');
  var app = require('../ui_src/app.vue');

  Vue.use(require('vue-dnd'));


  it('has initial data', function() {
    expect(typeof app.data).toBe('function');
    var data = app.data();
    expect(data.operators.has('==')).toBe(true);
    expect(data.operators.has('!=')).toBe(true);
    expect(data.operators.has('regexp')).toBe(true);
    expect(data.currentSpecIndex).toBe(-1);
    expect(Object.getOwnPropertyNames(data.currentSpec).length).toBe(0); // should not have properties of its own
    expect(data.modalDirty).toBe(false);
    expect(data.showSpecModal).toBe(false);
  });

  describe('initialisation', function() {
    var root, vm, testData = require('./example-data.js')

    beforeAll(function() {
      Drupal = {
        settings: {
          campaignion_email_to_target: {
            messages: testData
          }
        }
      }

      root = new Vue({
        template: '<div><test></test></div>',
        components: {
          'test': app
        }
      }).$mount()
      vm = root.$children[0]
    })

    afterAll(function() {
      root.$destroy(true)
      Drupal.settings = {}
    })

    it('parses bootstrapped data', function() {
      expect(vm.defaultMessage.message).toEqual(testData.messageSelection[testData.messageSelection.length - 1].message)
      expect(vm.specs.length).toBe(testData.messageSelection.length - 1)
      expect(vm.specs[0]).toEqual(jasmine.objectContaining(testData.messageSelection[0]))
      expect(vm.hardValidation).toBe(testData.hardValidation)
    });

    it('validates bootstrapped data', function() {
      expect(vm.specs[2].errors).toEqual(jasmine.arrayContaining(['This message won’t be sent. The same filter has been applied above.']))
    })

    it('creates filter strings for bootstrapped data', function() {
      expect(vm.specs[0].filterStr).toBeTruthy()
    })

    it('renders the form header', function() {
      expect(vm.$el.querySelector('h3').textContent).toBe('Message to all remaining targets')
    })

  })

});
