<template>
  <div class="home">
    <div
      class="message-item"
      v-for="message in $root.$data.messages"
      :key="message.date"
    >
      Message: {{ message.message }}
    </div>
  </div>
</template>

<script>
// @ is an alias to /src

export default {
  name: 'HomeView',
}
</script>

<style>
.message-item {
  max-width: 300px;
  text-align: left;
  border-style: solid;
  border-width: 3px;
  margin-bottom: 10px;
  margin-right: auto;
  margin-left: auto;
  padding: 0.25rem;
  padding-left: 2rem;
  height: 4vh;
}
</style>
