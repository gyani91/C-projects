#include<stdio.h>
#include<conio.h>

void main()
{
	char* s1="Jack";
	char* s2="Jill";
	clrscr();

	func(&s1,&s2);

	printf("%s %s",s1,s2);
}

func(char** s1, char** s2)
{
	char* t;
	t=*s1;
	*s1=*s2;
	*s2=t;
}