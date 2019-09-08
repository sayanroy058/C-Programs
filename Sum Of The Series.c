#include<stdio.h>
void series(int n);
int fact(int i);
int main()
{
	int n;
	printf("Enter the value of n:");
	scanf("%d",&n);
	series(n);
}
void series(int n)
{
	int i,s=0,p;
	for(i=1;i<=n;i++)
	{
		p=fact(i);
		s+=p/i;
	}
	printf("The Sum Of The Series Is: %d",s);
}
int fact(int i)
{
	int j,c=1;
	for(j=1;j<=i;j++)
	{	
			c*=j;
	}
	return c;
}

