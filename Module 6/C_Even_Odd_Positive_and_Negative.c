#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, x;
    scanf("%d", &n);
    int countEven = 0;
    int countOdd = 0;
    int countPositive = 0;
    int countNegative = 0;
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &x);
        if (x % 2 == 0)
        {
            countEven++;
        }
        else
        {
            countOdd++;
        }

        if (x > 0)
        {
            countPositive++;
        }
        else if (x < 0)
        {
            countNegative++;
        }
    }
    printf("Even: %d\n", countEven);
    printf("Odd: %d\n", countOdd);
    printf("Positive: %d\n", countPositive);
    printf("Negative: %d\n", countNegative);
    return 0;
}