#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int dif;
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        int x, y;
        scanf("%d %d", &x, &y);
        if (x > y)
        {
            for (int j = y + 1; j < x; j++)
            {
                if (j % 2 != 0)
                {
                    sum += j;
                }
            }
            printf("%d\n", sum);
            sum = 0;
        }

        else
        {
            for (int j = x + 1; j < y; j++)
            {
                if (j % 2 != 0)
                {
                    sum += j;
                }
            }
            printf("%d\n", sum);
            sum = 0;
        }
    }
    return 0;
}