#include <Tone.h>

Tone freq1;
Tone freq2;


#define E  82
#define A  110
#define D  147
#define G  196
#define B  247
#define e  330


#define E_1  87
#define E_2  96
#define E_3  98
#define E_5  110
#define E_7  123
#define E_10  147

#define A_1  120
#define A_2  124
#define A_3  131
#define A_4  143
#define A_5  147
#define A_7  165

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

//SEVEN NATION ARMY Bass string
#define EE_2 46
#define EE_3 49
#define EE_5 55
#define EE_7 62
#define EE_10 73
/*
int videotape_D[] = {D_7,D_6,D_6,D_4 ,D_7,D_6,D_6,D_4 ,D_7,D_6,D_7,D_7 };
int videotape_A[] = {A_4,A_4,A_4,A_4, A_7,A_7,A_7,A_7 ,A_7,A_7,A_7,A_7 };
*/
//------------------------------------------
/*
int megal[] = {D,D,B_3,G_2,G_1,G,D_3,D,D_3,G,
               A_3,A_3,B_3,G_2,G_1,G,D_3,D,D_3,G,
               A_2,A_2,B_3,G_2,G_1,G,D_3,D,D_3,G,
               A_1,A_1,B_3,G_2,G_1,G,D_3,D,D_3,G};

int megalb[]=  {A_5,A_5,A_5,A_5,A_5,A_5,A_5,A_5,A_5,A_5,
                A_3,A_3,A_3,A_3,A_3,A_3,A_3,A_3,A_3,A_3,
                A_2,A_2,A_2,A_2,A_2,A_2,A_2,A_2,A_2,A_2,
                A_1,A_1,A_1,A_1,A_1,A_1,A_1,A_1,A_1,A_1};     

*/

/*
int NinParis[]= {G_10,D_10,0,0,
                 G_13,D_10,0,0,
                 G_12,D_10,0,0,
                 G_10,D_10,B_13,0};
*/

//int sv_nat[]={EE_7,0,EE_7,EE_10,0,EE_7,EE_5,EE_3,EE_3,EE_2,0};

void setup() {

    freq1.begin(11);
    freq2.begin(12);
 
}


void loop() {
  // put your main code here, to run repeatedly:
for(int a=0; a<11;a++)
    {
    freq1.play(megala[a],300);
    freq2.play(megalb[a],100);
    delay(330);
    }
}
