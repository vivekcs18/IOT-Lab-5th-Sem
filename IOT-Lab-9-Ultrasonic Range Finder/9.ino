int trigPin = 13;
int echoPin = 10;

void setup() {
  Serial.begin (9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(4, OUTPUT);
  pinMode(2,OUTPUT);
}

void loop() {
  float duration, distance;
  digitalWrite(trigPin, LOW); 
  delayMicroseconds(2);
 
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  duration = pulseIn(echoPin, HIGH);
  distance = (duration / 2) * 0.0344;
  
  if (distance >= 200 || distance <= 2){
    Serial.print("Distance = ");
    Serial.println("Out of range");
    digitalWrite(2,HIGH);
    digitalWrite(4,LOW);
  }
  else {
    Serial.print("Distance = ");
    Serial.print(distance);
    Serial.println(" cm");
    delay(500);
    digitalWrite(4,HIGH);
    digitalWrite(2,LOW);
  }
  delay(500);
}
