const int LED=13;
const int LDR=7;
int val=0;


void setup(){
  pinMode(LED,OUTPUT);
  pinMode(LDR,INPUT);
}
void loop(){
  val=digitalRead(LDR);
  if(val==HIGH){
    digitalWrite(LED,LOW);
  }else{
    digitalWrite(LED,HIGH);
  }
}
