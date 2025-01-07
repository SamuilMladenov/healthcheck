#include <Wire.h>
#include <Adafruit_MLX90614.h>

// Create an instance of the Adafruit_MLX90614 class
Adafruit_MLX90614 mlx = Adafruit_MLX90614();

void setup() {
  Serial.begin(9600); // Initialize serial communication
  Serial.println("Initializing MLX90614 sensor...");

  if (!mlx.begin()) {
    Serial.println("Error connecting to MLX90614. Check wiring!");
    while (1); // Halt execution if sensor is not detected
  }
  Serial.println("MLX90614 initialized successfully!");
}

void loop() {
  // Read ambient and object temperatures
  double ambientTemp = mlx.readAmbientTempC();
  double objectTemp = mlx.readObjectTempC();

  // Print the values to the Serial Monitor
  Serial.print("Ambient Temperature: ");
  Serial.print(ambientTemp);
  Serial.println(" °C");

  Serial.print("Object Temperature: ");
  Serial.print(objectTemp);
  Serial.println(" °C");

  // Add a small delay
  delay(1000);
}
