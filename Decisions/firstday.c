//To calculate the day on 1st Jan of any year
#include<conio.h>
#include<stdio.h>

int main()
{
    int ldays,fday,yr;
    long int ndays,tdays;
    
    printf("Enter year:");
    scanf("%d",&yr);
    
    ndays=(yr-1)*365L;
    ldays=(yr-1)/4 - (yr-1)/100 + (yr-1)/400;
    tdays=ldays+ndays;
    fday=tdays%7;
    if(fday==0)
    {
               printf("\nMonday");
    }
    if(fday==1)
    {
               printf("\nTuesday");
    }
    if(fday==2)
    {
               printf("\nWednesday");
    }
    if(fday==3)
    {
               printf("\nThursday");
    }
    if(fday==4)
    {
               printf("\nFriday");
    }
    if(fday==5)
    {
               printf("\nSaturday");
    }
    if(fday==6)
    {
               printf("\nSunday");
    }
    
    printf("\n\n\n\nPress any key to exit...");
    getch();
    return 1;
}
