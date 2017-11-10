#include<conio.h>
#include<stdio.h>

int main()
{
    int a[3][3],b[3][3],c[3][3],i,j,k;
    
    printf("Enter Matrix A:\n");
    
    for(i=0;i<3;i++)
    {
                    for(j=0;j<3;j++)
                    {
                             scanf("%d",&a[i][j]);
                    }
    }
    
    printf("Enter Matrix B:\n");
    
    for(i=0;i<3;i++)
    {
                    for(j=0;j<3;j++)
                    {
                             scanf("%d",&b[i][j]);
                    }
    }
    printf("\nAddition of Matrix is :\n");
    for(i=0;i<3;i++)
    {
                    for(j=0;j<3;j++)
                    {
                             printf("%d\t",a[i][j]+b[i][j]);
                    }
                    printf("\n");
    }
    printf("Multiplication of Matrix :\n");
    for(i=0;i<3;i++)
    {
                    for(j=0;j<3;j++)
                    {
                             c[i][j] = 0; 
                             for(k=0;k<3;k++)
                             {
                              c[i][j]=c[i][j]+a[i][j]*b[j][k];
                             }
                             printf("\t%d",c[i][j]);
                    }
                    printf("\n");
    }
    getch();
}
