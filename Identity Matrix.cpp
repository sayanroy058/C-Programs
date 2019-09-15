#include<stdio.h>
int main()
{
	int i,j,r,c,p=0,a[100][100];
    printf("Enter the value of row and column value:\n");
    scanf("%d%d",&r,&c);
    printf("Enter the elements of the matrix:\n");
    for (i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {	
		    scanf("%d", &a[i][j]);
        }
    }
	printf("\nThe Matrix is:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(a[i][i]!=1 || (i!=j && a[i][j]!=0))
			{
				p=1;
				break;
			}
		}
	}
	if(p==0)
	{
		printf("\nThe Matrix is an Identity Matrix");
	}
	else
	{
		printf("\nThe Matrix is not an Identity Matrix");
	}
}
