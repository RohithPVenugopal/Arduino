int mqPin = A0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int gasValue = analogRead(mqPin);

  Serial.print("Gas Sensor Value: ");
  Serial.println(gasValue);

  delay(1000);
}
