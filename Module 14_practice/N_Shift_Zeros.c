#include <stdio.h>
#include <stdlib.h>

void shiftZeros(int n)
{

    int a[n + 1];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int pos = 0;
    int fre[10001] = {0};
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] != 0)
        {
            fre[pos] = a[i];
            pos++;
        }
        else
        {
            count++;
        }
    }

    for (int i = pos; i < n; i++)
    {
        fre[i] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", fre[i]);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    shiftZeros(n);

    return 0;
}