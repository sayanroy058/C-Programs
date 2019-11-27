#include<stdio.h>
int main()
{
	int i;	
	char s[50],p[50];
	printf("Enter The string:" );
	scanf("%s",s);
	for(i=0;s[i]!='\0';i++)
	{
		p[i]=s[i];
	}
	printf("\nAfter Copy the string is: ");	
	for(i=0;p[i]!='\0';i++)
	{
		printf("%c", p[i]);	
	}
	
	
}
