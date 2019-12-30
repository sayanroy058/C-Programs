#include<stdio.h>
#include<string.h>
int main()
{
	int i,sum=0;
	char a[50];
	printf("Enter the number: ");
	gets(a);
	for(i=0;i<strlen(a);i++)
	{
		if(a[i]!='.')
		{
			sum+=a[i]-48;
		}
	}
	printf("The Sum of the digits of the number is: %d",sum);
}
