// Gyani 16/03/13

#include<conio.h>
#include<stdio.h>

struct nine
{
	float x;
	int y;
	char z[3];
};

void main()
{
	struct nine a[2];
	int start,end;
	clrscr();

	start=&a[0].x;
	end=&a[1].x;


	printf("%d",end-start);
}