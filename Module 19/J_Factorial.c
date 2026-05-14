#include <stdio.h>
#include <stdlib.h>

long long int factor(int n)
{
    if (n == 1)
    {
        return 1;
    }

    long long int mul = factor(n - 1);

    return n * mul;
}

int main()
{
    int n;
    scanf("%d", &n);
    long long int ans = factor(n);
    printf("%lld\n", ans);
    return 0;
}