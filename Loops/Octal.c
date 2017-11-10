//To find the octal of the reverse no.
#include<conio.h>
#include<stdio.h>
#include<math.h>

int main()
{
    int n,r=0,d,o=0,p=0;
    
    printf("Enter number:");
    scanf("%d",&n);
    
    //REVERSE
    while(n>0)
    {
              d=n%10;
              r=r*10 + d;
              n=n/10;
    }
    //OCTAL
    while(r>0)
    {
              d=r%8;
              o=o+ d * pow(10,p);
              r=r/8;
              p++;
    }
    
    printf("%d",o);
    printf("\n\n\n\nPress any key to exit...");
    getch();
    return 1;
}
