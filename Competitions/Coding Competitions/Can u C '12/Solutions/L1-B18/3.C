#include<conio.h>
#include<stdio.h>
#include<string.h>

char str[20];
int num[100]={0};
int k=0;

void cal(int m,int n)
{
 int i,j;
 for(i=0;i<(n-m);i++)
   {
    for(j=0;j<=m;j++)
     {
       num[k]=((str[i+j])-'0')+(10*num[k]);
     }
    k++;
   }
}


int main()
{
 int n,i,j,t,flag;
 printf("\nENTER THE NO.");
 gets(str);
 n=strlen(str);
 for(i=0;i<n;i++)
      cal(i,n);
 printf("\nSUBSTRING ARE:");
 for(i=0;i<k;i++)
    printf("%d ",num[i]);
 for(i=0;i<k-1;i++)
   {
    for(j=0;j<k-1-i;j++)
     {
      if(num[j]<num[j+1])
       {
	t=num[j];
	num[j]=num[j+1];
	num[j+1]=t;
       }
     }
   }
 for(i=0;i<k;i++)
   {
     t=num[i];
     if(num[i]==0)
	break;
     flag=0;
     for(j=2;j<num[i];j++)
      {
       if(num[i]%j==0)
	  {
	    break;
	  }
      }
     if(j==num[i])
	break;
   }
 printf("\nLARGEST SUBSTRING PRIME NUMBER:%d",num[i]);
 getch();
}
