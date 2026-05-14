#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[5][5];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    int x = 1;
    int row, col;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (a[i][j] == x)
            {
                row = i;
                col = j;
            }
        }
    }

    int move_to_center = abs(row - 2) + abs(col - 2);

    printf("%d", move_to_center);
    return 0;
}