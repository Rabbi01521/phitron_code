#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    // for find out the even number
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            printf("Even: %d \n", a[i]);
        }
        // printf("%d ", a[i]);
    }

    // for find out how many odd number
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 != 0)
        {
            count++;
            // printf("%d ", a[i]);
        }
    }
    printf("ODD Counts: %d \n", count);

    // maximum value of that array
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            // printf("%d ", a[i]);
            max = a[i];
        }
        // printf("%d ", a[i]);
    }
    printf("Max: %d \n", max);

    // minimum value of that array
    int min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < min)
        {
            // printf("%d ", a[i]);
            min = a[i];
        }
        // printf("%d ", a[i]);
    }
    printf("Min: %d", min);

    return 0;
}