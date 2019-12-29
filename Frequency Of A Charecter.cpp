#include<stdio.h>
#include<string.h>
int main()
{
	int i,n,max=0;
	char a[10],b[200];
	printf("Enter the String: ");
	gets(a);
	n=strlen(a);
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
		if((i>=65 && i<=90) || (i>=97 && i<=122))
		{
			printf("\nThe Frequency of %c is %d",i,b[i]);
		}
	}
	
}
