#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int star = 65;

    for (int i = 0; i < n; i++)
    {
        for (int j = 65; j <= star; j++)
        {
            printf("%c ", j);
        }
        printf("\n");
        star++;
    }

    printf("\n");
    // 
    star = 65;

    for (int i = 0; i < n; i++)
    {
        for (int j = 65; j <= star; j++)
        {
            printf("%c ", star);
        }
        printf("\n");
        star++;
    }

    return 0;
}