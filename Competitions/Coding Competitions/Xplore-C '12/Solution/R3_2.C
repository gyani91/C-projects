//Gyani 15/03/13
#include<conio.h>
#include<stdio.h>

#define MIN 6

struct stud
{
	int roll,sem,att;
	char name[8],dept[4];
};

void xtable(struct stud *t);
void sortr(struct stud *t);
void sortn(struct stud *t);
void sorta(struct stud *t);

void main()
{
	struct stud s[MIN];
	int ch,i;
	while(1)
	{
		clrscr();
		printf("\t\t\t1: Enter the Details\n");
		printf("\t\t\t2: Sort by Roll No\n");
		printf("\t\t\t3: Sort by Name\n");
		printf("\t\t\t4: Sort by Percentage\n");
		printf("\t\t\t5: Exit\n");

		printf("\n\t\t\tEnter your choice: ");

		scanf("%d",&ch);

		switch(ch)
		{
			case 1:
				for(i=0;i<MIN;i++)
				{
					clrscr();
					printf("Enter Details for Student Number %d",i+1);

					printf("\nEnter the Name\n");
					scanf("%s",s[i].name);

					printf("\nEnter the Roll No.\n");
					scanf("%d",&s[i].roll);

					printf("\nEnter the Semester\n");
					scanf("%d",&s[i].sem);

					printf("\nEnter the Department\n");
					scanf("%s",s[i].dept);

					printf("\nEnter the Percentage Attendence\n");
					scanf("%d",&s[i].att);
				}
				break;
			case 2:
				sortr(s);
				xtable(s);
				break;
			case 3:
				sortn(s);
				xtable(s);
				break;
			case 4:
				sorta(s);
				xtable(s);
				break;
			case 5:
				exit(0);
			default:
				printf("Please Enter the Correct Choice");
				getch();
		}
	}
}

void xtable(struct stud *t)
{
	int i;
	for(i=0;i<MIN;i++)
	{
		printf("%8s%5d  %3s%5d%5d\n",t[i].name,t[i].roll,t[i].dept,t[i].sem,t[i].att);
	}
	getch();
}

void sortr(struct stud *t)
{
	int i,j;
	struct stud temp;
	for(i=0;i<MIN;i++)
		for(j=0;j<MIN-i-1;j++)
			if(t[j].roll>t[j+1].roll)
			{
				temp=t[j];
				t[j]=t[j+1];
				t[j+1]=temp;
			}
}

void sorta(struct stud *t)
{
	int i,j;
	struct stud temp;
	for(i=0;i<MIN;i++)
		for(j=0;j<MIN-i-1;j++)
			if(t[j].att>t[j+1].att)
			{
				temp=t[j];
				t[j]=t[j+1];
				t[j+1]=temp;
			}
}

void sortn(struct stud *t)
{
	int i,j;
	struct stud temp;
	for(i=0;i<MIN;i++)
		for(j=0;j<MIN-i-1;j++)
			if(strcmp(t[j].name,t[j+1].name)>0)
			{
				temp=t[j];
				t[j]=t[j+1];
				t[j+1]=temp;
			}
}
