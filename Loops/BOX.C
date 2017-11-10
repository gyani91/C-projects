/*Using graphic characters for making a box
also initialization of graphics */

#include<conio.h>
#include<stdio.h>
#include<graphics.h>
#include<stdlib.h>

void main()
{
	/* request auto detection */
   int gdriver = DETECT, gmode, errorcode;
   int left, top, right, bottom;
   clrscr();

   /* initialize graphics and local variables */
   initgraph(&gdriver, &gmode,"c:\\turboc3\\bgi");

   /* read result of initialization */
   errorcode = graphresult();
   if (errorcode != grOk)  /* an error occurred */
   {
      printf("Graphics error: %s\n", grapherrormsg(errorcode));
      printf("Press any key to halt:");
      getch();
      exit(1); /* terminate with an error code */
   }

	gotoxy(10,10);
	printf("%c",218);

	gotoxy(30,10);
	printf("%c",191);

	gotoxy(10,20);
	printf("%c",192);

	gotoxy(30,20);
	printf("%c",217);

	/* clean up */
	getch();
	closegraph();

}