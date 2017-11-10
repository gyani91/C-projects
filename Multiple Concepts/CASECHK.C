#include<conio.h>
#include<stdio.h>
#include<string.h>

int main()
{
	int i=0,j=0;
	char *a;
	clrscr();

	printf("Enter a string:");
	gets(a);

	while(*a != 0)
	{
		if(*a>=65 && *a<=90)
			i++;
		else if(*a>=97 && *a<=122)
			j++;
		a++;
	}

	printf("\nUpper case : %d",i);
	printf("\nLower case : %d",j);
	getch();
}
