#include<stdio.h>
#include<conio.h>
#include<iostream.h>

int main()
{
	float sum,i,j,g,n,x,r,p,q,d;

	printf("Enter the value of X");
	scanf("%d",&x);

	printf("Enter the limit:");
	scanf("%d",&n);

	sum=1+n;
	for(i=0;i<n-2;i++)
	{
		p = power(x,i);
		r=i;
		for(j=0;j<i;j++)
		{
			q=q*r;
			r--;
		}
		d=p/q;
		printf("Factorial = %d",d);
		g = power(-1,i+1);
		sum=sum+(g*d);
	}
	printf("Ans : %d",sum);
	return 1;
	getch();
}
