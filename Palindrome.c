#include<stdio.h>
void palindrome(int n);
int main()
{
	int n,r,p,s=0;
	printf("Enter the number:");
	scanf("%d", &n);
	palindrome(n);
}
void palindrome(int n)
{
	int r,p,s=0;
	p=n;
	while(n!=0)
	{
		r=n%10;
		s=s*10+r;
		n/=10;
	}
	if(s==p)
	{
		printf("The Number is a Palindrome Number");
	}  
	else
	{
		printf("The Number is not a Palindrome Number");
	} 
}
