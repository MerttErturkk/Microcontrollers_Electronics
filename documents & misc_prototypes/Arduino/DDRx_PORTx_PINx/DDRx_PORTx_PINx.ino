void setup() {
  // put your setup code here, to run once:
DDRD |= B00111000; // 4,5,6 PIN DIRECTION> OUTPUT 
PORTD = PORTD| 0X38; // OUTPUT STATES HIGH


DDRB |= B00000011; // 8,9 PIN OUTPUT
PORTB &= ~0x03; // 8,9 PIN = LOW 

}

void loop() {
  // put your main code here, to run repeatedly:

}
