#include<conio.h>
#include<stdio.h>

int main()
{
 long n=999919;
 long i;
 printf("\nNO.OF CATS ARE:");
 for(i=2;i<n;i++)
  {
   if(n%i==0)
      printf("%ld  ,",i);
  }
  getch();
}
