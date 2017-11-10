#include<string.h>
void main()
{
	char s[20];
	int l,i,j,k;
	clrscr();
	printf("Enter String:");
	gets(s);
	l=strlen(s);
	for(i=0;i<l;i++)
	{
		k=0;
		if(s[i]>='0' && s[i]<='9')
		{
			k=(s[i]-'0');
			i++;
		}
		printf("%c",s[i]);
		for(j=0;j<k-1;j++)
			printf("%c",s[i]);
	}
	getch();
}
