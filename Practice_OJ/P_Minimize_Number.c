#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int n;
    scanf("%d", &n);
    long long a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &a[i]);
    }

    int count = 0;
    bool operation = true;
    while (true)
    {
        for (int i = 0; i < n; i++)
        {
            if (a[i] % 2 == 0)
            {
                a[i] /= 2;
            }
            else
            {
                operation = false;
                break;
            }
        }
        if (operation == true)
        {
            count++;
        }
        else
        {
            break;
        }
    }

    printf("%d", count);

    return 0;
}