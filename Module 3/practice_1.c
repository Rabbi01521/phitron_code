#include <stdio.h>
int main()
{
    // for (int i = 8; i <= 200; i += 8)
    // {
    //     printf("%d\t", i);
    // }

    // for (int i = 100; i >= 1; i--)
    // {
    //     if (i % 2 == 1)
    //     {
    //         printf("%d\n", i);
    //     }
    // }

    // int i = 8;
    // while (i <= 200)
    // {
    //     printf("%d\t", i);
    //     i += 8;
    // }

    int i = 100;

    while (i >= 200)
    {
        if (i % 2 != 0)
        {
            printf("%d\n", i);
        }
        i++;
    }

    return 0;
}