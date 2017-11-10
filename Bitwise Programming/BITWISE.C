#include<conio.h>
#include<stdio.h>

void main()
{
	unsigned char i=0,x,y,a[]={0,1,1,0,1,0,0,0,1,1},bit,xmax=10;
	unsigned int b=0,c[10],d=0;
	clrscr();

	x=12;
	y=6;

	//Saving x & Y coordinates in a single char
	i |= x;
	i=(i<<4);
	i |= y;
	printf("%d",i);

	x=(i>>4);

	y=(((char)(i<<4))>>4);

	//bitwise complimentary
	printf("\n%d\t%d\t%d",x,y,(unsigned char) ~x);

	//Storing each bit in an int
	for(i=0;i<xmax;i++)
	{
		b |= (a[i]<<i);
	}

	printf("\n%d",b);

	//Retrieving each bit from an int
	for(i=0;i<xmax;i++)
	{
		c[i]=((b<<15-i)>>15);
	}

	for(i=0;i<xmax;i++)
	{
		printf("\n%d\t%d",a[i],c[i]);
	}

	/* generate a bit-wise number */
	bit=8;
	for(i=0;i<xmax;i++)
	{
		if(i==bit)
			d |= (1<<i);
	}
	b &= d;
	b = (b>>bit);
	printf("\n%d",b);
}