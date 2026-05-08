#include <stdio.h>
#include <stdlib.h>

int main()
{

    double n;
    scanf("%lf", &n);

    int x = n;
    if (x == n)
    {
        printf("int %d ", x);
    }
    else
    {
        printf("float %d %lf", x, n - x);
    }

    // int integral = n;
    // double fraction = n - integral;

    // if (integral == n)
    // {
    //     printf("int %d ", integral);
    // }
    // else
    // {
    //     printf("float %d %lf", integral, fraction);
    // }
    return 0;
}