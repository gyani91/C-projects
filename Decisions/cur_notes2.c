#include<stdio.h>
#include<conio.h>

int main()
{
    int a,h,f,t;
    
    printf("Enter the amount");
    scanf("%d",&a);
    
    h=a/100;
    a=a%100;
    f=a/50;
    a=a%50;
    t=a/10;
    a=a%10;
    
    printf("100 = %d\t50 = %d\t10 = %d\tchange = %d",h,f,t,a);
    getch();
}
