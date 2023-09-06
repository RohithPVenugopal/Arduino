int Sensor=2;
void setup()
{
Serial.begin(9600);
pinMode(Sensor, INPUT);
pinMode(13, OUTPUT);
}

void loop()
int SensorType=digitalRead(Sensor); //instead of SensorType, type your sensor
if(SensorType==0)
{
digitalWrite(13,HIGH);
}
else
{ 
digitalWrite(13,LOW);
}
Serial.println(SensorType); 
delay(1);
}
