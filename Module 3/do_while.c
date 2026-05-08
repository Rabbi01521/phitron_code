#include <stdio.h>

int main()
{

    // do-while loop
    // do-while loop always execute at least one time because condition check after the loop body.
    int i = 1;
    do
    {
        printf("%d\n", i);
        i += 2;
    } while (i <= 10);
}