/* Used in Dancing Doll Virus
can access the screen */

#include<conio.h>
#include<stdio.h>

void main()
{
	int i;
	char far *s;
	clrscr();

	printf("\n\n\n\n\n\t\t\tYou HaVe bEeN HaCkeD!!");
	printf("\n\n\t\tPreSs the SeCreT kEy tHat biPiN tOlD yOu");
	printf("\n\n\t\t\t\t   Or");
	printf("\n\n\t\t\t---> CoNTaCt Gyani");

	while(1)
	{
		s=0xB8000000;
		for(i=0;i<3999;i+=2)
		{
			if(*(s+i) >= 'A' && *(s+i) <= 'Z')
			{
				*(s+i)+=32;
				delay(25);
			}
			else
				if(*(s+i) >= 'a' && *(s+i) <= 'z')
				{
					*(s+i)-=32;
					delay(25);
				}
		}
	}
}