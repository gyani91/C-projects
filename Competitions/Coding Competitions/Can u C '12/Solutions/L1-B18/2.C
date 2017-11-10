char rom[][2]={"","M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
int inte[14]={0,1000,900,500,400,100,90,50,40,10,9,5,4,1};
void main()
{
	int n,i;
	clrscr();
	printf("Enter No:");
	scanf("%d",&n);
	i=1;

	if(n==0)
		printf("0");
	while(n>0)
	{

		if((n-inte[i])>=0)
		{
			n=n-inte[i];
			printf("%s",rom[i]);
		}
		if(n<inte[i])
		   i++;

	}
	getch();
}