#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int num = n * 4;
    for (int j = 1; j <= num; j++)
    {
        if (j % 4 == 0)
        {
            printf("PUM\n");
            continue;
        }
        printf("%d ", j);
    }
    return 0;
}