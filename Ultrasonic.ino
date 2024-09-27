#include <Servo.h>
Servo myservo;
int pos=0;
const int trigPin = 2;
const int echoPin = 3;
long duration=0;
void setup() 
{
  pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
  pinMode(echoPin, INPUT); // Sets the echoPin as an Input
  myservo.attach(7);
  Serial.begin(9600);
}
void loop()
{
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  long Distance_cm= Distance(duration);
  Serial.print("Distance= ");
  Serial.print(Distance_cm);
  Serial.println();
  if(Distance_cm<= 10)
  {
    myservo.write(0);
    delay(2000);
  }
  else
  {
    myservo.write(90);
    
  }
}
long Distance(long time)
{
  long DistanceCalc;
  DistanceCalc=((time*0.034)/2);
  return DistanceCalc;
}
