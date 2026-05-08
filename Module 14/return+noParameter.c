#include <stdio.h>
#include <stdlib.h>

int sum()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d %d\n", a, b);
    int ans = a + b;
    return ans;
}

int main()
{

    int ans = sum();
    printf("%d", ans);
    return 0;
}