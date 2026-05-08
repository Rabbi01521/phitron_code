#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    long long c;
    char s;
    scanf("%d %c %d = %lld", &a, &s, &b, &c);
    // printf("%d %c %d = %lld", a, s, b, c);

    if (s == '+')
    {
        if (a + b == c)
        {
            printf("Yes\n");
        }
        else
        {
            c = a + b;
            printf("%lld\n", c);
        }
    }
    else if (s == '-')
    {
        if (a - b == c)
        {
            printf("Yes\n");
        }
        else
        {
            c = a - b;
            printf("%lld\n", c);
        }
    }
    else if (s == '*')
    {
        if (a * b == c)
        {
            printf("Yes\n");
        }
        else
        {
            c = a * b;
            printf("%lld\n", c);
        }
    }

    return 0;
}