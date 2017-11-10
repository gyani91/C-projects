#include<stdio.h>
void main()
{
 FILE *f;
 char c;
clrscr();
 f=fopen("nilesh7.c","r");
 while((c=fgetc(f))!=EOF)
  {
   printf("%c",c);
  }
 fclose(f);
 getch();

}