#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int num;
    scanf("%d", &num);

    int n = sqrt(num);

    int count = 1;
    for (int i = 1; i <= n; i++)
    {
        if (num % i == 0)
        {
            count++;
        }
    }

    if (count > 2)
    {
        printf("NO");
    }
    else
    {
        printf("YES");
    }

    return 0;
}