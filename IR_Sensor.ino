int irPin = 2;      // IR sensor output pin

void setup() {
  pinMode(irPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  int irValue = digitalRead(irPin);

  if (irValue == LOW) {   // Object detected (depends on module)
    Serial.println("Obstacle Detected");
  } else {
    Serial.println("No Obstacle");
  }

  delay(500);
}
