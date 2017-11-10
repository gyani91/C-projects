#include<conio.h>
#include<stdio.h>

int main()
{
	int a[10],i,j,t;
	printf("Enter Ten Value : ");

	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}

	/* Bubble Sort */

	for(i=0;i<10;i++)
	{
		for(j=0;j<9-i;j++)
		{
			if(a[j+1]<=a[j])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}

	for(i=0;i<10;i++)
	{
		printf("%d\t",a[i]);
	}
	getch();
}
