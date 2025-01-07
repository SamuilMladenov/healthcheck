# Wiring information about the Heat sensor max30102
The sensor has not been tested with the code, I need to solder it first and then test it

Connections
VCC: Connect to the Arduino's 3.3V pin (use 5V if your board doesn't support 3.3V operation).
GND: Connect to the Arduino's GND pin.
SCL: Connect to the Arduino's I2C clock line (SCL pin, A5 on Nano 33 by default).
SDA: Connect to the Arduino's I2C data line (SDA pin, A4 on Nano 33 by default).
XDA, XCL: Leave unconnected (used for connecting to another I2C device).
ADC: Leave unconnected (reserved pin, unused in most applications).
INT: Optional; connects to an interrupt pin on the Arduino if you want to use interrupts for motion detection (e.g., D2).