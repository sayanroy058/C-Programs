#include<stdio.h>
int main()
{
	int i, j, r, c, a[10][10], b[10][10], s = 1;
	printf("Enter the Number of rows and columns:\n");
	scanf("%d %d", &r, &c);
	printf("Enter the Elements:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{	
    		scanf("%d",&a[i][j]);
    	}
    }
	for(i=0;i<r;i++)
  	{
	  for(j=0;j<c;j++)
    	{
			b[j][i]=a[i][j];
    	}
    }
	for(i=0;i<r;i++)
  	{
	  for(j=0;j<c;j++)
    	{
    		if(a[i][j] != b[i][j])
    		{
    			s++;  
				break;  		
			}
		}
	}	
	if(s==1)
	{
		printf("\nThe Matrix is a Symmetric Matrix");
	}
	else
	{
		printf("\nThe Matrix is Not a Symmetric Matrix");
	}
}
