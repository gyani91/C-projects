#include<conio.h>
#include<stdio.h>

int main()
{
	int c[10],q[25],n=0,n1,m,i,j,k,l=0,count,temp;
	printf("Enter the number");
	scanf("%d",&n);

	/* Distribution of number into array */
    for(i=0;n>0;i++)
	{
		c[i]=n%10;
		n/=10;
	}

	count=i;
	/* Substring evaluation */
	for(i=count;i>0;i--)
	{
		for(j=0;j<i;j++)
		{
			n1=0;
			for(k=count-i;k>=0;k--)
			{
				n1=(n1*10)+c[k+j];
			}
            q[l]=n1;
			l++;
		}
	}
	printf("\n");
	for(i=0;i<l;i++)
	                printf("%d  ",q[i]);
	/* Ascending order */
	for(j=0;j<l;j++)
	{
	for(i=0;i<l-1;i++)
	{
		if(q[i]>q[i+1])
		{
			temp=q[i];
			q[i]=q[i+1];
			q[i+1]=temp;
		}
	}
	}
	printf("\n\nAsending order : \n\n");
    for(i=0;i<l;i++)
	                printf("%d  ",q[i]);
	/* Checking prime or not */
	for(i=l;i>0;i--)
	{
		for(j=2;j<q[i];j++)
		{
			if((q[i]%j)==0)
				break;
		}
		if(j==q[i])
			break;
	}
    printf("\n\nGreatest prime substring is %d",q[i]);
	getch();
}
