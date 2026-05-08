#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, star = 1;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int i = 1; i <= star; i++)
        {
            printf("* ");
        }
        printf("\n");
        star++;
    }

    // for (int i = 1; i <= 5; i+=2) // printing lines
    // {
    //     for (int j = 1; j <= i; j++) //for printing star
    //     {
    //         printf("*");
    //     }
    //     printf("\n");
    // }

    return 0;
}