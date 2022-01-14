
int DA = A0; 
int sensorvalue = 0;
int sensorMax = 0;

void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);

}
void loop() {
  
sensorvalue = analogRead(DA);  //Read the analog value  
Serial.print("Analog: ");
Serial.print(sensorvalue);  //Print the analog value
Serial.print('\n');
sensorMax = sensorvalue;

  
  //Serial.print("Digital: ");
  //Serial.println(digitalRead(DO));  //Print the digital value

  if (sensorvalue >= 490 && sensorvalue < 510) { //Compare analog value with threshold
    digitalWrite(13, HIGH);
  }
  else {
    digitalWrite(13, LOW);
  }

  if (sensorvalue >= 510 && sensorvalue < 550) { //Compare analog value with threshold
    digitalWrite(12, HIGH);
  }
  else {
    digitalWrite(12, LOW);
  }
   
  if (sensorvalue >= 550) { //Compare analog value with threshold
    digitalWrite(11, HIGH);
  }
  else {
    digitalWrite(11, LOW);
  }
}
