#include<conio.h>
#include<stdio.h>

void main()
{
	FILE *f;
	char c;

	clrscr();

	f= fopen("L1_7.c","r");

	while((c=fgetc(f))!=EOF)
		printf("%c",c);
	fclose(f);
	getch();
}