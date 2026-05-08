#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    int hash = 1;
    int gap = n - 1;

    for (int i = 0; i < n; i++)
    {
        for (int i = 0; i < gap; i++)
        {
            printf(" ");
        }
        if (i % 2 != 0)
        {
            for (int j = 0; j < hash; j++)
            {
                printf("-");
            }
        }
        else
        {
            for (int j = 0; j < hash; j++)
            {
                printf("#");
            }
        }

        printf("\n");
        hash += 2;
        gap--;
    }

    if (n % 2 == 0)
    {
        hash -= 4;
        gap = 1;
        // printf("%d", hash);

        for (int i = 0; i <= n; i++)
        {
            for (int i = 0; i < gap; i++)
            {
                printf(" ");
            }

            if (i % 2 != 0)
            {
                for (int j = 0; j < hash; j++)
                {
                    printf("-");
                }
            }
            else
            {
                for (int j = 0; j < hash; j++)
                {
                    printf("#");
                }
            }

            printf("\n");
            hash -= 2;
            gap++;
        }
    }
    else
    {
        hash -= 4;
        gap = 1;

        for (int i = 0; i <= n; i++)
        {
            for (int i = 0; i < gap; i++)
            {
                printf(" ");
            }

            if (i % 2 != 0)
            {
                for (int j = 0; j < hash; j++)
                {
                    printf("#");
                }
            }
            else
            {
                for (int j = 0; j < hash; j++)
                {
                    printf("-");
                }
            }

            printf("\n");
            hash -= 2;
            gap++;
        }
    }

    return 0;
}