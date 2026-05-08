#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, star;
    scanf("%d", &n);
    star = n;
    int space = 0;

    for (int i = 1; i <= n; i++)
    {
        for (int i = 1; i <= space; i++)
        {
            printf(" ");
        }

        for (int j = 1; j <= star; j++)
        {
            printf("*");
        }
        printf("\n");
        star -= 2;
        space++;
    }
    return 0;
}