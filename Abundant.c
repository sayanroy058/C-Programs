#include<stdio.h>
void abundant(int n);
int main()
{
	int n;
	printf("Enter the number:");
	scanf("%d",&n);
	abundant(n);
}
void abundant(int n)
{
	int i,c=0;
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			c+=i;
		}
	}
	if(c>n)
	{
		printf("\nThe number is a Abundant Number");
	}
	else
	{
		printf("\nThe number is not a Abundant Number");	
	}
}
