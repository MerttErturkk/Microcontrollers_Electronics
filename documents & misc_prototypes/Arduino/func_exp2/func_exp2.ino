
void setup() {
  // put your setup code here, to run once:
  
  led_on(5,8,500,5);
 
}

void loop() {
  // put your main code here, to run repeatedly:
}




void led_on(byte pinf,byte pinl,int t_on,int reps) 
{  
  for(int a=0;a<reps;a++)
  {
   for(int c=0; c<pinl-pinf+1; c++)
   {
     pinMode(pinf+c,OUTPUT);
     digitalWrite(pinf+c,HIGH);
     delay(t_on);
     digitalWrite(pinf+c,LOW);
   } 
 }
}
