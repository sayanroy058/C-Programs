#include <stdio.h>
int main()
{
  int a[100], n, c, d, position, t;
  printf("Enter number of elements: ");
  scanf("%d", &n);
  printf("Enter the numbers: \n");
  for (c = 0; c < n; c++)
  {
    scanf("%d", &a[c]);
  }
  for (c = 0; c < (n - 1); c++) 
  {
    position = c;
    
    for (d = c + 1; d < n; d++)
    {
      if (a[position] > a[d])
      {
        position = d;
	  }
    }
    if (position != c)
    {
      t = a[c];
      a[c] = a[position];
      a[position] = t;
    }
  }
  printf("Sorted list in ascending order:\n");
  for (c = 0; c < n; c++)
  {
    printf("%d\n", a[c]);
  }
}
