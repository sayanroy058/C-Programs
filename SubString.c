#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	int i,j,d=0;
	char a[100],b[100],c[100];
	printf("Enter the 1st String:");
	gets(a);
	printf("Enter the 2nd String:");
	gets(b);
	for(i=0;i<strlen(a);i++)
	{
		for(j=i;j<strlen(b)+i;j++)
		{
			c[d]=0;
			c[d]=a[j];
			d++;
		}
		if(strcmp(b,c)==0)
		{
			printf("2nd String is present The position of the number is :%d",i);
			exit(1);
		}
		d=0;
	}
	printf("2nd String is not present as a Substring in the 1st String ");
}
