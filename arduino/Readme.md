# Arduino scripts

## voltage_sensor.ino

This is a very basic script which will read a Voltage using a [voltage sensor](https://how2electronics.com/interfacing-0-25v-dc-voltage-sensor-with-arduino/).

Arduino runs at 5v (vSys) and the script is calibrated accordingly, if you were to run it on a 3.3V system the script would need updating. The maximum readable input Voltage is vSys*5 so:

- Max input voltage at 5V = 25
- Max input voltage at 3.3V = 16.5

### Wiring
- GND on the sensor goes to -ve on the load
- VCC on the sensor goes to +ve on the load
- - on the output goes to GND on the Arduino
- S on the output goes to A0 on the Arduino
- + on the output isn't used

### Troubleshooting
- The sensor isn't able to read negative Voltages so you'll get a reading of 0 if you wire up the input backwards

