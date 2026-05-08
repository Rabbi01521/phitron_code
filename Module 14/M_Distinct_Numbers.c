#include <stdio.h>
#include <stdlib.h>

void distinct_numbers()
{
    int n;
    scanf("%d", &n);
    int a[n + 1];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int count = 0;

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         if (a[i] > a[j])
    //         {
    //             int temp = a[i];
    //             a[i] = a[j];
    //             a[j] = temp;
    //         }
    //     }
    // }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                for (int k = j; k < n - 1; k++)
                {
                    a[k] = a[k + 1];
                }
                n--; /* Reduce array size */
                j--;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        count++;
    }

    printf("%d\n", count);
}

int main()
{
    distinct_numbers();

    return 0;
}