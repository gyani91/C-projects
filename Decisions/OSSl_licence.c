//OSS licence selection
#include<conio.h>
#include<stdio.h>

int main()
{
    char c;
    printf("Which licence should you choose?");
    
    printf("\nDo you want to disown the code you wrote?[Y/N]");
    scanf("%c",&c);
    
    if(c=='Y'|| c=='y')
    {
              printf("\nYou can consider making it public domain");
              
              printf("\nDoes your jurisdiction allow you to relinguish control?[Y/N]");
              scanf("%c",&c);
              
              if(c=='Y' || c=='y')
              {
                  printf("\nMake it public domain");
              }
              else
              {
                  printf("\nUse a permissive licence like BSD or MIT");
              }
    }
    else
    {
              printf("\nDo you mind your code being used in proprietary software?[Y/N]");
              scanf("%c",&c);
              
              
              if(c=='Y' || c=='y')
              {
                      printf("\nGPL");
              }
              else
              {
                      printf("\nDo you want to make money from such implementations?[Y/N]");
                      scanf("%c",&c);
                      
                      if(c=='Y' || c=='y')
                      {
                                printf("\nDUAL licence");
                      }
                      else
                      {
                          printf("\nDo you want bug fixes and improvements to came back to the community?[Y/N]");
                          scanf("%c",&c);
                          
                          
                          if(c=='Y' || c=='y')
                          {
                                  printf("\nMPL/CDDL");
                          }
                          else
                          {
                                  printf("\nBSD/MIT");
                          }
                      }
              }
    }
    getch();
    return 1;
}
