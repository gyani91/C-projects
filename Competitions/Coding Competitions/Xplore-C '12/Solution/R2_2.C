//Gyani 15/03/13

#include<conio.h>
#include<stdio.h>

void main()
{
	char *s;
	int i=0;
	clrscr();

	printf("Enter a valid Email-Id");

	scanf("%s",s);

	if(s[0]=='@')
	{
		printf("Provide a valid username");
		exit(0);
	}

	while(s[i]!='@')
		i++;

	if(s[0]=='.' || s[0]=='@')
	{
		printf("Provide a correct Domain name");
		exit(0);
	}

	while(s[i]!='.')
		i++;
	printf("The Email-ID is valid");

}