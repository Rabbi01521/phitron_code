#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int a[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    int x;
    scanf("%d", &x);

    // bool is_exist = true;
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] == x)
            {
                // printf("%d ", a[i][j]);
                // is_exist = true;
                count++;
            }
        }
    }

    if (count > 0)
    {
        printf("will not take number\n");
    }
    else
    {
        printf("will take number\n");
    }

    // bool is_diagonal = true;

    return 0;
}