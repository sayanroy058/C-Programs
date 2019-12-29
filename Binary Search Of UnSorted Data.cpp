#include<stdio.h>
int main()
{
	int i,j,n,a[100],first,last,mid,search;
	printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter the numbers:\n");
    for(i=0;i<n;i++)
    {
    	scanf("%d",&a[i]);
	}
	for(i=1;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[j]!= a[n-1] && a[j]>a[j+1])
			{
				a[j]=a[j]+a[j+1];
				a[j+1]=a[j]-a[j+1];
				a[j]=a[j]-a[j+1];
			}
		}
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
			printf("%d is present at index %d", search, mid+1);
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
    	printf("%d is not present in the list", search);
	} 
}
