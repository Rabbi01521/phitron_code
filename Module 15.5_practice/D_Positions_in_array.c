#include <stdio.h>
#include <stdlib.h>

void position_array(int n, int a[])
{
    int x = 10;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] <= x)
        {
            printf("A[%d] = %d\n", i, a[i]);
        }
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    position_array(n, a);
    return 0;
}