#include <stdio.h>
#include <stdlib.h>

int main()
{
    // ++i -> pre increment
    // i++ -> post increment
    // int x = 10;
    // int y = x++;
    // int z = ++y;
    // printf("%d %d %d", x, y, z++); // z =11

    int x = 10;
    ++x;
    printf("%d", ++x);

    return 0;
}