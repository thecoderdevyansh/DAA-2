// Question: Find the second-largest distinct element without sorting.
#include <stdio.h>
#include <limits.h>

int main()
{
    int n, i;
    int largest = INT_MIN;
    int second = INT_MIN;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < n; i++)
    {
        if(a[i] > largest)
        {
            second = largest;
            largest = a[i];
        }
        else if(a[i] > second && a[i] != largest)
        {
            second = a[i];
        }
    }

    if(second == INT_MIN)
        printf("Second largest distinct element does not exist");
    else
        printf("Second largest = %d", second);

    return 0;
}