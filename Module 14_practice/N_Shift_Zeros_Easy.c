#include <stdio.h>
#include <stdlib.h>

void shiftZeros(int n, int a[])
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] != 0)
        {
            printf("%d ", a[i]); // only non zero number print
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            printf("%d ", a[i]); // only zero print
        }
    }
}

int main()
{
    int n;

    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    shiftZeros(n, a);

    return 0;
}