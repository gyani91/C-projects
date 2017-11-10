#include<conio.h>
#include<stdio.h>
#include<string.h>

void xsc(char *b,char *a)
{
	while(*a != 0)
	{
		*b = *a;
		b++;
		a++;
	}
	*b='\0';
}

void cat(char *a, char *c)
{
	while(*a)
	{
		a++;
	}
	while(*c)
		*a++=*c++;
	*a = '\0';
}
void main()
{
	char *a,*b,*c;
	void xcr(char *,char *);
	void cat(char *,char *);
	clrscr();

	printf("Enter 1st string to be copied");
	gets(a);
	xsc(b,a);
	printf("\nCopied string is %s",b);
	printf("\nEnter string to be concatenated\n");
	gets(c);
	cat(a,c);
	puts(a);
	getch();
}
