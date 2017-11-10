#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	int c,n,a,b,d,e,i;
	clrscr();
	printf("\t\t\t1:Fibonacci Series\n");
	printf("\t\t\t2:Factorial\n");
	printf("\t\t\t3:Check whether the number is PRIME\n");
	printf("\t\t\t4:Sum of digits of the number\n");
	printf("\t\t\t5:Quit\n\n");

	do
	{

		printf("\n\t\t\tEnter your choice\n");
		scanf("%d",&c);

		switch(c)
		{
			case 1:
			{
				printf("Enter the limit:");
				scanf("%d",&n);
				a=0;
				b=1;
				printf("%d  %d  ",a,b);

				for(i=0;i<n-2;i++)
				{
					d=a+b;
					printf("%d  ",d);
					a=b;
					b=d;
				}
				break;

			}
			case 2:
			{
				printf("Enter the number:");
				scanf("%d",&n);

				e=n;
				d=1;
				for(i=0;i<n;i++)
				{
					d=d*e;
					e--;
				}
				printf("\nFactorial of %d is %d",n,d);
				break;
			}
			case 3:
			{
				printf("\nEnter the Number:");
				scanf("%d",&n);

				b=n-1;
				for(i=0;i<n;i++)
				{
					b--;
					a=n%b;
					if(a==0)
					{
						break;
					}
				}
				if(b==1)
				{
					printf("\nEntered number is Prime");
				}
				else
				{
					printf("\nEntered number is not Prime");
				}

				break;
			}
			case 4:
			{
				printf("Enter the number:");
				scanf("%d",&n);

				a=0;
				for(i=0;i<10;i++)
				{
					b=n%10;
					a=a+b;
					n=n/10;
				}
				printf("\nSum of digits of the number is %d",a);
				break;

			}
			case 5:
			{
				exit(0);
			}
		}
	}while(1);
	getch();
}