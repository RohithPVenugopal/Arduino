#define buttonPin 7
#define rfTxPin 12

void setup() {
  pinMode(buttonPin, INPUT);
  pinMode(rfTxPin, OUTPUT);
}

void loop() {
  if (digitalRead(buttonPin) == HIGH) {
    digitalWrite(rfTxPin, HIGH);
  } else {
    digitalWrite(rfTxPin, LOW);
  }
}
