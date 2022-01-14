const int led=9;
const int button=7;

int val=0;         //stores state of input pin
int old_val=0;      //stores previous value of "val"
int state=0;        //0 =LED off 1= LED on
int brightness=128;      // stores the brightness value
unsigned long startTime=0;    //moment we began the press
void setup() {
pinMode(led,OUTPUT);
pinMode(button,INPUT);

}

void loop() {
  val=digitalRead(button);      //read input and store it
  if((val==HIGH)&&(old_val==LOW)){    //check if there is a transition
    
    state=1-state;   //toggle
    
    startTime=millis();//this line remembers when the button was last pressed
    delay(10);
  }
   if((val==HIGH)&&(old_val==HIGH)){      //check if button is held
    if(state==1 &&(millis()-startTime)>500){     // if it is held more than 500ms
      brightness++;
      delay(10);   //delay to avoid brightness change too fast
      if (brightness>255){ //255 is max analog value
        brightness=0;  //it should go back to 0   
      }
    }
  }
  old_val=val;  //val is now old val
  if(state==1){
    analogWrite(led,brightness); //led lights with our brightness value
  }else{
    analogWrite(led,0);   
  }
}
