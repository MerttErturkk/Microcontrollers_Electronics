int outpin =13;

void setup() {
  // put your setup code here, to run once:
pinMode(outpin,OUTPUT);
Serial.begin(9600);
Serial.println("Enter 1 or 0");
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available()>0)
  {
    byte ch=Serial.read(); 
    if(ch == 49)
    {
      digitalWrite(outpin,HIGH);
      Serial.println(ch);
      delay(1000);
    }
      else if(ch ==48)
      {
       digitalWrite(outpin,LOW);
      }
   }
}
