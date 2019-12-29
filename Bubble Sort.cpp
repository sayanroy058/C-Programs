#include<stdio.h>
int main()
{
	int i,j,n,a[50];
	printf("Enter the value of n: ");
	scanf("%d",&n);
	printf("Enter the numbers:\n");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
	for(i=1;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[j]!= a[n-1] && a[j]>a[j+1])
			{
				a[j]=a[j]+a[j+1];
				a[j+1]=a[j]-a[j+1];
				a[j]=a[j]-a[j+1];
			}
		}
	}
	printf("\nAfter Sorting The Numbers are:\n");
	for(i=0;i<n;i++)
	{
	printf("%d\n",a[i]);
	}
}
