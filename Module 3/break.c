#include <stdio.h>

int main()
{

    for (int i = 1; i <= 10; i++)
    {
        // printf("%d\n", i); // 1 2 3 4 5
        if (i == 5)
        {
            break; // break always write inside loop
        }
        printf("%d\n", i); // 1 2 3 4
    }
    return 0;
}