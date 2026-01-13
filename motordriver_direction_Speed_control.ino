// Motor A (Left Motor)
int ENA = 9;
int IN1 = 8;
int IN2 = 7;

// Motor B (Right Motor)
int ENB = 10;
int IN3 = 6;
int IN4 = 5;

int speed = 180;   // Motor speed (0–255)

void setup() {
  pinMode(ENA, OUTPUT);
  pinMode(ENB, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
}

void loop() {

  forward();
  delay(3000);

  stopMotor();
  delay(1000);

  backward();
  delay(3000);

  stopMotor();
  delay(1000);

  left();
  delay(2000);

  stopMotor();
  delay(1000);

  right();
  delay(2000);

  stopMotor();
  delay(2000);
}

// ===== Movement Functions =====

void forward() {
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
  analogWrite(ENA, speed);
  analogWrite(ENB, speed);
}

void backward() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
  analogWrite(ENA, speed);
  analogWrite(ENB, speed);
}

void left() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);   // Left motor backward
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);    // Right motor forward
  analogWrite(ENA, speed);
  analogWrite(ENB, speed);
}

void right() {
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);    // Left motor forward
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);   // Right motor backward
  analogWrite(ENA, speed);
  analogWrite(ENB, speed);
}

void stopMotor() {
  analogWrite(ENA, 0);
  analogWrite(ENB, 0);
}
