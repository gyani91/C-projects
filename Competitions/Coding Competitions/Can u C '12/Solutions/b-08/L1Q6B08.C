#include<conio.h>
#include<stdio.h>

/* Sqrt without using math.h
	Sumeet Gyanchandani
	09/02/14
*/
void main()
{
	float i,j=0.0001f;
	float num;
	clrscr();

	printf("Enter the number:\n");
	scanf("%f",&num);

	for(i=0;i<num;i+=j)
		if((i*i)>num)
			break;
	printf("The Square root of %f is %.4f",num,i);
}