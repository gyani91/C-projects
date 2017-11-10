#include<conio.h>
#include<stdio.h>

void main()
{
	FILE *f1;
	FILE *f2;
	char c;
	clrscr();

	f1=fopen("Sumeet.txt","r");
	f2=fopen("Kam.txt","w");
	if(f1==NULL)
		printf("Empty!");
	else
	{
		while(!feof(f1))
		{
		c = fgetc(f1);
		fputc(c,f2);
		}
		printf("Done");
	}

	fclose(f1);
	fclose(f2);
	getch();

}