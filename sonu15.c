#include<stdio.h>
void main()
{
	int i,j,a[100],b[100],c=0,n;
	printf("Enter the value of n:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		b[i]=a[i];
	}
	for(i=0;i<n;i++)
	{	
		
		for(j=i+1;j<n;j++)
		{	
			if(b[j]==a[i])
			{
				c++;
			}
				
		}
	}
	printf("\nThe no of duplicate elements is: %d",c);
}

	
