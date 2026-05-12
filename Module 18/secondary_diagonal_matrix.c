#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    int a[r][c];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    bool is_diagonal = true;

    if (r == c)
    {
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (i + j == r - 1)
                {
                    // we are now at diagoanl
                    if (a[i][j] > 0 || a[i][j] < 0)
                    {
                    }
                }
                else
                {
                    // we are now at outside diagonal
                    if (a[i][j] != 0)
                    {
                        is_diagonal = false;
                        printf("Not secondary Diagoanl Matrix\n");
                    }
                }
            }
        }

        if (is_diagonal == true)
        {
            printf("This is a secondary Diagonal Matrix\n");
        }
    }
    else
    {
        printf("This is not a secondary diagoanl matrix\n");
    }
    return 0;
}