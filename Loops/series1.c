#include<conio.h>
#include<stdio.h>

int main()
{
    int i=1,x=73,j=65,b=0,v,k;
    
    while(i<=9)
    {
              v=x;
              while(j<=v)
              {
                         printf("%c",j);
                         j++;
              }
              if(i==1)
                      v--;
              k=1;
              while(k<=b)
              {
                         printf(" ");
                         k++;
              }
              
              b=2*i-1;
              
              while(v>=65)
              {
                          printf("%c",v);
                          v--;
              }
              printf("\n");
              i++;
              x--;
              j=65;
    }
    
    printf("\n\n\n\nPress any key to exit...");
    getch();
    return 1;
}
