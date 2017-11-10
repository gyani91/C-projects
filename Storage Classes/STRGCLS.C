#include<conio.h>
#include<stdio.h>

void main()
{
	clrscr();
	increment();
	increment();
	increment();
}

increment()
{
	auto int i=1;
	register int j=1;
	static int k=1;

	i++; j++; k++;

	printf("\n%d %d %d",i,j,k);
}