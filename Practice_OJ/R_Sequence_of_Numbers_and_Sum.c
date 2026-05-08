#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m;
    int sum = 0;
    while (1)
    {
        scanf("%d %d", &n, &m);

        if (m <= 0 || n <= 0)
        {
            break;
        }
        else if (m < n)
        {
            for (int i = m; i <= n; i++)
            {
                sum += i;
                printf("%d ", i);
            }
            printf("sum =%d\n", sum);
            sum = 0;
        }
        else
        {
            for (int i = n; i <= m; i++)
            {
                sum += i;
                printf("%d ", i);
            }
            printf("sum =%d\n", sum);
            sum = 0;
        }
    }

    return 0;
}