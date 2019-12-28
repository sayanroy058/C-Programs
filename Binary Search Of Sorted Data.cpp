#include<stdio.h>
int main()
{
	int i,n,a[100],first,last,mid,search;
	printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter the numbers:\n");
    for(i=0;i<n;i++)
    {
    	scanf("%d",&a[i]);
	}
	printf("\nEnter the number to find: ");
    scanf("%d", &search);
    first = 0;
    last = n - 1;
    mid = (first+last)/2;
    while (first <= last) 
	{
		if (a[mid] < search)
		{
			first = mid + 1;  
		}  
        else if (a[mid] == search)
		{
			printf("%d is present at index %d.\n", search, mid+1);
			break;
        }
        else
        {
        	last = mid - 1;
		}
        mid = (first + last)/2;
   }
    if (first > last)
    {
    	printf("Not found! %d is not present in the list.\n", search);
	} 
}
