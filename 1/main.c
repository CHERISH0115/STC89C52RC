#include <reg52.h>
#include <intrins.h>
sbit location = P2;
sbit a = P2^4;
sbit b = P2^3;
sbit c = P2^2;
sbit smg = P0;
void delay200ms(void) {
	unsigned char i,j,k;
	for (i=5;i>0;i--)
	    for (j=132;j>0;j--)
	      for (k=150;k>0;k--);
}
void main() {
	while (1) {
		//a=1;b=1,c=1; //1
		//a=0;b=1,c=1; //2
		//a=1;b=0,c=1; //3
		//a=0;b=0,c=1; //4
		//a=1;b=1,c=0; //5
		//a=0;b=1,c=0; //6
		//a=1;b=0,c=0; //7
		//a=0;b=0,c=0; //8
		//0-0x3F,1-0x06,2-0x5B,3-0x4F,4-0x66,5-0x6D,6-0x7D,7-0x07,8-0x7F,9-0x6F
		a=1;
		b=1,c=1;
		P0 = 0x3F;
		delay200ms();
		a=1;
		b=1,c=1;
		P0 = 0x06;
		delay200ms();
		a=1;
		b=1,c=1;
		P0 = 0x5B;
		delay200ms();
		a=1;
		b=1,c=1;
		P0 = 0x4F;
		delay200ms();
		a=1;
		b=1,c=1;
		P0 = 0x66;
		delay200ms();
		a=1;
		b=1,c=1;
		P0 = 0x6D;
		delay200ms();
		a=1;
		b=1,c=1;
		P0 = 0x7D;
		delay200ms();
		a=1;
		b=1,c=1;
		P0 = 0x07;
		delay200ms();
		a=1;
		b=1,c=1;
		P0 = 0x7F;
		delay200ms();
		a=1;
		b=1,c=1;
		P0 = 0x6F;
		delay200ms();
	}
}