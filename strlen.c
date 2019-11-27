#include<stdio.h>
int main()
{
	int i;	
	char s[50];
	printf("Enter The string:" );
	scanf("%s",s);
	for(i=0;s[i]!='\0';i++);
printf("\nThe Length of the string is: %d", i);
}
