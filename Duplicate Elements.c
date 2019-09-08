#include<stdio.h>
int main()
{
	int i,j,n,c=0,a[100];
	printf("Enter the value of n:");
	scanf("%d",&n);
	printf("Enter the Elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				c++;
			}
		}
	}
	printf("\nNo. of duplicate elements: %d",c);
}
