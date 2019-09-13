#include <stdio.h>

int main()
{
    int a[100], f[100], s, i, j, c;
    printf("Enter size of array: ");
    scanf("%d", &s);
    printf("Enter elements in array: ");
    for(i=0; i<s; i++)
    {
        scanf("%d", &a[i]);
        f[i] = -1;
    }
 
    for(i=0; i<s; i++)
    {
        c = 1;
        for(j=i+1; j<s; j++)
        {
            if(a[i] == a[j])
            {
                c++;
                f[j] = 0;
            }
        }
 
        if(f[i] != 0)
        {
            f[i] = c;
        }
    }
 
    printf("\nUnique elements in the array are: ");
    for(i=0; i<s; i++)
    {
        if(f[i] == 1)
        {
            printf("%d ", a[i]);
        }
    }
}
