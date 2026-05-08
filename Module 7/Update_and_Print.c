#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int x, v;
    scanf("%d %d", &x, &v);

    for (int i = 0; i < n; i++)
    {
        a[x] = v;
        // printf("%d ", a[i]);
    }

    for (int j = n-1; j >= 0; j--)
    {
        printf("%d ", a[j]);
    }

    return 0;
}