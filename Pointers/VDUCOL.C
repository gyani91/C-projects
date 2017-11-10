/*Every even value in VDU memory is ASCII value to be displayed
& Every  odd value in VDU memory is Color code of the character */

#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

void main()
{
	char far *s;
	int i,color=0;
	clrscr();

	printf("Hey ya hey ya, you are an @#$%@! .. Hey ya Hey ya.....!!");
	s=0xB8000000;

	for(i=1;i<160;i+=2)
		*(s+i)=color++;
}