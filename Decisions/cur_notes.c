#include<conio.h>
#include<stdio.h>
#include<math.h>

int main()
{
      int a,c,v,f=0;
      printf("Enter the value");
      scanf("%d",&v);
      
      c=v%10;
      v=v/10;
      a=v%10;
      if(a>5)
      {
             f=1;
             a=a-5;
      }
      v=v/10;
      
      printf("The split is :\n100 = %d\t50 = %d\t10 = %d\tChange= %d",v,f,a,c);
      getch();
      return 0;
}
