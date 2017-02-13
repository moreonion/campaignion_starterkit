import {paramReadyUrl, fixedEncodeURIComponent} from '../ui_src/components/custom-vue-strap/utils/utils.js'

describe('utils', function() {
  describe('paramReadyUrl', function() {
    const baseUrl = 'https://api.example.com/some/resource'

    it('appends a question mark', function() {
      expect(paramReadyUrl(baseUrl)).toBe(baseUrl + '?')
    })

    it('strips a trailing slash and appends a question mark', function() {
      expect(paramReadyUrl(baseUrl + '/')).toBe(baseUrl + '?')
    })

    it('strips a slash before a trailing question mark', function() {
      expect(paramReadyUrl(baseUrl + '/?')).toBe(baseUrl + '?')
    })

    it('leaves an existing trailing question mark', function() {
      expect(paramReadyUrl(baseUrl + '?')).toBe(baseUrl + '?')
    })

    it('leaves an existing parameter alone and appends an ampersand', function() {
      expect(paramReadyUrl(baseUrl + '?foo=bar')).toBe(baseUrl + '?foo=bar&')
      expect(paramReadyUrl(baseUrl + '?foo=')).toBe(baseUrl + '?foo=&')
    })
  })

  describe('fixedEncodeURIComponent', function() {
    it('encodes the characters &=!\'()*', function() {
      expect(fixedEncodeURIComponent('a&b=c!\'d()e*')).toBe('a%26b%3Dc%21%27d%28%29e%2a')
    })
  })
})
