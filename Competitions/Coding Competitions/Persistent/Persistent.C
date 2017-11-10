#include<conio.h>
#include<stdio.h>
#include<string.h>

int func(char *str, int cur_len, int max_len);

void main()
{
	char *s;
	int ans;
	clrscr();

	gets(s);
	printf("%d",strlen(s));
	ans=func(s,strlen(s),100);
	printf("\n%s\n%d",s,ans);
}

int func(char *str,int cur_len,int max_len)
{
	int i=0,j;
	while(str[i])
	{
		if(str[i]=='P')
			if(str[i+1]=='S')
				if(str[i+2]=='P')
					if(str[i+3]=='L')
						if(str[i+4]==' ')
							if(i==0 || str[i-1]==' ')
							{
								cur_len+=6;
								if(cur_len > max_len)
									return -1;
								j=cur_len;
								str[j+1]='\0';
								while(j!=i+4)
								{
									str[j]=str[j-6];
									j--;
								}
								str[i+1]='e';
								str[i+2]='r';
								str[i+3]='s';
								str[i+4]='i';
								str[i+5]='s';
								str[i+6]='t';
								str[i+7]='e';
								str[i+8]='n';								str[i+9]='t';
								str[i+10]=' ';
							}
		i++;
	}
	return cur_len;
}