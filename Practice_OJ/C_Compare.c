#include <stdio.h>
#include <stdlib.h>

int main()
{
    char x[21], y[21];
    scanf("%s %s", &x, &y);

    int val = strcmp(x, y);

    if (val <= 0)
    {
        printf("%s", x);
    }
    else
    {
        printf("%s", y);
    }

    // printf("%s %s ", x, y);
    return 0;
}