//5.375 in normalised form is 0100 0000 1010 1100 0000 0000 0000 0000

#include<conio.h>
#include<stdio.h>

void main()
{
	float a=5.375;
	char *p;
	int i;
	p=(char *) &a;
	for(i=0;i<=3;i++)
		printf("%02X\n",(unsigned char) p[i]);
}