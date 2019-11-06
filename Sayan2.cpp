#include<stdio.h>
int power(int n,int p);
int pow=1;
int main()
{
	int n,p;
	int pow=n;
	printf("Enter a number:");
	scanf("%d",&n);
	printf("Enter the power of it:");
	scanf("%d",&p);
	printf("The power of the no. is: %d",power(n,p));
}
int power(int n,int p)
{
	if(p==0)
	{
		return 1;
	}
	else
	{
		pow*=n;
		power(n,p-1);
		return pow;
	}
}
