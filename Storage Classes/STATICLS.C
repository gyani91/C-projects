#include<conio.h>
#include<stdio.h>

int* f(void);
void main()
{
	int *p;
	p=f();

	printf("%d",*p);

}

int* f(void)
{
	static int a=20;
	return(&a);
}