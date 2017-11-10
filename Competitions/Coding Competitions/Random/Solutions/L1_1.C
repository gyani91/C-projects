//Gyani 15/03/13

#include<conio.h>
#include<stdio.h>

void main()
{

	char *s,c;
	int i=0;
	clrscr();

	printf("Enter the String\n");

	scanf("%s",s);

	while(s[i])
	{
		 c=s[i]-96;
		 c=(2*c)%26;//add the numerical value of the number to itself
		 s[i]=c+96;
		 if(c==0)
			s[i]='z';// Boundary condition
		 i++;
	}

	printf("\n\n%s",s);
}
