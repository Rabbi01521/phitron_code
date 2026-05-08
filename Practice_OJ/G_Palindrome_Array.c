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

    int count = 0;

    for (int i = 0, j = n - 1; i < j; i++, j--)
    {
        if (a[i] == a[j])
        {
            count++;
        }
        else
        {
            count *= -9999;
        }
    }

    if (count > 1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    // printf("%d ", count);
    return 0;
}