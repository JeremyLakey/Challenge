<template>
  <div class="home">
    <div class="message-item" v-for="message in messages" :key="message.date">
      <div>Message: {{ message.message }}</div>
      <div class="date-item">Date: {{ formateDate(message.date) }}</div>
    </div>
  </div>
</template>

<script>
// @ is an alias to /src

export default {
  name: 'HomeView',
  data() {
    return {
      messages: [],
    }
  },
  created() {
    this.setData()
  },
  methods: {
    async setData() {
      let result = await fetch('http://localhost:5000')
      let json = await result.json()
      console.log(json)
      this.$data.messages = json
    },
    formateDate(date) {
      console.log(date)
      let dateTime = Date.parse(date)
      console.log(dateTime)
      let dateOb = new Date(dateTime)
      console.log(dateOb)

      return dateOb
    },
  },
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
  min-height: 4vh;
}

.date-item {
  font-size: 0.5rem;
}
</style>
