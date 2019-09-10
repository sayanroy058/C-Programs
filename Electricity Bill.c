#include<stdio.h>
#include<string.h>
int main()
{
	int i,n;
	float s=0.0;
	char a[30],c[30];
	printf("Enter the Customer Id: ");
	gets(c);
	printf("Enter the Name: ");
	gets(a);
	printf("Enter the amount of unit consumed: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
			
		if(i<=199)
		{
			s+=1.2;
		}
		if(n>=200 && n<400)
		{
			s+=1.5;
		}
		if(n>=400 && n<600)
		{
			s+=1.8;
		}
		if(n>=600)
		{
			s+=2;
		}	
	}
	if(s>400)
	{
		s=s+(s*14/100);
	}
	printf("\n\nThe Name Of The Customer: ");
	puts(a);
	printf("The Customer Id: ");
	puts(c);
	printf("Total Amount: %.2f",s);
	if(s<100)
	{
		printf("Please Don't Pay This Bill This Month");
	}
}
