//Gyani 15/03/13

#include<conio.h>
#include<stdio.h>

void main()
{
	int i,j;
	clrscr();

	for(i=0;i<5;i++)
	{
		//loop for spaces
		for(j=0;j<4-i;j++)
			printf(" ");

		//loop for printing numbers
		for(j=0;j<=i;j++)
			printf("%d ",j+1);
		printf("\n");
	}
	getch();
}