const express = require('express');
const bodyParser = require("body-parser");

var app = express();
app.use(bodyParser.json());
app.use(bodyParser.urlencoded({
  extended: false
}));

const { MongoClient } = require('mongodb');


// Connection URL
const url = 'mongodb://localhost:27017';
const client = new MongoClient(url);
client.connect();
console.log("connected to the mongodb");
const db = client.db("messages");
const collection = db.collection('test');

app.get('/', async (req, res) => {
	try {
		const findResult = collection.find().toArray();
		res.send('My Backend is up');
	}
	catch (err) {
		res.send(err)
	}
})


app.post('/', async (req, res) => {
	console.log(req.body);
	try {
		const insertResult = collection.insert(req.body.message)
		res.send(req.body);
	}
	catch (err) {
		res.send(err)
	}
})

app.listen(8080, () => {

	console.log("App listening")
})