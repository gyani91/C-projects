#include<conio.h>
#include<stdio.h>

int main()
{
	long int m=999919,c=2,d=1,m1;

	for(c=2;c;c++)
	{
		d=m%c;
		if(d==0)
			break;
	}

	m1=m/c;
	printf("%ld mice ever eaten by %ld cats each",m1,c);
	getch();
}
