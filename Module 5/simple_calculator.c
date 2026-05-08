#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y;

    scanf("%d %d", &x, &y);

    long long int mul = (long long)x * y;

    printf("%d + %d = %d\n", x, y, x + y);
    printf("%d * %d = %lld\n", x, y, mul);
    printf("%d - %d = %d", x, y, x - y);

    return 0;
}