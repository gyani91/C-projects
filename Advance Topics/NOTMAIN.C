/* executing some other function before main()
	Sumeet Gyanchandani
	09/02/14
*/
#include<conio.h>
#include<stdio.h>

void hi();

#pragma startup hi

void main()
{
	printf("In Main\n");
}

void hi()
{
	clrscr();
	printf("In Hi\n");
}