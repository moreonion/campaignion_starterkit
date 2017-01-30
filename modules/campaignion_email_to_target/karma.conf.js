// https://github.com/Nikku/karma-browserify
module.exports = function (config) {
  config.set({
    basePath: '',
    browsers: ['PhantomJS'],
    frameworks: ['browserify', 'jasmine-jquery', 'jasmine'],
    files: [
      'ui_test/globals.js',
      'ui_test/**/*.test.js'
    ],
    reporters: ['spec'],
    preprocessors: {
      'ui_test/**/*.js': ['browserify']
    },
    browserify: {
      debug: true,
      // needed to enable mocks
      plugin: [require('proxyquireify').plugin]
    },
    autoWatch: true
  })
}
