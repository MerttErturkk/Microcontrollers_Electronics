byte inp =8;
byte outp=13;
volatile bool state= false;
void setup() {
  // put your setup code here, to run once:
  pinMode(inp,INPUT_PULLUP);
  pinMode(outp,OUTPUT);
  attachInterrupt(1,myISR,FALLING);
  }
void loop() {
  // put your main code here, to run repeatedly:
  if(state) // if state == true
   {
    digitalWrite(outp,HIGH);
    delay(50);
    digitalWrite(outp,LOW);
    delay(50);
   }
}

void myISR()
{
  state =!state;
}
