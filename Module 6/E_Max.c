#include <stdio.h>
#include <stdlib.h>
#include <limits.h> // this is used for INT_MIN and INT_MAX

int main()
{
    int n, x;
    int max = INT_MIN; // this int_min have store smallest value and this is use for maximum value
    int min = INT_MAX; // this int_max have store largest value int and this is use for minimum value
    // printf("%d\n", max); // the value is -2147483648
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &x);

        if (x > max) // maximum value
        {
            max = x;
        }

        if (x < min) // minimum value
        {
            min = x;
        }
    }
    printf("%d\n", min);
    printf("%d", max);

    return 0;
}