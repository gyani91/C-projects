// Gyani 16/03/13

#include<conio.h>
#include<stdio.h>

int pmain(void);

int pmain(void)
{
	printf("This is PRE - MAIN");
	return 1;
}

static int gyani = pmain();

void main()
{
	printf("This is MAIN");
}

