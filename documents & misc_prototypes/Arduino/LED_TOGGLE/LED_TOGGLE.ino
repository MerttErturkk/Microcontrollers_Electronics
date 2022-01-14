const int LED =13;//led connected to digital pin 13
const int BUTTON=7;//button connected to digital pin 7
int val = 0; //initial state of the input(not constant)
int old_val=0;//stores the previous val
int state=0; //will change meaning 1 is on 0 is off
void setup() {
  // put your setup code here, to run once:
pinMode(LED,OUTPUT); //set the digital pin as output
pinMode(BUTTON,INPUT);//digital pin is input
}

void loop() {
   // put your main code here, to run repeatedly:
 val=digitalRead(BUTTON);//read input value
 if ((val==HIGH)&&(old_val==LOW)){
  delay(15);
  state =1-state;
 }
 old_val=val;//val is now old this stores it
 if(state==1){
  digitalWrite(LED,HIGH);//TURN LED ON
 }else{
  digitalWrite(LED,LOW);
 }
}
