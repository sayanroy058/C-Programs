#include<stdio.h>
#include<string.h>
void uppercase(char u[]);
void lowercase(char l[]);
int main()
{
	char u[50],l[50];
	printf("Entr the string to change into upper case: ");
	gets(u);
	printf("Entr the string to change into lower case: ");
	gets(l);
	uppercase(u);
	lowercase(l);
}
void uppercase(char u[])
{
	int i,j;
	char a[50];
	for(i=0;i<strlen(u);i++)
	{
		a[i]=0;
		a[i]=(u[i]-32);
	}
	printf("Upper Case: ");
	for(j=0;j<i;j++)
	{
		printf("%c",a[j]);
	}
}
void lowercase(char l[])
{
	int i,j;
	char a[50];
	for(i=0;i<strlen(l);i++)
	{
		a[i]=0;
		a[i]=(l[i]+32);
	}
	printf("\nLower Case: ");
	for(j=0;j<i;j++)
	{
		printf("%c",a[j]);
	}
}
