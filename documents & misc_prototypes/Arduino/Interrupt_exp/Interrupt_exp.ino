int interruptPin =2;
int ledPin=13;
int period =500;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin,OUTPUT);
  pinMode(interruptPin,INPUT);
  digitalWrite(interruptPin,INPUT_PULLUP);       //pull-up
  attachInterrupt(0,goFast,FALLING);        //0 means pin2
                  //CHANGE,RISING,FALLING  || 1 means pin3
}                 //only 2 interrupt attachable pins 2 and 3
                  // noInterrupts func stops interrupts
void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ledPin,HIGH);
  delay(period);
  digitalWrite(ledPin,LOW);
  delay(period);
}

void goFast()
{
  period =100;
}
