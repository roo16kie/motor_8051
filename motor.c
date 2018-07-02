//實驗一 步進馬達
#include "reg51.h"
void delay (int t);
void turn ( );
code char step [ ] = {0x01,0x04,0x02,0x08};
int dir , dt; //dir：方向 dt：時間間隔
void main ( )
{
 dt=3000;
 dir=1;
 while(1) {
 turn( );
 }
}
void turn( )
{
 int x;
 if(dir == 1){ //turn right
 for(x=0;x<4;x++) {
 P1=step[x];
 delay(dt);
 }
 }
}
void delay(int t)
{
 int x;
 for(x=0;x<t;x++)
 ;
}