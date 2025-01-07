#include <Wire.h>
#include "MAX30105.h"

// Create an instance of the MAX30105 class
MAX30105 particleSensor;

void setup() {
  Serial.begin(9600); // Initialize serial communication
  Serial.println("Initializing MAX30102 sensor...");

  // Initialize the MAX30102 sensor
  if (!particleSensor.begin(Wire, I2C_SPEED_STANDARD)) { // Use default I2C speed
    Serial.println("MAX30102 not found. Check connections!");
    while (1); // Halt execution if sensor is not detected
  }
  Serial.println("MAX30102 initialized successfully!");

  // Configure the sensor
  particleSensor.setup(); // Use default settings
  particleSensor.setPulseAmplitudeRed(0x1F); // Set red LED to low intensity
  particleSensor.setPulseAmplitudeIR(0x1F);  // Set IR LED to low intensity
}

void loop() {
  // Read red and IR values
  int redValue = particleSensor.getRed();
  int irValue = particleSensor.getIR();

  // Print the values to the Serial Monitor
  Serial.print("Red LED Value: ");
  Serial.print(redValue);
  Serial.print(", IR LED Value: ");
  Serial.println(irValue);

  // Add a small delay
  delay(500);
}
