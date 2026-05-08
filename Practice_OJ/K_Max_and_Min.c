#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b && a >= c)
    {
        if (b <= a && b <= c)
        {
            printf("%d ", b);
            printf("%d", a);
        }
        else
        {
            printf("%d ", c);
            printf("%d", a);
        }
    }
    else if (b >= a && b >= c)
    {
        if (a <= b && a <= c)
        {
            printf("%d ", a);
            printf("%d", b); 
        }
        else
        {
            printf("%d ", c);
            printf("%d", b);
        }
    }
    else if (c >= a && c >= b)
    {
        if (b <= a && b <= c)
        {
            printf("%d ", b);
            printf("%d", c);
        }
        else
        {
            printf("%d ", a);
            printf("%d", c);
        }
    }
    return 0;
}