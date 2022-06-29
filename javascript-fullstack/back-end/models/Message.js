const mongoose = require('mongoose')
const { Schema } = mongoose

const MessageSchema = new Schema({
  message: { type: String, required: true },
  date: { type: Date, default: Date.now },
})

const Message = mongoose.model('Message', MessageSchema)

module.exports = Message
