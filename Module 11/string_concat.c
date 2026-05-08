#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    // a = cat
    // b = bat
    // c = a + b  --> concat means + kora.
    // c = catbat

    char a[101], b[101];
    scanf("%s %s", a, b);

    // int len_a = strlen(a);
    // int len_b = strlen(b);

    // for (int i = 0; i <= len_b; i++) // eita apple er null soho
    // {
    //     a[i + len_a] = b[i];
    // }

    // strcat(a, b); // build in function for concat.
    strcat(b, a); // build in function for concat.

    printf("%s %s", a, b);

    // Lexicographical Comparison

    return 0;
}