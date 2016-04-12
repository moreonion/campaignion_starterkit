<template>
  <h1>{{ msg }}</h1>
</template>

<script>
module.exports = {
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
