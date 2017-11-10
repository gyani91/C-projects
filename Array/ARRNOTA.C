#include<stdio.h>
#include<conio.h>
void main()
{
	int a[]={10,2,-4,5};
	int i;
	clrscr();

	for(i=0;i<=3;i++)
		printf("%d \n",a[i]);
	for(i=0;i<=3;i++)
		printf("%d\n",*(i+a));
	for(i=0;i<=3;i++)
		printf("%d\n",*(a+i));
	for(i=0;i<=3;i++)
		printf("%d \n",i[a]);
	getch();
}
