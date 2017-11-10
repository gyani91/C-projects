#include<conio.h>
#include<stdio.h>

void main()
{
	int a[]={7,9,16,-2,8},i;

	int *p;
	clrscr();
	p=a;

	for(i=0;i<5;i++)
	{
		printf("%d",*p);
		p++;
	}

	for(i=0;i<5;i++)
	{
		printf("%d",*a);
		a++;//Will give an error of Lvalue required
		//as this statement changes the address of array, which inlegal
	}
}