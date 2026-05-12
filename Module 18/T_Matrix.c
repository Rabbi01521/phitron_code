#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int main()
{
    int r;
    scanf("%d", &r);
    int a[r][r];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < r; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // bool is_diagonal = true;

    int sum_p = 0;
    int sum_s = 0;

    if (r == r)
    {
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < r; j++)
            {
                if (i == j)
                {
                    // we are now at diagoanl
                    sum_p += a[i][j];
                    // printf("%d ", a[i][j]);
                }

                if (i + j == r - 1)
                {
                    sum_s += a[i][j];
                    // printf("%d ", a[i][j]);
                }
            }
        }
        // printf("%d", sum_p);
    }

    printf("%d\n", abs(sum_p - sum_s));

    return 0;
}