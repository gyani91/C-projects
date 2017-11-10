// Encoder 2014 2nd round problem statement without using clrscr()
#include<conio.h>
#include<stdio.h>
#include<string.h>

void main()
{
	char far* s;
	int i,j,count=0;

	char* string="Jhulelal\0";
	s=(char far*) 0xB8000000;//value of first pixel on the screen

	while(1)
	{
		 count++;
		 i=0;
		 //printing the string
		 while(string[i]!='\0')
		 {
			//given the pixel value of the string one at a time
			*(s+i*2)=string[i];
			i++;
		 }

		 // As computer performs instrution really fast
		 // We need to provide some delay so that a human eye
		 // could realize the chnages
		 delay(500);

		 // Filling the already printed string with blanks
		 for(j=0;j<2*strlen(string);j+=2)
			*(s+j)=' ';

		 // Changing the Pixel on the screening
		 // So that we can print the next iteration of the string
		 s=s+160*11+70;

		 // After print 3 times
		 // We require to intialize the screen pointer
		 // as the first pixel again

		 if(count==3)
		 {
			count=0;
			s=0xB8000000;
		 }
	}
}