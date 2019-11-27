#include<stdio.h>
void swap(int *a,int *b,int *c);
int main()
{
	int i,j,k;
	printf("Enter 3 numbers:" );
	scanf("%d%d%d",&i,&j,&k);
	swap(&i,&j,&k);
}
void swap(int *a,int *b,int *c)
{
	*a=*a+*b+*c;
	*b=*a-*b-*c;
	*c=*a-*b-*c;
	*a=*a-*b-*c;
	printf("A= %d\nB= %d\nC= %d",*a,*b,*c);
}
