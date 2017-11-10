#include<conio.h>
#include<stdio.h>

int main()
{
    int a,b,s;
    int swap(int*,int*);
    
    printf("Enter two numbers : ");
    scanf("%d%d",&a,&b);
    
    s = swap(&a,&b);
    
    printf("The interchanged values are : %d %d",a,b);
    
    getch();
}

int swap (int *x, int *y)
{
         *x = *x + *y;
         *y = *x - *y;
         *x = *x - *y;
         return 0;
}
