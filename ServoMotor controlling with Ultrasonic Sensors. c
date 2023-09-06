#include<Servo.h>
Servo myservo;
int pos=0;
const int TriggerPin=8; 
const int EchoPin=9;
long Duration=0; 
void setup()
{ 
pinMode(TriggerPin, OUTPUT); 
pinMode(EchoPin, INPUT); 
pinMode(12, OUTPUT);
myservo.attach(10); 
Serial.begin(9600);
}

void loop()
{
digitalWrite(TriggerPin, LOW); 
delayMicroseconds(2);
digitalWrite(TriggerPin, HIGH);
delayMicroseconds(10); 
digitalWrite(TriggerPin, LOW);
Duration=pulseIn(EchoPin, HIGH);
long Distance_cm=Distance(Duration);
Serial.print("Distance="); 
Serial.print(Distance_cm);
Serial.println("cm");
if(Distance_cm<=5)
{
digitalWrite(12, HIGH);
for(pos=0;pos<=90;pos+=1);
{
myservo.write(pos); 
delay(15);
}
else
{
digitalWrite(12, LOW);
}

long Distance(long time)
{
Long DistanceCalc;
DistanceCalc=((time×.034)/2); 
return DistanceCalc;
}
