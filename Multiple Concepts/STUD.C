#include<conio.h>
#include<stdio.h>
void main()
{
	struct stud
	{
		char n[25];
		int r;
		float m;
	} s[5];
	FILE *f;
	int i;
	f=fopen("Record","wb");
	clrscr();
	for(i=0;i<5;i++)
	{

		printf("\nEnter Name of Student %d",i+1);
		scanf("%s",&s[i].n);
		printf("\nEnter Roll Number: ");
		scanf("%d",&s[i].r);
		printf("Enter Mark: ");
		scanf("%f",&s[i].m);
	}
	for(i=0;i<5;i++)
	{
		fwrite(&s[i],sizeof(s[i]),1,f);
	}
	fclose(f);
	f = fopen("Record","rb");
	for(i=0;i<5;i++)
		fread(&s[i],sizeof(s[i]),1,f);
	for(i=0;i<5;i++)
	{
		printf("\n%s\t%d\t%d\t%f",s[i].n,s[i].r,s[i].m);
	}
	fclose(f);
	getch();
}

