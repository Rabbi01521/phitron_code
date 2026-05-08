#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char s[101];
    scanf("%s", &s);

    // int count = 0;

    // for (int i = 0; s[i] != '\0'; i++)
    // {
    //     count++;
    // }
    // printf("%d", count);

    int size = strlen(s);

    printf("%d", size);

    return 0;
}