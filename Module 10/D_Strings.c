#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char a[11], b[11];
    // char s[22];
    scanf("%s\n%s", a, b);

    printf("%d %d\n", strlen(a), strlen(b));

    // for (int i = 0; i < strlen(a); i++)
    // {
    //     s[i] = a[i];
    // }

    // for (int i = 0; i < strlen(b); i++)
    // {
    //     s[i + strlen(a)] = b[i];
    // }

    printf("%s%s\n", a, b);

    int temp = a[0];
    a[0] = b[0];
    b[0] = temp;

    printf("%s %s", a, b);
    return 0;
}