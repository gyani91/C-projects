#include<conio.h>
#include<stdio.h>

main()
{
	int d,n,i;
	clrscr();

	printf("Enter a number");
	scanf("%d",&n);


	if(n>0)
	{
		d=n/1000;
		if(d>0)
		{
			for(i=d;i>0;i--)
			printf("M");
			n=n-(d*1000);
		}
		if(n>=900)
		{
			printf("CM");
			n=n-900;
		}
		if(n>=500)
		{
			printf("D");
			n=n-500;
		}
		if(n>=400)
		{
			printf("CD");
			n=n-400;
		}
		d=n/100;
		if(d>0)
		{
			for(i=d;i>0;i--)
			printf("C");
			n=n-(d*100);
		}
		if(n>=90)
		{
			printf("XC");
			n=n-90;
		}
		if(n>=50)
		{
			printf("L");

			n=n-50;
		}
		if(n>=40)
		{
			printf("XL");
			n=n-40;
		}
		d=n/10;
		if(d>0)
		{
			for(i=d;i>0;i--)
			printf("X");
			n=n-(d*10);
		}
		if(n==9)
		{
			printf("IX");
			n=n-9;
		}
		if(n>=5)
		{
			printf("V");
			n=n-5;
		}
		if(n>0)
		{
			for(;n>0;n--)
			printf("I");
			n=0;
		}
	}

getch();
}


