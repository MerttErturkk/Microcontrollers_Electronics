const int LED=13;
int val=0;
void setup() {
  pinMode(LED,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  val=1024-analogRead(5);
  Serial.println(val);
  digitalWrite(LED,HIGH);
  delay(val);
  digitalWrite(LED,LOW);
  delay(val);
}
