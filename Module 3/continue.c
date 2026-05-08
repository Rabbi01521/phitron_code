#include <stdio.h>

int main()
{

    // continue --> skip that step or conditon is true than its skip under the condition and loop

    for (int i = 1; i <= 10; i++)
    {
        if (i % 2 == 0)
        {
            continue;
        }
        printf("%d\n", i); // 1 3 5 7 9
    }

    return 0;
}