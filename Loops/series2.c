#include<conio.h>
#include<stdio.h>

int main()
{
    int i,j,c=1,b=3;
    for(i=1;i<=4;i++)
    {
                    for(j=0;j<b;j++)
                    {
                                    printf(" ");
                    }
                    for(j=0;j<i;j++)
                    {
                                    printf("%d ",c++);
                    }
                    printf("\n");
                    b--;
    }
    
    printf("\n\n\n\nPress any key to exit...");
    getch();
    return 1;
}
