const SerialPort = require("serialport"); // import serialport module
//var SerialPort = serialport.SerialPort; // reference module library

const port = new SerialPort('/dev/cu.usbmode1462201',{
  baudRate:9600,
})

port.on('open', onOpen);
port.on('data', onData);

function onOpen() {
  console.log("Open connection");
}

function onData(data) {
  console.log("on Data " + data);
}
