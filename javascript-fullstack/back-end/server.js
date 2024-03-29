const express = require('express')
const bodyParser = require('body-parser')
const mongoose = require('mongoose')
const Message = require('./models/Message')
const cors = require('cors')

var app = express()
app.use(bodyParser.json())
app.use(
  bodyParser.urlencoded({
    extended: false,
  })
)
app.use(
  cors({
    origin: 'http://localhost:8080',
  })
)

// Connection URL
const url = 'mongodb://localhost:27017/messages'

const connectToMongoose = async () => {
  await mongoose.connect(url)
}
connectToMongoose().catch((err) => console.log(err))

app.get('/', async (req, res) => {
  try {
    const findResult = await Message.find({})
    console.log(findResult)
    res.send(findResult)
  } catch (err) {
    res.send(err)
  }
})

app.post('/', async (req, res) => {
  console.log(req.body)
  try {
    const message = new Message()
    message.message = req.body.message
    await message.save()
    res.send(message)
  } catch (err) {
    res.send(err)
  }
})

app.listen(5000, () => {
  console.log('App listening')
})
