/* Sumeet Gyanchandani
   07/08/13
   Removing repeated entries from the string
*/

#include<stdio.h>
#include<conio.h>

void main()
{
	char* s;
	int i=0,j,k;
	clrscr();

	printf("Please enter a string : ");
	gets(s);

	while(s[i]!='\0')
	{
		j=1;
		while(s[i+j]!='\0')
		{
			if(s[i]==s[i+j])
			{
				k=i+j;
				while(s[k]!='\0')
				{
					s[k]=s[k+1];
					k++;
				}
			}
			j++;
		}
		i++;
	}

	printf("\n%s",s);
}