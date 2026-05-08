#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 10;
    int b = 20;

    int temp = a;
    a = b;
    b = temp;
    printf("%d\n%d", a, b);
    return 0;
}