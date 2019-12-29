#include<stdio.h>
int main()
{
	int i,j,n,a[50],b,f,l,m;
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
/*	printf("\nAfter Sorting The Numbers are:\n");
	for(i=0;i<n;i++)
	{
	printf("%d\n",a[i]);
	}
*/	
	printf("Enter the number to find: ");
	scanf("%d",&b);
	f=0;
	l=n-1;
	m=(f+l)/2;
	while(f<l)
	{
		if(b<a[m])
		{
			l=m-1;
			m=(f+l)/2;
			
		}
		else if(b>a[m])
		{
			f=m+1;
			m=(f+l)/2;
		}
		else if(b==a[m])
		{
			printf("The Number is present in the %d position in the list",m+1);
			break;
		}
		else
		{
			printf("The Number is not present in the list");
			break;
		}
	}
}
