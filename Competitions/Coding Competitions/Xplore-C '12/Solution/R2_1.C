#include<conio.h>
#include<stdio.h>

// Gyani 15/03/13
void main()
{
	char name[10][10],temp[10];
	int i,j;
	clrscr();

	// Input Strings

	printf("Please enter 10 names\n");

	for(i=0;i<10;i++)
		scanf("%s",name[i]);
	// arranging in alphabetical order
	for(i=0;i<10;i++)
	{
		for(j=0;j<9-i;j++)
		{
			if(strcmp(name[j],name[j+1])>0)
			{
				strcpy(temp,name[j]);
				strcpy(name[j],name[j+1]);
				strcpy(name[j+1],temp);
			}
		}
	}

	// Printing Sorted Strings

	for(i=0;i<10;i++)
		printf("%s\n",name[i]);
}

