
// 6. Pairs Whose Sum Equals Target
#include <stdio.h>

int main()
{
    int n, target;
    int i, j;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter elements: ");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter target: ");
    scanf("%d", &target);

    printf("Pairs are:\n");

    for(i = 0; i < n - 1; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(a[i] + a[j] == target)
            {
                printf("(%d, %d)\n", a[i], a[j]);
            }
        }
    }

    return 0;
}