#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 10;
    // data_type *
    printf("%d\n", x);
    printf("%p\n", &x); // %p address print korbe

    int *ptr;
    ptr = &x;
    printf("%p\n", ptr);
    printf("%p\n", &ptr);
    *ptr = 200;
    printf("%d\n", *ptr);

    return 0;
}