#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    int s;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    scanf("%d", &s);

    int index = -1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == s)
        {
            index = i;
            break;
        }
    }

    printf("%d", index);
    return 0;
}