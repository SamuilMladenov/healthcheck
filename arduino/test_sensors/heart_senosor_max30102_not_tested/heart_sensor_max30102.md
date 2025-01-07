# Wiring information about the Heat sensor max30102

The sensor has not been tested with the code, I need to solder it first and then test it

Main Pins (on the side with VIN, SDA, SCL, GND):
VIN: Connect to the Arduino's 3.3V pin (do not connect to 5V to avoid damaging the sensor).
GND: Connect to the Arduino's GND pin.
SDA: Connect to the Arduino's SDA pin (A4 on Nano 33 by default).
SCL: Connect to the Arduino's SCL pin (A5 on Nano 33 by default).
LED Pins (on the side with GND, RD, IRD, INT):
GND: Leave unconnected (already connected on the main side).
RD: Leave unconnected (used to control the red LED manually).
IRD: Leave unconnected (used to control the IR LED manually).
INT: Optional; connect to a digital pin (e.g., D2) if you want to use interrupts for new data availability. Otherwise, leave unconnected.

