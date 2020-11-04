int motorPin = 3;
int sensorPin = A1;
int threshold = 400;
void setup()
{
  pinMode(motorPin, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int sensorValue = analogRead(sensorPin);
  Serial.println(sensorValue);
  if(sensorValue > threshold)
  {
    digitalWrite(3,HIGH);
  }
  else
  {
    digitalWrite(3,LOW);
  }
  delay(1000);
}
