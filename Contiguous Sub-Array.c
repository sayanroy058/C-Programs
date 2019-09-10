#include<stdio.h>
#include<limits.h>
int main()
{
	int a[100],s[100],b=0,p=0,q=0,n,max,i,j,k;
	max=INT_MIN;
	printf("Enter the value of n:");
	scanf("%d",&n);
	printf("Enter the elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			for(k=i;k<=j;k++)
			{
				p+=a[k];
			}	
			s[b]=0;
			s[b]=p;
			b++;
			p=0;
		}
	}
	for(i=0;i<b;i++)
	{
		if(s[i]>max)
		{
			max=s[i];
		}
	}
	printf("The sum is: %d",max);
}
