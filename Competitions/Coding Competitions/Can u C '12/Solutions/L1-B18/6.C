main()
{
	float x;
	float x1,x0;
	clrscr();
	printf("Enter NO:");
	scanf("%f",&x);
	x0=1;
	while(x1!=x0)
	{
		x0=x1;
		x1=x0-((x0*x0-x)/(2.0*x0));
	}
	printf("Square root:%f",-x1);
	getch();
}