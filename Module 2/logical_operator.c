#include <stdio.h>

int main()
{
    // && Logical AND
    // || Logical OR
    // ! Logical NOT

    int a = 5;
    int b = 10;

    if (a > 0 && b > 0)
    {
        printf("Both a and b are positive.\n");
    }

    if (a > 0 || b > 0)
    {
        printf("At least one of a or b is positive.\n");
    }

    if (!(a < 0))
    {
        printf("a is not negative.\n");
    }
    return 0;
}