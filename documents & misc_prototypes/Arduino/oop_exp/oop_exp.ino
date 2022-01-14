void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
char a[10];
float b = 1.22f;
double c = 1.22f;
double d = 1.22222222222222222222222222222222;




struct MyObject {
  float field1;
  byte field2;
  char name[10];
};

MyObject var={
  PI,
  65,
  "MERT"
 
};
/*Serial.println(sizeof(a));
Serial.println(sizeof(b));
Serial.println(sizeof(c));
Serial.println(sizeof(d));
Serial.println(d);
Serial.println(b);

*/
Serial.println(sizeof(MyObject));
Serial.println(var.field1);
Serial.println(var.name);



}

void loop() {
  // put your main code here, to run repeatedly:

}
