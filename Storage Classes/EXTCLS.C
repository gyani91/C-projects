/* When to use

Automatic -> All other cases
Register -> For frequently used variables
Static -> if var. is to live across func calls
External(Global) -> if var. is reqd. by all func */

#include<conio.h>
#include<stdio.h>

void main()
{
	extern int a;
	// extern int is a declaration as opposed to rest which are definitions
	clrscr();
	printf("\n%d",a);

	increment();
	increment();
	decrement();

	printf("\n%d",a);
}

increment()
{
	extern int a;
	a++; printf("\n%d",a);
}

int a=10;
decrement()
{
	//once the int a is defined no extern a is needed
	a--;
	printf("\n%d",a);
}