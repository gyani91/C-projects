#include<stdio.h>
#include<conio.h>

#define S(x) (\
x)*(x)
//Can use \ for multiple lines and use parenthesis whenever necessary
#define W(x) x * x
//No Space because the preprocessor is dumb

void main()
{
	int i,j,k,l,m,n=2;
	clrscr();

	i=S(4);
	j=S(2+2);
	k=S(3+1);
	l=S(1+3);
	m=S(++n);

	printf("%d %d %d %d %d %d",i,j,k,l,n,m);

	n=2;

	i=W(4);
	j=W(2+2);
	k=W(3+1);
	l=W(1+3);
	m=W(++n);

	printf("\n%d %d %d %d %d %d",i,j,k,l,n,m);
}

