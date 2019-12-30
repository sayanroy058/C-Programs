#include<stdio.h>
#include<string.h>
int main()
{
	int i,count=0;
	char a[50];
	printf("Enter the number: ");
	gets(a);
	for(i=0;i<strlen(a);i++)
	{
		if(a[i]!='.')
		{
			count++;
		}
	}
	printf("The number of digits are : %d",count);
}
