#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long a, b;
    scanf("%lld %lld", &a, &b);
    long long mul = a * b;
    printf("%lld + %lld = %lld\n", a, b, a + b);
    printf("%lld * %lld = %lld\n", a, b, mul);
    printf("%lld - %lld = %lld\n", a, b, a - b);
    return 0;
}