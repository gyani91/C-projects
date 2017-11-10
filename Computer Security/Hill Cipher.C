#include<stdio.h>
#include<conio.h>

int parchar(char);
char parint(int);
void mul(int a[3][3],int b[3],int c[3]);
void inverse(int a[3][3], int c[3][3]);
void main()
{
	char *str ="ACT";
	char *key ="GYBNQKURP";
	int i,j,k=0;
	int key_mat[3][3],key_inv[3][3],dec_msg[3],enc_msg[3];
	clrscr();

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			key_mat[i][j]=parchar(key[k++]);
		}
	}

	k=0;
	for(i=0;i<3;i++)
		dec_msg[i]=parchar(str[k++]);
	mul(key_mat,dec_msg,enc_msg);

	printf("\n The Encrypted Text is : ");
	for(i=0;i<3;i++)
		printf("%c",parint(enc_msg[i]));

	inverse(key_mat,key_inv);
}

int parchar(char c)
{
	return (int) c-'A';
}

char parint(int a)
{
	return (char)((a%26)+'A');
}

void mul(int a[3][3], int b[3], int c[3])
{
	int i,j,s,x;
	for(i=0;i<3;i++)
	{
		s=0;
		for(j=0;j<3;j++)
		{
		       x=a[i][j]*b[j];
		       s+=x;
		}
		c[i]=s;
	}
}

void inverse(int a[3][3], int c[3][3])
{
	int i,j,DET;

	DET = (a[0][0]*(a[1][1]*a[2][2] - a[1][2]*a[2][1]))
	     -(a[0][1]*(a[2][2]*a[1][0] - a[1][2]*a[2][0]))
	     +(a[0][2]*(a[1][0]*a[2][1] - a[1][1]*a[2][0]));

	printf("\n%d\n",DET);

	c[0][0] = (a[1][1]*a[2][2] - a[1][2]*a[2][1]);
	c[1][1] = (a[0][0]*a[2][2] - a[0][2]*a[2][0]);
	c[2][2] = (a[0][0]*a[1][1] - a[0][1]*a[1][0]);

	c[1][0] = -(a[2][2]*a[1][0] - a[1][2]*a[2][0]);
	c[2][0] =  (a[1][0]*a[2][1] - a[1][1]*a[2][0]);

	c[0][1] = -(a[0][1]*a[2][2] - a[0][2]*a[2][1]);
	c[0][2] = (a[0][1]*a[1][2] - a[0][2]*a[1][1]);

	c[1][2] = -(a[0][0]*a[1][2] - a[0][2]*a[1][0]);
	c[2][1] = -(a[0][0]*a[2][1] - a[0][1]*a[2][0]);

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("(%d ",c[i][j]);
			//c[i][j]%=DET;
			c[i][j]%=26;
			printf("%d)\t",c[i][j]);
		}
		printf("\n");
	}

}