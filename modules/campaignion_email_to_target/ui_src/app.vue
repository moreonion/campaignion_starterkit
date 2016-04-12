<template>
  <h1>{{ msg }}</h1>
</template>

<script>
module.exports = {
  replace: false,
  data: function() {
    return {
      msg: 'hello '
    };
  },
  ready: function() {
    console.log('ready');
    this.msg += 'world!';
  }
}
</script>

<style>

</style>
