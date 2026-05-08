#include <stdio.h>

int main()
{
    int num;

    scanf("%d", &num);

    if (num < 0)
    {
        printf("Enter a positive number");
        return 0;
    }
    else if (num % 2 == 0)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }

    return 0;
}