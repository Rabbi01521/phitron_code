#include <stdio.h>
#include <stdlib.h>

void digit_of_the_number(int n)
{
    if (n == 0)
    {
        return;
    }

    digit_of_the_number(n / 10);
    int last_digit = n % 10;
    printf("%d ", last_digit);
}

int main()
{
    int n, t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d", &n);
        if (n == 0)
        {
            printf("0");
        }
        digit_of_the_number(n);
        printf("\n");
    }
    return 0;
}