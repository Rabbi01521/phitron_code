#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, x;
    long long int fact = 1;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &x);

        if (x == 0)
        {
            printf("%lld\n", fact);
        }
        else
        {
            for (int j = x; j >= 1; j--)
            {
                fact *= j;
            }
            printf("%lld\n", fact);
        }
        fact = 1;
    }

    return 0;
}