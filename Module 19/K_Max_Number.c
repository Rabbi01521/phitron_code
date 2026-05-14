#include <stdio.h>
#include <stdlib.h>

long long int max_number(long long int a[], int n)
{
    if (n == 1)
    {
        return a[0];
    }

    long long int num = max_number(a, n - 1);
    
    if (a[n - 1] > num)
    {
        return a[n - 1];
    }
    else
    {
        return num;
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    long long int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &a[i]);
    }

    int max = max_number(a, n);
    printf("%d\n", max);
    return 0;
}