#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int index = 0;

    for (int i = 0, j = n - 1; i < j; i++, j--)
    {
        // printf("%d ", a[i]);
        if (a[i] == a[j])
        {
            index++;
        }
        else
        {
            index *= -9999;
        }
    }

    if (index > 1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}