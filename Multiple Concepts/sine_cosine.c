#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
int main()
{
    float x,sine,cosine,i,j,fact=1;
    printf("Enter the angle:");
    scanf("%f",&x);
    sine = x;
    for(i=1;i<10;i++)
    {
                     for(j=1;j<2i+2;j++)
                     {
                     fact=fact*i;
                     }
    sine=sine+((pwr(-1,i+1)*pwr(x,2i+1))/fact);
    }
    
    cosine = x;
    
    for(i=1,i<10;i++)
    {
                     for(j=1;j<(2i+1);j++)
                     {
                     fact=fact*i;
                     }
    cosine=cosine+((pwr(-1,i+1)*pwr(x,2i))/fact);
    }
    
    printf("Sine : %d",sine);
    printf("Cosine : %d",cosine);
    return 0;
    getch();
}  
