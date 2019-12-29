#include<stdio.h>
int main()
{
	int a[100],b[100],i,n,max=0;
	printf("Enter The value of n: ");
	scanf("%d",&n);
	printf("Enter the Numbers:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	for(i=0;i<=max;i++)
	{
		b[i]=0;
	}
	for(i=0;i<n;i++)
	{
		b[a[i]]++;
	}
	for(i=0;i<=max;i++)
	{
		printf("\nThe Frequency of %d is %d",i,b[i]);
	}
	
}
