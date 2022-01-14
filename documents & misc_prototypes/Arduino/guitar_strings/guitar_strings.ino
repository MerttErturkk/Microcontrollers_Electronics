#define buzz 8
/*Guitar string frequencies
 * E
 * A
 * D
 * G
 * B
 * E
 */
#define E2  82
#define A2  110
#define D3  147
#define G3  196
#define B3  247
#define E4  330

// Extra freq for come as you are
#define F2 87
#define X  96 //F#G2
#define B2 123

#define D_3  175
#define D_4  190
#define D_6  214
#define D_7  220
#define D_10 262


#define G_1  214
#define G_2  220
#define G_3  240
#define G_10 349 
#define G_12 392
#define G_13  427

#define B_3  294
#define B_13 523

#define EE_2 46
#define EE_3 49
#define EE_5 55
#define EE_7 62
#define EE_10 73


int NinParis[]= {G_10,D_10,0,0,
                 G_13,D_10,0,0,
                 G_12,D_10,0,0,
                 G_10,D_10,B_13,0};
                 
int comeasyouare[] = { E2,F2,X,A2,X,A2,X,X,F2,E2,B2,E2,E2,B2};

int sv_nat[]={EE_7,0,EE_7,EE_10,0,EE_7,EE_5,EE_3,EE_3,EE_2,0};
void setup() {
  // put your setup code here, to run once:
  for(int i=0; i<5;i++)
  {
    for(int a=0; a<11;a++)
    {
    tone(buzz,sv_nat[a]);
    delay(200);
    noTone(buzz);
    delay(20);
    }
  }
}
void loop() {
  // put your main code here, to run repeatedly:

}
