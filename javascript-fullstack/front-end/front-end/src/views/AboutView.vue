<template>
  <div class="about">
    <input type="text" v-model="text" placeholder="Message" />
    <button v-on:click="send">send</button>
  </div>
</template>

<script>
export default {
  name: 'AboutView',
  data() {
    return {
      text: '',
    }
  },
  methods: {
    async send() {
      const requestOptions = {
        method: 'POST',
        headers: { 'Content-Type': 'application/json' },
        body: JSON.stringify({ message: this.text }),
      }
      let response = await fetch('http://localhost:5000', requestOptions)
      let json = await response.json()
      console.log(json)
      this.text = ''
    },
  },
}
</script>
