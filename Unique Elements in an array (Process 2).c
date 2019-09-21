#include <stdio.h>
int main()
{
    int a[100],s,i,max=0;
    printf("Enter size of array: ");
    scanf("%d", &s);
    printf("Enter elements in array: ");
    for(i=0; i<s; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0; i<s; i++)
    {
        if(a[i]>max)
        {
        	max=a[i];
		}
    }
    
    int b[max];
    
    for(i=0;i<=max;i++)
    {
    	b[i]=0;
	}
    for(i=0;i<s;i++)
    {
    	b[a[i]]++;
	}
    printf("\nUnique elements in the array are: ");
    for(i=0; i<=max; i++)
    {
        if(b[i] == 1)
        {
            printf("%d ", i);
        }
    }
}
