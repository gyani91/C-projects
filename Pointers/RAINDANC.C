#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

main()
{
	char far *s;
	char ch;
	char far *v;
	int r,c;
	clrscr();
	printf("kljsdaflkjasf;jas");
	s=0xB8000000;
	for(c=0;c<=79;c++)
	{
		ch=*(s+c*2);
		for(r=0;r<=24;r++)
		{
			v=s+r*160+c*2;
			*v=ch;
			delay(60);
			*(v-160)=' ';
			sound(350);
			delay(100);
			nosound();
		}
	}
}