
int ledpin = 13;
int durations[] = {200,200,200,
                    500,500,500,
                      200,200,200};

void setup() {
  Serial.begin(9600); 
  durations[10]=12;
  for (int i =0; i<11;i++){
    Serial.println(durations[i]);
  }

}

void loop() {
  // put your main code here, to run repeatedly:

}
