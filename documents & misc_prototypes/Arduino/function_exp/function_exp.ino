
void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT);
  blinker(13,100,500,260);
 
}

void loop() {
  // put your main code here, to run repeatedly:
}

void blinker(byte pin , int t_on, int t_off, byte reps)// 
{
  for (int a=0; a<reps; a++)
  {
     digitalWrite(pin,HIGH);
     delay(t_on);
     digitalWrite(pin,LOW);
     delay(t_off);
  }
}
