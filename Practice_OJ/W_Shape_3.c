#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int star = 1;
    int space = n - 1;
    for (int i = 0; i < n; i++)
    {
        for (int i = 0; i < space; i++)
        {
            printf(" ");
        }
        for (int i = 0; i < star; i++)
        {
            printf("*");
        }
        printf("\n");
        star += 2;
        space--;
    }

    star = 2*n-1;
    space = 0;
    for (int i = 0; i < n; i++)
    {
        for (int i = 0; i < space; i++)
        {
            printf(" ");
        }
        for (int i = 0; i < star; i++)
        {
            printf("*");
        }
        printf("\n");
        star -= 2;
        space++;
    }
    return 0;
}