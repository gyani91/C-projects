/* This program is a display of the fact that compiler evaluates
an exp2 in
(exp1 && exp2) is evaluated only if exp1 is true &
(exp1 || exp2) is evaluated only if exp2 is false */

#include<conio.h>
#include<stdio.h>

void main()
{
	int i=5,j=4,k=-1,a,b;
	clrscr();

	a=i && !j;
	b= ++i && ++j || ++k;

	printf("%d %d %d %d %d",a,b,i,j,k);
	// value of k should be 0 but is still -1 as (++i && ++j) is already true
}