/*	Sumeet Gyanchandani
	Playfair Cipher
	10/03/14
*/

#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	char keymat[5][5],x,temp,xcorner[2],ycorner[4];
	char* key;
	char* code;
	char* enc_code;
	char* dec_code;

	int i,j,a,b,c,d,flag=0,count=0;
	clrscr();

	//initializations

	enc_code[0]='\0';
	dec_code[0]='\0';
	ycorner[2]=' ';
	ycorner[3]='\0';
	printf("Enter the key :\n");
	gets(key);

	//initializing the encryption matrix
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			keymat[i][j]='@';


	//creating encryption matrix from the key
	//inserting the key in the matrix
	i=0;
	while(key[i]!='\0')
	{
		if((key[i]>='a' && key[i]<='z') || (key[i]>='A' && key[i]<='Z'))
		{
			j=0;
			a=0;
			b=0;
			while(j<=count)
			{
				if(b==5)
				{
					b=0;
					a++;
				}
				if(key[i]==keymat[a][b])
					break;
				b++;
				j++;
			}
			if(j>count && (key[i]!='j' || key[i]!='J'))
			{
				b--;
				keymat[a][b]=key[i];
				count++;
			}
		}
		i++;

	}

	//filling the matrix with leftover alphabets
	for(x='a';x<='z';x++)
	{
		j=0;
		a=0;
		b=0;
		while(j<=count)
		{
			if(b==5)
			{
				b=0;
				a++;
			}
			if(x==keymat[a][b])
				break;
			b++;
			j++;
		}
		if(j>count && x!='j')
		{
			keymat[a][--b]=x;
			count++;
		}
	}
	printf("\nThe encryption matrix is:\n");
	for(i=0;i<5;i++)
	{
		printf("\n");
		for(j=0;j<5;j++)
			printf("%c\t",keymat[i][j]);
	}

	printf("\n\nEnter the code:\n");
	gets(code);

	//Encryption
	i=0;
	while(code[i]!='\0')
	{
		//creating a valif pair
		xcorner[1]='g';
		while(code[i]!='\0')
		{
			if((code[i]>='a' && code[i]<='z') || (code[i]>='A' && code[i]<='Z'))
			{
				xcorner[0]=code[i];
				i++;
				break;
			}
			i++;
		}
		while(code[i]!='\0')
		{
			if((code[i]>='a' && code[i]<='z') || (code[i]>='A' && code[i]<='Z'))
			{
				xcorner[1]=code[i];
				i++;
				break;
			}
			i++;
		}

		//correcting double entries
		if(xcorner[0]==xcorner[1])
		{
			xcorner[1]='g';
			i--;
		}
		for(a=0;a<5;a++)
		{
			for(b=0;b<5;b++)
				if(keymat[a][b]==xcorner[0])
					break;
			if(b==5)
				b=0;
			if(keymat[a][b]==xcorner[0])
				break;


		}

		for(c=0;c<5;c++)
		{
			for(d=0;d<5;d++)
				if(keymat[c][d]==xcorner[1])
					break;
			if(d==5)
				d=0;
			if(keymat[c][d]==xcorner[1])
					break;
		}
		//printf("\n%c%c %d %d %d %d ",xcorner[0],xcorner[1],a,b,c,d);
		if(a==c)
		{
			b++;
			d++;
			if(b==5)
				b=0;
			if(d==5)
				d=0;
			ycorner[0]=keymat[a][b];
			ycorner[1]=keymat[c][d];
		}

		else if(b==d)
		{
			a++;
			c++;
			if(a==5)
				a=0;
			if(c==5)
				c=0;
			ycorner[0]=keymat[a][b];
			ycorner[1]=keymat[c][d];
		}
		else
		{
			ycorner[0]=keymat[a][d];
			ycorner[1]=keymat[c][b];
		}
		strcat(enc_code,ycorner);
	}
	printf("\nThe Encrypted code is:\n");
	puts(enc_code);

	//Decryption
	i=0;
	while(enc_code[i]!='\0')
	{
		while(enc_code[i]!='\0')
		{
			if((enc_code[i]>='a' && enc_code[i]<='z') || (enc_code[i]>='A' && enc_code[i]<='Z'))
			{
				xcorner[0]=enc_code[i];
				i++;
				break;
			}
			i++;
		}
		while(enc_code[i]!='\0')
		{
			if((enc_code[i]>='a' && enc_code[i]<='z') || (enc_code[i]>='A' && enc_code[i]<='Z'))
			{
				xcorner[1]=enc_code[i];
				i++;
				break;
			}
			i++;
		}

		for(a=0;a<5;a++)
		{
			for(b=0;b<5;b++)
				if(keymat[a][b]==xcorner[0])
					break;
			if(b==5)
				b=0;
			if(keymat[a][b]==xcorner[0])
				break;


		}

		for(c=0;c<5;c++)
		{
			for(d=0;d<5;d++)
				if(keymat[c][d]==xcorner[1])
					break;
			if(d==5)
				d=0;
			if(keymat[c][d]==xcorner[1])
					break;
		}
		//printf("\n%c%c %d %d %d %d ",xcorner[0],xcorner[1],a,b,c,d);
		//getch();
		if(a==c)
		{
			b--;
			d--;
			if(b==-1)
				b=4;
			if(d==-1)
				d=4;
			ycorner[0]=keymat[a][b];
			ycorner[1]=keymat[c][d];
		}
		else if(b==d)
		{
			a--;
			c--;
			if(a==-1)
				a=4;
			if(c==-1)
				c=4;
			ycorner[0]=keymat[a][b];
			ycorner[1]=keymat[c][d];
		}
		else
		{
			ycorner[0]=keymat[a][d];
			ycorner[1]=keymat[c][b];
		}
		if(flag==1 && ycorner[0]==temp)
		{
			flag=strlen(dec_code);
			dec_code[flag-2]=' ';
			dec_code[flag-1]='\0';
			flag=0;
		}
		if(ycorner[1]=='g')
		{
			temp=ycorner[0];
			flag=1;
		}
		//printf(" %c %c",ycorner[0],ycorner[1]);
		strcat(dec_code,ycorner);
	}

	//Hardcoded correction as the last pair is
	//decrypted twice due to space
	dec_code[strlen(dec_code)-4]='\0';

	printf("\nThe Decrypted Code is:\n");
	puts(dec_code);

}