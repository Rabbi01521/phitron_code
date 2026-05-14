#include <stdio.h>
#include <stdlib.h>

long long int summation(int a[], int n)
{
    if (n == 0)
    {
        return 0;
    }

    long long int sum = summation(a, n - 1);
    return sum += a[n-1];
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

    long long int sum = summation(a, n);
    printf("%lld\n", sum);

    return 0;
}