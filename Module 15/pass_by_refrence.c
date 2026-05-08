#include <stdio.h>
#include <stdlib.h>

void fun(int* p)
{
    *p = 20;
    // printf("Fun Function er x er address %p\n", &p);
}

int main()
{
    int x = 10;
    fun(&x);
    printf("%d\n", x);
    // printf("Main Function er x er address %p\n", &x);
    return 0;
}