#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n,m=0,a,b;

	printf("How many digit's number you wish to enter:\n");
	scanf("%d",&a);

	printf("\nEnter the number:\n");
	scanf("%d",&n);

	/* reversing the number */

	for(i=0;i<a;i++)
	{
		b=n%10;
		m=m*10+b;
		n=n/10;
	}
	printf("Reverse : %d\n\n",m);

	/* print names */

	for(i=0;i<a;i++)
	{
		b=m%10;
		m=m/10;
		switch(b)
		{
			case 0:
			{
				printf("Zero\t");
				break;
			}
			case 1:
			{
				printf("One\t");
				break;
			}
			case 2:
			{
				printf("Two\t");
				break;
			}
			case 3:
			{
				printf("Three\t");
				break;
			}
			case 4:
			{
				printf("Four\t");
				break;
			}
			case 5:
			{
				printf("Five\t");
				break;
			}
			case 6:
			{
				printf("Six\t");
				break;
			}
			case 7:
			{
				printf("Seven\t");
				break;
			}
			case 8:
			{
				printf("Eight\t");
				break;
			}
			case 9:
			{
				printf("Nine\t");
				break;
			}
		}
	}
	getch();
	return 1;
}
