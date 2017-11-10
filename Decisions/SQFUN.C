/* Sumeet Gyanchandani
   07/08/13
   persistent interview problem statement
*/

#include<stdio.h>
#include<conio.h>

void main()
{
	int i,n;
	clrscr();

	printf("Please enter the limit : ");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
		if(chk(i))
			printf("%d\t",i);
}

int chk(int n)
{
	int sq, sum_sq=0, sum_n=0, r;

	sq=n*n;

	while(sq)
	{
		r=sq%10;
		sum_sq+=r;
		sq/=10;
	}

	while(n)
	{
		r=n%10;
		sum_n+=r;
		n/=10;
	}

	sum_n*=sum_n;

	if(sum_n==sum_sq)
		return 1;
	else
		return 0;
}