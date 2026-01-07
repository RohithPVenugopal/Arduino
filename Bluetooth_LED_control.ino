#include <SoftwareSerial.h>

// HC-05 TX -> Pin 10, HC-05 RX -> Pin 11
SoftwareSerial myBT(10, 11); 

void setup() {
  myBT.begin(9600);
  pinMode(13, OUTPUT);
  
  // Quick blink to confirm Arduino is alive
  digitalWrite(13, HIGH); delay(500); digitalWrite(13, LOW);
}

void loop() {
  if (myBT.available()) {
    char data = myBT.read();
    
    if (data == '1') digitalWrite(13, HIGH); // Turn LED ON
    if (data == '0') digitalWrite(13, LOW);  // Turn LED OFF
  }
}