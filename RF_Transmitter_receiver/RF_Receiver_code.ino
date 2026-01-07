#define rfRxPin 11
#define ledPin 8

void setup() {
  pinMode(rfRxPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int rfData = digitalRead(rfRxPin);

  if (rfData == HIGH) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }
}
