#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int space = n - 1;
    int num = 1;

    if (n == 1)
    {
        printf("%d", num);
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            for (int i = 0; i < space; i++)
            {
                printf(" ");
            }
            for (int j = num; j >= 1; j--)
            {
                printf("%d", j);
            }
            printf("\n");

            num++;
            space--;
        }
    }

    return 0;
}