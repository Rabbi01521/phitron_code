#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, star, space;
    scanf("%d", &n);
    space = n - 1;
    star = 1;

    for (int i = 0; i < n; i++)
    {

        for (int i = 0; i < space; i++)
        {
            printf(" ");
        }

        for (int j = 1; j <= star; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
        star += 1;
        space--;
    }
    return 0;
}