#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    long long fibo[n + 1];

    fibo[1] = 0;
    fibo[2] = 1;

    for (int i = 3; i <= n; i++)
    {
        fibo[i] = fibo[i - 1] + fibo[i - 2];
    }

    printf("%lld", fibo[n]);

    return 0;
}