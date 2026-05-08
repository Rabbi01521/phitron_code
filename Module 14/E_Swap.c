#include <stdio.h>
#include <stdlib.h>

void swapFun(int x, int y)
{
    int temp = x;
    x = y;
    y = temp;
    printf("%d %d\n", x, y);
}

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    swapFun(x, y);
    return 0;
}