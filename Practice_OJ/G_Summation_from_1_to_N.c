#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long n;
    scanf("%lld", &n);

    long long ans = (n * (n + 1)) / 2;
    printf("%lld", ans);
    return 0;
}