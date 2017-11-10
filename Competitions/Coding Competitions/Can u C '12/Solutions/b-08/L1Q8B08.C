#include<conio.h>
#include<stdio.h>

void main()
{
	char *s;
	int i=0,j,k;
	clrscr();

	printf("Enter a compressed string\n");
	gets(s);

	while(s[i]!='\0')
	{
		if(s[i]>='0' && s[i]<='9')
		{
			j=s[i]-'0';
			i++;
			if(s[i]>='0' && s[i]<='9')
			{
				j=j*10+(s[i]-'0');
				i++;
			}
			for(k=0;k<j;k++)
				printf("%c",s[i]);
		}
		else
		{
			printf("%c",s[i]);
		}
		i++;
	}

}