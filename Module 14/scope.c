#include <stdio.h>
#include <stdlib.h>

int x = 10; // global variable

int sum()
{
    printf("From Sum --> %d\n", x);
}

int main()
{
    printf("From main --> %d\n", x);
    sum();
    return 0;
}