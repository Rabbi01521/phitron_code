#include <stdio.h>
#include <stdlib.h>

void fun(int x)
{
    x = 20;
    printf("Fun Function er x er address %p\n", &x);
}

int main()
{
    int x = 10;
    fun(x);
    // printf("%d", x);
    printf("Main Function er x er address %p\n", &x);
    return 0;
}