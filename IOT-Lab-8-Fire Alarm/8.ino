int tempin= A0;
float temp=0;
int buzz=A1;
void setup()
  {
      Serial.begin(9600);
      pinMode(buzz,OUTPUT);
  	  pinMode(13, OUTPUT);
}
  void loop()
  {
    temp=analogRead(tempin);
    temp=temp*0.48828125;
    Serial.println(temp);
    delay(1000);
    if(temp>100)
    {
      digitalWrite(buzz,HIGH);
      digitalWrite(13,HIGH);
    }
    else
    {
      digitalWrite(buzz,LOW);
      digitalWrite(13,LOW);
    }
  }
