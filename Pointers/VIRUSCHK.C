/* The size of base memory of the RAM is general 640
if it is less than 640 there misht be a potential virus occupying that space*/

#include<conio.h>
#include<stdio.h>

void main()
{
	int far *m;
	clrscr();
	m=0x413;
	printf("%d",*m);
}