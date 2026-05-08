#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char a[101], b[101];
    scanf("%s %s", &a, &b);

    // main function for compare
    // int i = 0;
    // while (1)
    // {
    //     if (a[i] == '\0' && b[i] == '\0')
    //     {
    //         printf("Equal");
    //         break;
    //     }
    //     else if (a[i] == '\0')
    //     {
    //         printf("A is smaller");
    //         break;
    //     }
    //     else if (b[i] == '\0')
    //     {
    //         printf("B is smaller");
    //         break;
    //     }
    //     else if (a[i] == b[i])
    //     {
    //         i++;
    //     }
    //     else if (a[i] > b[i])
    //     {
    //         printf("B is Smaller");
    //         break;
    //     }
    //     else if (a[i] < b[i])
    //     {
    //         printf("A is Smaller");
    //         break;
    //     }
    // }

    // build in function for compare
    int val = strcmp(a, b); // this strcmp() function give int value. if -1 a is small,if 0 then equal,and if 1 print then b small.

    if (val < 0)
    {
        printf("A is Small"); // negative hole
    }
    else if (val > 0)
    {
        printf("B is Small"); // positive hole
    }
    else if (val == 0)
    {
        printf("Equal"); // equal hole
    }

    return 0;
}