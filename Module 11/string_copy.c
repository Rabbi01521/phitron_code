#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char a[101], b[101];

    scanf("%s %s", &a, &b);
    // printf("%s %s\n", a, b);

    // for (int i = 0; i <= strlen(b); i++) // eita apple er null soho
    // {
    //     a[i] = b[i];
    // }

    strcpy(a, b); // build in function for copy one array to another array. here a[] te b[] er array copy hobe..

    printf("%s %s", a, b);

    return 0;
}