#include<stdio.h>
int main()
{
	int n,p,i,s=1;
	printf("Enter the number:");
	scanf("%d",&n);
	printf("Enter the power:");
	scanf("%d",&p);
	for(i=1;i<=p;i++)
	{
		s*=n;
	}
	printf("Result : %d",s);
}
