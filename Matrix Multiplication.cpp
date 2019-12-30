#include <stdio.h>
 
int main()
{
  int i,j, k,r1,r2,c1,c2, sum = 0,a[10][10], b[10][10], p[10][10];
 
  printf("Enter the row and column of the 1st matrics:");
  scanf("%d%d", &r1, &c1);
  
  printf("Enter the row and column of the 2nd matrics:");
  scanf("%d%d", &r2, &c2);
  printf("Enter elements of first matrix\n");
 
  for (i = 0; i< r1; i++)
  {
  	 for (j = 0; j < c1; j++)
  	 {
  	 	scanf("%d", &a[i][j]);
	}
  }
    printf("Enter elements of 2nd matrix");
    for (i = 0; i < r2; i++)
    {
    	 for (j = 0; j < c2; j++)
    	 {
    	 	scanf("%d", &b[i][j]);
		 }
	}
    for (i = 0; i < r1; i++) 
	{
      for (j = 0; j < c2; j++)
	   {
        for (k = 0; k < r2; k++)
		 {
          sum = sum + a[i][k]*b[k][j];
        }
 
        p[i][j] = sum;
        sum = 0;
      }
    }
 
    printf("Product of the matrices:\n");
 
    for (i = 0; i < r1; i++) 
	{
      for (j = 0; j < c2; j++)
      {
      	printf("%d\t", p[i][j]);
	  }
        
 
      printf("\n");
    }
  }



