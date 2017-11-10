#include<conio.h>
#include<stdio.h>

int main()
{
    int n,l=21,c;
    
    printf("Game has 21 sticks: One who picks the last stick loses");
    while(1)
    {
              printf("\nThe matchsticks left are %d",l);
              printf("\nEnter your choice(1-4):");
              scanf("%d",&n);
              if(n>4 || n<1)
              {
                     printf("\nPlease enter a correct choice");
                     continue;
              }       
              l=l-n;
              printf("\nThe matchsticks left are %d",l);
              c=5-n;
              l=l-c;
              printf("\nComputer picked %d",c);
              
              if(l==1)
              {
                      printf("\nThe matchsticks left are %d",l);
                      break;
              }
    }
    printf("\n\nYOU LOSE!!");
    
    printf("\n\n\n\nPress any key to exit...");
    getch();
    return 1;
}
