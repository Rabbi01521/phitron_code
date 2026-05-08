#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[5] = {10, 20, 30, 40, 50};
    // printf("Array er 0th index er address:  %p\n", &a[0]);
    // printf("Array er nam: %p\n", a);
    // // printf("%d\n", *a); // 10
    // // printf("%p\n", &a[1]);
    // // printf("%p\n", &a[2]);
    // // printf("%p\n", &a[3]);
    // // printf("%p\n", &a[4]);

    *(a+2) = 100;
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}