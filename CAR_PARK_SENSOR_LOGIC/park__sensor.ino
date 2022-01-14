#define trigPin 8
#define echoPin 7
#define buzzer 3
#define led 13





void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(trigPin,OUTPUT);
pinMode(echoPin,INPUT);
pinMode(buzzer,OUTPUT);
pinMode(led,OUTPUT);


}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(trigPin,LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);
  long duration, distance;
  duration=pulseIn(echoPin,HIGH);
  distance=(duration/2)/29.1;
  Serial.println(distance);
  delay(50);

  if (distance<40)
  {
 tone(buzzer, 100-distance);
 delay(2*distance);
 digitalWrite(led,HIGH);
  delay(2*distance);
  noTone(buzzer);
  delay(2*distance);
  digitalWrite(led,LOW);
  delay(2*distance);
  }

  else
  {  
  noTone(buzzer);
  digitalWrite(led,LOW);
  }
}
 



