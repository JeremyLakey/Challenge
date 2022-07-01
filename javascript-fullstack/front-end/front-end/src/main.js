import Vue from 'vue'
import App from './App.vue'
import router from './router'

Vue.config.productionTip = false

new Vue({
  router,
  data: {
    messages: [
      { message: 'test', date: '10-10' },
      { message: 'test-2', date: '110-12' },
    ],
  },
  render: (h) => h(App),
}).$mount('#app')
