#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long m, n;
    scanf("%lld %lld", &m, &n);

    long long last_m = m % 10;
    long long last_n = n % 10;

    long long sum = last_m + last_n;
    printf("%lld", sum);

    return 0;
}