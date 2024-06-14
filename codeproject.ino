const int sensorPin = A0; // Analog pin coonnected to the sensor

void setup() {
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(sensorPin); // Read the sensor value
  Serial.print("Sensor Value: ");         
  Serial.println(sensorValue);            //Print sensor value to serial monitor

  if (sensorValue > 4000){
    Serial.println("Force: Maximum (3000)");
  } else if (sensorValue > 2000){
    Serial.println("Force: High");
  } else {
    Serial.println("Force: Normal");
  }

  delay(500); // Adjust delay as need
}