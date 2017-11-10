#include<conio.h>
#include<stdio.h>

void main()
{
	static int a[20];

	int i=0;
	clrscr();

	a[i]=i++;

	printf("%d %d %d\n",a[0],a[1],i);
}