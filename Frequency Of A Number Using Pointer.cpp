#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *a,*b;
	int i,n,max=0;
	printf("Enter The value of n: ");
	scanf("%d",&n);
	a=(int *)malloc(n*sizeof(int));
	printf("Enter the Numbers:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",(a+i));
	}
	for(i=0;i<n;i++)
	{
		if(*(a+i)>max)
		{
			max=*(a+i);
		}
	}
	b=(int *)malloc(max*sizeof(int));
	for(i=0;i<=max;i++)
	{
		*(b+i)=0;
	}
	for(i=0;i<n;i++)
	{
		b[*(a+i)]++;
	}
	for(i=0;i<=max;i++)
	{
		printf("\nThe Frequency of %d is %u",i,*(b+i));
	}
}
