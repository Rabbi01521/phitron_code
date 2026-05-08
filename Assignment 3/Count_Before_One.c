#include <stdio.h>
#include <stdlib.h>

int count_before_one(int n, int a[])
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 1)
        {
            break;
        }
        else
        {
            count++;
        }
    }

    return count;
}

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    int totalCountOne = count_before_one(n, a);
    printf("%d\n", totalCountOne);
    return 0;
}