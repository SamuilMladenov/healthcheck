// Define the analog pin connected to the GSR sensor
const int GSR_PIN = A0;

void setup() {
  // Initialize serial communication for debugging
  Serial.begin(9600);
}

void loop() {
  // Read the analog value from the GSR sensor
  int gsrValue = analogRead(GSR_PIN);
  
  // Print the value to the Serial Monitor
  Serial.print("GSR Value: ");
  Serial.println(gsrValue);

  // Add a small delay to make the readings more manageable
  delay(500);
}
