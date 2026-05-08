#include <stdio.h>
#include <stdlib.h>

void sum(int a, int b)
{
    int ans = a + b;
    // return; // eita just break er moto function theke ber hoia jabe... nicher printf ar kaj korbe na ,,,,
    printf("%d", ans);
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    sum(a, b);

    return 0;
}