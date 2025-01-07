#include <Wire.h>
#include <Adafruit_MPU6050.h>
#include <Adafruit_Sensor.h>
#include <Adafruit_MPU6050.h>

Adafruit_MPU6050 mpu;

void setup() {
  Serial.begin(9600); // Initialize serial communication
  Serial.println("Initializing MPU6050 sensor...");

  if (!mpu.begin()) {
    Serial.println("Error initializing MPU6050. Check wiring!");
    while (1); // Halt execution if sensor is not detected
  }
  Serial.println("MPU6050 initialized successfully!");

  // Configure the sensor (optional)
  mpu.setAccelerometerRange(MPU6050_RANGE_8_G);
  mpu.setGyroRange(MPU6050_RANGE_500_DEG);
  mpu.setFilterBandwidth(MPU6050_BAND_21_HZ);
}

void loop() {
  // Read accelerometer and gyroscope data
  sensors_event_t a, g, temp;
  mpu.getEvent(&a, &g, &temp);

  // Print accelerometer values
  Serial.print("Accel X: ");
  Serial.print(a.acceleration.x);
  Serial.print(" m/s^2, ");
  Serial.print("Y: ");
  Serial.print(a.acceleration.y);
  Serial.print(" m/s^2, ");
  Serial.print("Z: ");
  Serial.print(a.acceleration.z);
  Serial.println(" m/s^2");

  // Print gyroscope values
  Serial.print("Gyro X: ");
  Serial.print(g.gyro.x);
  Serial.print(" rad/s, ");
  Serial.print("Y: ");
  Serial.print(g.gyro.y);
  Serial.print(" rad/s, ");
  Serial.print("Z: ");
  Serial.print(g.gyro.z);
  Serial.println(" rad/s");

  // Print temperature
  Serial.print("Temperature: ");
  Serial.print(temp.temperature);
  Serial.println(" °C");

  // Add a small delay
  delay(1000);
}
