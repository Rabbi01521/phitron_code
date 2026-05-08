#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

void max_min(int n)
{
    int x;
    int max = INT_MIN, min = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x);

        if (x < min)
            min = x;

        if (x > max)
            max = x;
    }

    printf("%d %d", min, max);
}

int main()
{
    int n;
    scanf("%d", &n);
    max_min(n);

    return 0;
}