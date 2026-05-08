#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

void max_min(int n, int a[])
{
    int min = INT_MAX, max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);

        if (a[i] < min)
        {
            min = a[i];
        }

        if (a[i] > max)
        {
            max = a[i];
        }
    }
    printf("%d %d", min, max);
}

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    max_min(n, a);
    return 0;
}