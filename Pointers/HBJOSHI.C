/*Used in a virus called Happy Birthday Joshi
Worked as ctrl + alt + del */

#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

void main()
{
	char far *kb;
	kb=0x417;
	clrscr();
	printf("Please press the delete key");

	*kb=12;// 3 & 4 bits high

	getch();
}