#include<conio.h>
#include<stdio.h>
int mon[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int yr,m,ly=0,i,j,fday,ldays,count=1;
long ndays,tdays,c;
char month;
void p(void);
int main()
{
    printf("Enter the year");
	scanf("%d",&yr);
	printf("Enter the month of the year in numeric form");
	scanf("%d",&m);
    ndays = (yr-1)*365L;
    ldays = (yr-1)/4 - (yr-1)/100 + (yr-1)/400;
    tdays = ldays+ndays;
    
    if(m>2 && (yr%4)==0)
	{
	       tdays++;
	}
	for(i=1;i<m;i++)
	{
		tdays=tdays+mon[i];
	}
	fday=tdays%7;
	switch(m)
	{
		case 1:
			month='J';
			break;
		case 2:
			month='F';
			break;
		case 3:
			month='M';
			break;
		case 4:
			month='A';
			break;
		case 5:
			month='M';
			break;
		case 6:
			month='J';
			break;
		case 7:
			month='J';
			break;
		case 8:
			month='A';
			break;
		case 9:
			month='S';
			break;
		case 10:
			month='O';
			break;
		case 11:
			month='N';
			break;
		case 12:
			month='D';
			break;
		default:
			printf("Enter a valid month");
	}
    p();
	getch();
	printf("\n\n\n");
	count=1;
	main();
}

void p(void)
{
            printf("\n\n\t\t\t\t%c\t\t\t%d\n",month,yr);
			printf("\tMON \tTUE \tWED \tTHUR \tFRI \tSAT \tSUN\n");
			for(i=0;i<fday;i++,count++)
			{
				printf("\t");
				
			}
			for(i=1;i<=mon[m];i++,count++)
			{
				printf("\t%d",i);
				if(count==7)
				{
                            count=0;
                            printf("\n");
                            }
                            }
    if(m==2 && (yr%4)==0)
	{
	       printf("\t29");
	}
}
