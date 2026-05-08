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

    int sumNegative = 0;
    int sumPositive = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < 0)
        {
            sumNegative += a[i];
        }
        else
        {
            sumPositive += a[i];
        }
    }

    printf("%d %d", sumPositive, sumNegative);
    return 0;
}