<script>
  export default {

  methods: {

    validSpecificationTypes() {
      return ['message-template', 'exclusion']
    },

    defaultMessageObj() {
      return {
        subject: '',
        header: '',
        body: '',
        footer: ''
      }
    },

    emptySpec(type) {
      if (this.validSpecificationTypes().indexOf(type) === -1) return
      var spec = {
        id: 0,
        type: type,
        label: '',
        filters: [],
        filterStr: '', // Verbal expression of a specification’s filters
        errors: []
      }
      if (type == 'message-template') spec.message = this.defaultMessageObj()
      return spec
    }

  }

}
</script>
