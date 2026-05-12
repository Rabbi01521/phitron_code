#include <stdio.h>
#include <stdlib.h>

void hello(int i)
{
    if (i == 0)
    {
        return;
    }
    printf("%d\n", i); // print: 5 4 3 2 1
    hello(i - 1);
    printf("%d\n", i); // print : 1 2 3 4 5
}

int main()
{
    int i = 5;
    hello(i);
    return 0;
}