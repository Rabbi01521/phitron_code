#include <stdio.h>
#include <stdlib.h>

// call stack strategy

void mello()
{
    printf("Mello\n");
}

void gello()
{
    printf("Gello\n");
    mello();
}

void hello()
{
    printf("Hello\n");
    gello();
}

int main()
{
    printf("Hi\n");
    hello();
    return 0;
}