describe('app', function() {
  var app = require('../ui_src/app.vue');
  var Vue = require('vue');

  it('should have initial data', function() {
    expect(typeof app.data).toBe('function');
    var data = app.data();
    expect(data.msg).toMatch(/hello/);
  });

  // asserting rendered result by actually rendering the component
  it('should render correct message', function() {
    var vm = new Vue({
      template: '<div><test></test></div>',
      components: {
        'test': app
      }
    }).$mount().$nextTick(function(){
      expect(vm.$el.querySelector('h1').textContent).toBe('hello world!');
    });
  });
});
