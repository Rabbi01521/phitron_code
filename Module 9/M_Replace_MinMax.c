#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int max = INT_MIN;
    int min = INT_MAX;
    int indexmin;
    int indexmax;

    for (int i = 0; i < n; i++)
    {

        if (a[i] < min)
        {
            min = a[i];
            indexmin = i;
        }

        if (a[i] > max)
        {
            max = a[i];
            indexmax = i;
        }
    }

    a[indexmax] = min;
    a[indexmin] = max;

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}