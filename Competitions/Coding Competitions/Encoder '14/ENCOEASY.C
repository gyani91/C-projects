//Encoder 2014 2nd round problem statement the easy way
#include<conio.h>
#include<stdio.h>

void main()
{
	int i;

	char* string="Jhulelal\0";
	clrscr();

	while(1)
	{
		 printf("%s",string);
		 delay(500);
		 clrscr();
		 for(i=0;i<11;i++)
			printf("\n");
		 for(i=0;i<4;i++)
			printf("\t");
		 printf("%s",string);
		 delay(500);
		 clrscr();
		 for(i=0;i<22;i++)
			printf("\n");
		 for(i=0;i<8;i++)
			printf("\t");
		 printf("%s",string);
		 delay(500);
		 clrscr();
	}
}