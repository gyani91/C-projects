/*
Arranging Cup-cakes

On the day of the party, the Chef was over-seeing all the food arrangements as well, ensuring that every item was in its designated position. The host was satisfied with everything except the cupcakes. He noticed they were arranged neatly in the shape of a rectangle. He asks the Chef to make it as square-like as possible.

The Chef is in no mood to waste his cupcakes by transforming it into a perfect square arrangement. Instead, to fool the host, he asks you to arrange the N cupcakes as a rectangle so that the difference between the length and the width is minimized.
Input

The first line of the input file contains an integer T, the number of test cases. Each of the following T lines contains a single integer N denoting the number of cupcakes.
Output

Output T lines, each indicating the minimum possible difference between the length and the width in a rectangular arrangement of the cupcakes.
Constraints

Input:
4

20
13
8
4

Output:
1
12
2
0

Explanation

Case 1: 20 cupcakes can be arranged in 6 possible ways - 1 x 20, 2 x 10, 4 x 5, 5 x 4, 10 x 2 and 20 x 1. The corresponding differences between the length and the width are 19, 8, 1, 1, 8 and 19 respectively. Hence, 1 is the answer.

Case 4: 4 cupcakes can be arranged as a 2 x 2 square. Difference between the length and the width is 0. You can't do anything better than 0.
*/

main()
{
		int k,min,t,q,s[100],i,j,b;
		printf("Enter Number of tests");
		scanf("%d",&q);
		for(k=0;k<q;k++)
		{
		printf("Enter the Total Number of Cakes\n");
		scanf("%d",&t);
		min=j=t;
		while(j)
		{
				if(t%j==0)
				{
						b=t/j;
						i=j-b;
						if(i>=0)
							if(i<min)
								min=i;
			    }
				j--;
	    }
		s[k]=min;
		}
		for(k=0;k<q;k++)
		 	printf("%d\n",s[k]);
		getch();
}			
