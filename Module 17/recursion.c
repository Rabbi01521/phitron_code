#include <stdio.h>
#include <stdlib.h>

// call stack strategy

// void hello() // je function nijei nijeke call kore take bola hy recursive funcion.
// {
//     printf("Hello\n");
//     hello(); // recursion
// }
// and whole process ta holo recursion.

// if this function called every time like infinte loop, at the end stack overflowed and this is called stack overflow.

int main()
{
    printf("Hi\n");
    hello();
    return 0;
}