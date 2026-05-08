#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int tc = 0; tc < t; tc++)
    {
        int n;
        scanf("%d", &n);
        int a[n];

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }

        int cal;
        int min = INT_MAX;

        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {

                cal = a[i] + a[j] + j - i;
                if (cal < min)
                {
                    min = cal;
                }
            }
        }
        printf("%d\n", min);
    }

    return 0;
}