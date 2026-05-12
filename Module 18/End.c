#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n - 1; i++)
    {
        if (i % 2 != 0)
        {
            printf("%d ", a[i]);
        }
        else
        {
            printf("%d ", a[i]);
        }
    }

    // printf("\n");

    // for (int j = n - 1; j >= 0; j--)
    // {
    //     printf("%d ", a[j]);
    // }
    return 0;
}