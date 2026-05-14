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

    int freq[n];
    for (int i = 0; i < n; i++)
    {
        freq[i] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = n - 1; j >= 0; j--)
        {
            freq[i] = a[i];
            freq[i + 1] = a[j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", freq[i]);
    }

    return 0;
}