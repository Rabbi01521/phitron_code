#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int a, b, c, d;

    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);

    // printf("%d %d %d %lld\n", a, b, c, d);

    // long long int first = a + b - c;
    // long long int second = a - b + c;
    // long long int third = a * b + c;
    // long long int fourth = a + b * c;
    // long long int fifth = a - b * c;
    // long long int sixth = a * b - c;

    // printf("%lld %lld %lld %lld %lld %lld", first, second, third, fourth, fifth, sixth);

    if ((a + b - c == d) ||
        (a - b + c == d) ||
        (a * b + c == d) ||
        (a + b * c == d) ||
        (a - b * c == d) ||
        (a * b - c == d))
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}