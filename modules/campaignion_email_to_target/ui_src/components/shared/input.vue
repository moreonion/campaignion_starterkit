<template>
  <input type="text" v-model="value">
</template>
<script>
  export default {
    replace: false,
    props: {
      value: {
        type: String,
        twoWay: true
      }
    }
  }
</script>
