#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#define PATH "../BGI"
#include<graphics.h>
#include<dos.h>
#include<process.h>
#include<time.h>

char word[30];
int r;

void log_code(void);
void eng_word(void);
void myt_word(void);
void sci_word(void);
void mon_word(void);
void pol_word(void);

screen1()
{
 int gd=DETECT,gm;
 initgraph(&gd,&gm,PATH);
 setfillstyle(SOLID_FILL,GREEN);
 bar(0,0,640,480);
 setfillstyle(SOLID_FILL,LIGHTRED);
 bar(15,15,625,465);
 setfillstyle(SOLID_FILL,BLUE);
 bar(30,30,610,450);
 setfillstyle(SOLID_FILL,RED);
 bar(45,45,595,435);
 settextstyle(1,0,8);
 setcolor(WHITE);
 outtextxy(190,90,"GUESS");
 setfillstyle(SOLID_FILL,LIGHTGRAY);
 bar3d(180,200,395,190,20,20);
 outtextxy(250,190,"IT");
/* bar3d(140,255,440,245,20,20);
 outtextxy(165,270,"SYSTEM");   */
 bar3d(225,290,320,300,20,20);
/* sleep(4);  */
getch();
closegraph();
 restorecrtmode();
 return 0;
}
//void end();
title(char *title,int x)
{
	setfillstyle(SOLID_FILL,9);
	bar(0,0,640,50);
	setcolor(BLACK);
	settextstyle(1,0,5);
	outtextxy(x,0,title);
	return 0;
 }
 start()
{
	char *menu[]={
		"ENGLISH",
		"MONUMENTS",
		"MYTHOLOGICAL",
		"SCIENCE",
		"PLACESORLOCTIONS",
		"EXIT"
		};

	char ch;
	int gd=DETECT,gm;
	int i,choice=0;
	initgraph(&gd,&gm,PATH);
	setfillstyle(SOLID_FILL,RED);
	bar(0,0,640,480);
	title("CATEGORY MENU",130);
	status();
	box(0,menu[0]);
	box(1,menu[1]);
	box(2,menu[2]);
	box(3,menu[3]);
	box(4,menu[4]);
	box(5,menu[5]);
	selectbox(choice,menu[choice]);
	while((ch=getch())!=13)
	{
		switch(ch)
		{
		case 80:
		case 81:
		choice++;
		if(choice==6)
		choice=0;
		selectbox(choice,menu[choice]);
		for(i=0;i<=5;i++)
		{
		if(i==choice) continue;
		box(i,menu[i]);
		}
		break;
		case 72:
		case 73:
		choice--;
		if(choice==-1)
		choice=5;
		selectbox(choice,menu[choice]);
		for(i=0;i<=5;i++)
		{
		if(i==choice) continue;
		box(i,menu[i]);
		}
		}
	}

	pressbutton(choice,menu[choice]);
	closegraph();
	restorecrtmode();

     clrscr();

     switch(choice)
     {
	 case 0:
		eng_word();
		break;
	case 1:
		myt_word();
		break;
	 case 2:
		mon_word();
		break;
	 case 3:
		pol_word();
		break;
	 case 4:
		sci_word();
		break;
	 case 5:
		exit(1);
	}
	return 0;
}
pressbutton(int i,char *p)
{

 setfillstyle(SOLID_FILL,WHITE);
 bar(180,110+55*i,410,140+55*i);
 setfillstyle(SOLID_FILL,9);
 bar(179,108+55*i,409,138+55*i);
 setcolor(CYAN);
 settextstyle(1,0,2);
 outtextxy(184,110+55*i,p);
 delay(350);
 return 0;
 }


 selectbox(int i,char *p)
 {
 setfillstyle(SOLID_FILL,WHITE);
 bar(179,108+55*i,409,138+55*i);
 setfillstyle(SOLID_FILL,9);
 bar(180,110+55*i,410,140+55*i);
 setcolor(WHITE);
 settextstyle(1,0,2);
 outtextxy(184,110+55*i,p);

 return 0;
 }
  box(int i,char *p)
 {
 setfillstyle(SOLID_FILL,WHITE);
 bar(179,108+55*i,409,138+55*i);
 setfillstyle(SOLID_FILL,LIGHTGRAY);
 bar(180,110+55*i,410,140+55*i);
 setcolor(BLUE);
 settextstyle(1,0,2);
 outtextxy(184,110+55*i,p);
 setfillstyle(SOLID_FILL,WHITE);
// bar(180,60,390,90);
// setfillstyle(SOLID_FILL,RED);
// bar(179,59,389,89);


 return 0;
 }
  status()
 {
	setfillstyle(SOLID_FILL,9);
	bar(0,450,640,480);
	setcolor(BLACK);
	settextstyle(1,0,3);
	outtextxy(30,450,"USE UP & DOWN ARROW KEYS TO SELECT AN OPTION");
	return 0;
 }
 void rules()
 {
 clrscr();
 printf("\nThe rules of the game are as follows");
 printf("\nWe have given a questions and the number of blanks ");
 printf("\nare equal to number of characters in answer. we ");
 printf("\n to guess the character and enter if the character\n is in the answer the blanks of respective places");
 printf("\nwill be replaced by the character and such that we have to complete\nthe word and if we have comited some mistake");
 printf("\nin guessing the character we will loose one chance out of three...GOOD LUCK");
 getch();
 }
 credit()
 {
  int gd=DETECT,gm;
 initgraph(&gd,&gm,PATH);
 setfillstyle(SOLID_FILL,RED);
 bar(0,0,640,480);
 setfillstyle(SOLID_FILL,WHITE);
 bar(15,15,625,465);
 setfillstyle(SOLID_FILL,RED);
 bar(30,30,610,450);
 setfillstyle(SOLID_FILL,LIGHTGRAY);
 bar3d(180,100,420,300,25,25); /*members bar*/
 settextstyle(1,1,10);
 setcolor(WHITE);
 outtextxy(10,50,"JIT");
 setfillstyle(SOLID_FILL,LIGHTGRAY);
 bar3d(180,50,440,70,20,20);   /*project members bar*/
 bar3d(50,350,590,420,25,25);  /*project guide bar*/
 setcolor(BLUE);
 settextstyle(1,0,2);
 outtextxy(193,48,"PROJECT PARTNERS");

 outtextxy(193,100,"Dhiraj");
 outtextxy(193,130,"Shakti");
 outtextxy(193,170,"Rimjhim");
 outtextxy(193,210,"Bharti");
 outtextxy(193,250,"Jaya");
 outtextxy(193,280,"Priyanka");



 outtextxy(235,351,"PROJECT GUIDE:");
 settextstyle(1,0,5);
 outtextxy(140,373,"Ms. Neha Kasture");
getch();
 closegraph();
 restorecrtmode();
 getch();
 return 0;
 }

 main_menu()
  {
	char *menu[]={"START",
		"RULES",
		"CREDIT",
		"EXIT"};

	char ch;
	int gd=DETECT,gm,i,choice=0;
	b:
	initgraph(&gd,&gm,PATH);
	setfillstyle(SOLID_FILL,RED);
	bar(0,0,640,480);
	title("MAIN MENU",180);
	status();
	box(0,menu[0]);
	box(1,menu[1]);
	box(2,menu[2]);
	box(3,menu[3]);
	selectbox(choice,menu[choice]);

	while((ch=getch())!=13)
	{
		switch(ch)
		{
		case 80:
		case 81:
		choice++;
		if(choice==4)
		choice=0;
		selectbox(choice,menu[choice]);
		for(i=0;i<=3;i++)
		{
		if(i==choice) continue;
		box(i,menu[i]);
		}
		break;
		case 72:
		case 73:
		choice--;
		if(choice==-1)
		choice=3;
		selectbox(choice,menu[choice]);
		for(i=0;i<=3;i++)
		{
		if(i==choice) continue;
		box(i,menu[i]);
		}
		}
	}
	pressbutton(choice,menu[choice]);

       switch(choice)
       {
	    case 0:
		   start();
		   break;
	    case 1:
		   rules();
		   break;
	    case 2:
		   credit();
		   break;
	    case 3:
		   closegraph();
		   restorecrtmode();
		   exit(0);
	  }
	  if(choice==1||choice==2)
	  goto b;
	  return 0;
}
void main()
{
	screen1();
	main_menu();
}

// Backend

void eng_word(void)
{

	FILE *fp;
	int i;
	char ch;
	fp=fopen("eng.txt","r");
	if(fp==NULL)
	{
		printf("\nCannot open file!");
		getch();
		exit(0);
	}
	clrscr();
		r=random(10);
		r+=48;
		while(ch!=EOF)
		{
			ch=fgetc(fp);
			if(ch==r)
				break;
		}
		while(ch!='\n')
		{
			ch=fgetc(fp);
			printf("%c",ch);
		}
		ch='2';
		for(i=0;ch!='\n';i++)
		{
			ch=fgetc(fp);
			word[i]=ch;
		}
		i--;
		word[i]='\0';

		//printf("%s\n",word);

		log_code();
		randomize();
		fclose(fp);
}

void myt_word(void)
{

	FILE *fp;
	int i;
	char ch;
	fp=fopen("myt.txt","r");
	if(fp==NULL)
	{
		printf("\nCannot open file!");
		getch();
		exit(0);
	}
	clrscr();
		r=random(10);
		r+=48;
		while(ch!=EOF)
		{
			ch=fgetc(fp);
			if(ch==r)
				break;
		}
		while(ch!='\n')
		{
			ch=fgetc(fp);
			printf("%c",ch);
		}
		ch='2';
		for(i=0;ch!='\n';i++)
		{
			ch=fgetc(fp);
			word[i]=ch;
		}
		i--;
		word[i]='\0';

		log_code();
		fclose(fp);

}

void sci_word(void)
{

	FILE *fp;
	int i;
	char ch;
	fp=fopen("sci.txt","r");
	if(fp==NULL)
	{
		printf("\nCannot open file!");
		getch();
		exit(0);
	}
	clrscr();
		r=random(10);
		r+=48;
		while(ch!=EOF)
		{
			ch=fgetc(fp);
			if(ch==r)
				break;
		}
		while(ch!='\n')
		{
			ch=fgetc(fp);
			printf("%c",ch);
		}
		ch='2';
		for(i=0;ch!='\n';i++)
		{
			ch=fgetc(fp);
			word[i]=ch;
		}
		i--;
		word[i]='\0';

		log_code();
		fclose(fp);

}

void mon_word(void)
{

	FILE *fp;
	int i;
	char ch;
	fp=fopen("mon.txt","r");
	if(fp==NULL)
	{
		printf("\nCannot open file!");
		getch();
		exit(0);
	}
	clrscr();
		r=random(10);
		r+=48;
		while(ch!=EOF)
		{
			ch=fgetc(fp);
			if(ch==r)
				break;
		}
		while(ch!='\n')
		{
			ch=fgetc(fp);
			printf("%c",ch);
		}
		ch='2';
		for(i=0;ch!='\n';i++)
		{
			ch=fgetc(fp);
			word[i]=ch;
		}
		i--;
		word[i]='\0';

		log_code();
		fclose(fp);

}

void pol_word(void)
{

	FILE *fp;
	int i;
	char ch;
	fp=fopen("pol.txt","r");
	if(fp==NULL)
	{
		printf("\nCannot open file!");
		getch();
		exit(0);
	}
	clrscr();
		r=random(10);
		r+=48;
		while(ch!=EOF)
		{
			ch=fgetc(fp);
			if(ch==r)
				break;
		}
		while(ch!='\n')
		{
			ch=fgetc(fp);
			printf("%c",ch);
		}
		ch='2';
		for(i=0;ch!='\n';i++)
		{
			ch=fgetc(fp);
			word[i]=ch;
		}
		i--;
		word[i]='\0';

		log_code();
		fclose(fp);
}

void log_code(void)
{
	char alpha,over[26],wrong[5];
	int ptr,s_ptr=0,new_ptr=0,flag=0,i,j,o=0,correct=0,done=0,y,x=0,score=0;
	for(ptr=0;word[ptr]!='\0';ptr++)
	{
		if(word[ptr]==' ')
		{
			printf(" ");
			s_ptr=s_ptr+1;
		}
		else
			printf("_ ");
	}
	ptr--;
	ptr=ptr-s_ptr;
	//printf("\n%d\t%d",ptr,s_ptr);

	while(ptr!=new_ptr)
	{
		printf("\n\n\t\t\tEnter the value : ");
		scanf("%s",&alpha);
		clrscr();
		printf("\n\n\n\t\t\t");
		new_ptr=0;
		correct=0;
		flag=0;
		for(j=0;j<o;j++)
				if(over[j]==alpha)
				{
					printf("\n\n\t\t\tAlphabet already entered. Enter another alphabet!!\n");
					flag=1;
				}
		if(flag==1)
			continue;
		for(i=0;word[i]!='\0';i++)
		{

			done=0;
			for(j=0;j<o;j++)
				if(over[j]==word[i])
				{
					printf("%c ",over[j]);
					done=1;
					new_ptr++;
				}

			if(done!=1)
			{
				if(word[i]==alpha)
				{
					over[o]=alpha;
					o++;
					printf("%c ",alpha);
					correct=1;
				}
				else if(word[i]==' ')
					printf("  ");
				else
					printf("_ ");
			}
		}

		if(correct==0 && x<5)
		{
			over[o]=alpha;
			o++;
			wrong[x]=alpha;
			x++;
			score--;
		}

		if(correct == 1)
			score+=5;
		printf("\n\n\t\t\tUsed alphabets: ");
			for(y=0;y<o;y++)
				printf("%c ",over[y]);
		printf("\n\n\t\t\tWrong alphabets: ");
			for(y=0;y<x;y++)
				printf("%c  ",wrong[y]);
		if(x==5)
		{
			printf("\n\n\t\t\tGAME OVER\n\t\t\tSCORE:%d",score);
			getch();
			return;
		}
	}
	printf("\nSCORE:%d",score);
	getch();
}
