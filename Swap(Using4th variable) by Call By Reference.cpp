#include<stdio.h>
void swap(int *a,int *b,int *c)
{
	int temp;
	temp=*b;
	*b=*a;
	*a=*c;
	*c=temp;
	printf("\nAfter Swap the numbers are:\nA=%d\nB=%d\nC=%d",*a,*b,*c);
}
int main()
{
	int a,b,c;
	printf("Enter 3 numbers(A,B,C):\n");
	scanf("%d%d%d",&a,&b,&c);
	printf("\nBefore Swap the numbers are:\nA=%d\nB=%d\nC=%d",a,b,c);
	swap(&a,&b,&c);
}
