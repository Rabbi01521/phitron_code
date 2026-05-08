#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[25], b[25];
    scanf("%s %s", &a, &b);

    // printf("%s %s", a, b);

    int val = strcmp(a, b);

    if (val > 0)
    {
        printf("%s\n", b);
    }
    else if (val == 0)
    {
        printf("%s\n", a);
    }
    else if (val < 0)
    {
        printf("%s\n", a);
    }

    // printf("%d", val);

    // int i = 0;
    // while (1)
    // {
    //     if (a[i] == '\0' && b[i] == '\0')
    //     {
    //         // printf("Equal");
    //         printf("%s\n", a);
    //         break;
    //     }
    //     else if (a[i] == '\0')
    //     {
    //         // printf("A is Smaller");
    //         printf("%s\n", a);
    //         break;
    //     }
    //     else if (b[i] == '\0')
    //     {
    //         // printf("B is Smaller");
    //         printf("%s\n", b);
    //         break;
    //     }
    //     else if (a[i] == b[i])
    //     {
    //         i++;
    //     }
    //     else if (a[i] > b[i])
    //     {
    //         // printf("B is Smaller");
    //         printf("%s\n", b);
    //         break;
    //     }
    //     else if (a[i] < b[i])
    //     {
    //         // printf("A is Smaller");
    //         printf("%s\n", a);
    //         break;
    //     }
    // }

    return 0;
}