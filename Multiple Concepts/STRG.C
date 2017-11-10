#include<conio.h>
#include<string.h>
void main()
{     int i,j;
	char c;
	clrscr();
	for(j=0;j<4;j++)
	{
		c='A';
		for(i=0;i<=j;i++)
		{
			printf("%c",c);
			c++;
		}
		printf("\n");
	}

    getch();
    }