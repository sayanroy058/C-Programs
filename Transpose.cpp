#include<stdio.h>
int main()
{
	int i,j,r,c,a[100][100],b[100][100];
	printf("Enter the value of row and column:\n");
	scanf("%d%d",&r,&c);
	printf("Enter the elements of the matrix:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<r;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nThe Matrix is:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<r;j++)
		{
			printf("%d\t",a[i][j]);
			b[j][i]=a[i][j];
		}
		printf("\n");
	}
	printf("\nAfter Traspose The Matrix is:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<r;j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
}
