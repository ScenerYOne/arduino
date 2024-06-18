const int sensorPin0 = 35; // GPIO34 connected to the first FSR
const int sensorPin1 = 36; // GPIO39 connected to the second FSR
const int sensorPin2 = 39; // GPIO34 connected to the first FSR
const int sensorPin3 = 34; // GPIO39 connected to the second FSR


void setup() {
  Serial.begin(9600); // Initialize serial communication at 9600 baud
}

void loop() {
  // Read the analog value from the first FSR
  int sensorValue0 = analogRead(sensorPin0); 

  // Read the analog value from the second FSR
  int sensorValue1 = analogRead(sensorPin1); 
  // Read the analog value from the first FSR
  int sensorValue2 = analogRead(sensorPin2); 

  // Read the analog value from the second FSR
  int sensorValue3 = analogRead(sensorPin3); 

  // Print the values from both sensors
  Serial.print("Sensor Value 0: ");         
  Serial.print(sensorValue0);            
  Serial.print("  Sensor Value 1: ");         
  Serial.println(sensorValue1);  
   Serial.print("Sensor Value 2: ");         
  Serial.print(sensorValue2);            
  Serial.print("  Sensor Value 3: ");         
  Serial.println(sensorValue3); 
  Serial.println("==========================================================");            

  // Optionally, you can classify the force based on the sensor values
  // if (sensorValue0 > 4000) {
  //   Serial.println("Force on sensor 0: Maximum");
  // } else if (sensorValue0 > 2000) {
  //   Serial.println("Force on sensor 0: High");
  // } else {
  //   Serial.println("Force on sensor 0: Normal");
  // }

  // if (sensorValue1 > 4000) {
  //   Serial.println("Force on sensor 1: Maximum");
  // } else if (sensorValue1 > 2000) {
  //   Serial.println("Force on sensor 1: High");
  // } else {
  //   Serial.println("Force on sensor 1: Normal");
  // }

  delay(1000); // Adjust delay as needed
}
