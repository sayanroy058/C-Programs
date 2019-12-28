#include<stdio.h>
int digit(int n);
int count=0;
int main()
{
	int n;
	printf("Enter a number:");
	scanf("%d",&n);
	printf("The digits of the no. is: %d",digit(n));
}
int digit(int n)
{
	if(n==0)
	{
		return 0;
	}
	else
	{
		digit(n/10);
		count++;
		return count;
	}
}
