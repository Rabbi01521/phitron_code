#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    long long int x;

    long long int first = ((long long)a * (long long)b);
    long long int second = ((long long)c * (long long)d);

    x = first - second;

    printf("Difference = %lld\n", x);

    return 0;
}