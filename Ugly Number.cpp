#include<stdio.h>
int main()
{
	int i,j,c;
	printf("The Ugly Numbers Are:\n");
	for(i=1;i<=100;i++)
	{	
		c=0;
		for(j=7;j<=97;j++)
		{
			if(j%2!=0 && j%3!=0 && j%5!=0)
			{
				if(i%j==0)
				{
					c=1;
				}
			}
		}
		if(c==0)
		{
			printf("%d\n",i);
		}
	}
}

