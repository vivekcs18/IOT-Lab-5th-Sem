
int buttonState = 0;

void setup()
{
  pinMode(2, INPUT);
  pinMode(9, OUTPUT);
}

void loop()
{

  buttonState = digitalRead(2);
 
  if (buttonState == HIGH) {
    
    digitalWrite(9, HIGH);
  } else {
    
    digitalWrite(9, LOW);
  }
  delay(50); 
}