#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    char s;
    int res;
    scanf("%d%c%d", &a, &s, &b);
    if (s == '+')
    {
        res = a + b;
    }
    else if (s == '*')
    {
        res = a * b;
    }
    else if (s == '-')
    {
        res = a - b;
    }
    else if (s == '/')
    {
        res = a / b;
    }

    printf("%d", res);

    return 0;
}