#include<stdio.h>
#include<conio.h>

int main()
{
	int i,j;
	clrscr();

	for(i=0;i<5;i++)
	{
		for(j=0;j<4-i;j++)
		{
			printf(" ");
		}
		for(j=1;j<i+2;j++)
		{
			printf("%d",j);
		}
		j=j-2;
		for(;j>0;j--)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	getch();
}