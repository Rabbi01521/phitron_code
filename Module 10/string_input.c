#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s[10];
    scanf("%s", &s);
    printf("%s\n", s);
    printf("%c\n", s[3]);
    printf("%d\n", s[5]); // null = 0 ascii value s[4] is the last value of the string so s[5] = null this is fixed, and after that value s[6] to s[9] = are store garbage value.
    // gets() --> space thakle use kora hy.
    // fgets() --> space thakle use kora hy.
    return 0;
}