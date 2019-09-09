#include<stdio.h>
#include<math.h>
void roots(int a, int b, int c);
int main()
{
	int a,b,c,d;
	float  r1,r2;
	printf("Enter the value of a,b,c:");
	scanf("%d%d%d",&a,&b,&c);
	printf("The Equation is:\n");
	printf("%dx^2 + %dx + %d=0\n",a,b,c);
	roots(a,b,c);
}
void roots(int a, int b, int c)
{
	int d;
	float  r1,r2;
	d=b*b-4*a*c;
	if(d>=0)
	{
		r1=(-b+sqrt(d))/2*a;
		r2=(-b-sqrt(d))/2*a;
		printf("\nThe Roots of the equation are:\n%.1f\n%.1f",r1,r2);
	}
	else
	{
		printf("\nNo real roots exist for this quadratic equation");
	}
}
