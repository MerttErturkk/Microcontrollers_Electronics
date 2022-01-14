int ledPin=13;
void setup() {
  // put your setup code here, to run once:
pinMode(ledPin,OUTPUT);

}

void flash(int numF,int d)
{
  for(int i=0;i<numF;i++)
  {
   digitalWrite(ledPin,HIGH);
   delay(d);
   digitalWrite(ledPin,LOW);
   delay(d);
}

void loop() 
  // put your main code here, to run repeatedly:
{  flash(10,100);
delay(2000);
}





// A function that returns a int value.

int CtoF(float c){
  float f = c*9/5 + 32;
  return f;
}
