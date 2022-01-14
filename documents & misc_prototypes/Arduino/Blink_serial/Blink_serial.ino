


int delayDur =10;

// the setup function runs once when you press reset or power the board
void setup() {
  .
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);   
  delay(delayDur);                       
  digitalWrite(LED_BUILTIN, LOW);    
  delay(delayDur);  
  delayDur=delayDur+20;
  Serial.println(delayDur);
}
