// Gyani 15/03/13

#include<conio.h>
#include<stdio.h>
#include<stdlib.h>


void main()
{
	char a=65;
	char far *s;
	int i,j;
	clrscr();

	for(i=0;i<7;i++)
	{
		//intializing screen pointer
		s=0xB8000000;
		s+=(160*i);//Next line

		//ascending order alphabets
		for(j=0;j<7-i;j++)
		{
			*s=a+j;
			s+=2;
		}

		//reseting screen pointer
		s=0xB8000000;
		s=s+162*i+12;//Next Line + Next column

		 //descending order alphabets
		a=65;
		for(j=6-i;j>=0;j--)
		{
			*s=a+j;
			s+=2;
		}
		//printf("\n");
	}
}