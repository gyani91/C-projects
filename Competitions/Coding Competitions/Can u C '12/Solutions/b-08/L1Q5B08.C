#include<conio.h>
#include<stdio.h>

main()
{
	int day=10,b=13312;
	clrscr();
	for(day=10;day>1;day--)
	{
		b/=2;
	}

	printf("On %dth day number of bacterium is %d",day,b);
	getch();
}