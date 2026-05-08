#include <stdio.h>
#include <stdlib.h>

int main()
{
    char f1[100], s1[100];
    char f2[100], s2[100];

    scanf("%s %s", f1, s1);
    scanf("%s %s", f2, s2);

    int same = strcmp(s1, s2);
    // printf("%d", same);
    if (same == 0)
    {
        printf("ARE Brothers");
    }
    else
    {
        printf("NOT");
    }

    // printf("%s %s\n", f1, s1);
    // printf("%s %s", f2, s2);
    return 0;
}