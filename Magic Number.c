#include <stdio.h>
int main() 
{
      int s=0,a,n,p,r=0;
      printf("Enter a Number:");
      scanf("%d", &n);
      a=n;
      while(n > 0) 
      {
            s = s + (n % 10);
            n = n / 10;
  	  }
  	  p=s;
	 if(s < 10) 
      {
            if((s * s) == a) 
            {
                  printf("\nThe Number is a Magic Integer");
            } 
            else 
            {
                  printf("\nThe Number is Not a Magic Integer");
            }
      }
      else
    {
        while( s> 0) 
      	{
            r = (r * 10) + (s % 10);
            s = s / 10;
      	}
        if((r * p) == a) 
        {
            printf("\nThe Number is a Magic Number");
        } 
        else 
        {
            printf("\nThe Number is Not a Magic Number");
        }
    }
}
