#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

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
        int temp = a[i];
        while (temp % 2 == 0)
        {
            temp = temp / 2;
            freq[i]++;
        }
    }

    int min = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        // printf("%d ", freq[i]);
        if (freq[i] < min)
        {
            min = freq[i];
        }
    }

    printf("%d\n", min);

    return 0;
}