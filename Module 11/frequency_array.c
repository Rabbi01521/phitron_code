#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    // every element have how many frequency
    //  every element er frequency koto gula ache

    // 0 -> 2
    // 1 -> 3
    // 2 -> 3
    // 3 -> 1
    // 4 -> 0
    // 5 -> 1

    int n;
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int fre[6] = {0};

    for (int i = 0; i < n; i++)
    {
        int val = a[i];
        fre[val]++;
    }

    for (int i = 0; i < 6; i++)
    {
        printf("%d -> %d\n", i, fre[i]);
    }

    return 0;
}