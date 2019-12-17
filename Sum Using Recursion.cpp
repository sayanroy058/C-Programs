#include<stdio.h>
int sum(int n);
int main()
{
	int n;
	printf("Enter the value of n:");
	scanf("%d",&n);
	printf("Sum= %d",sum(n));
}
int sum(int n)
{
	if(n!=0)
	{
		return (n+ sum(n-1));
	}
	else
	{
		return n;
	}
}
