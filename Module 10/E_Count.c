#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char s[1000001];
    scanf("%s", &s);

    int length = strlen(s);
    int total = 0;
    // for (int i = 0; s[i] != '\0'; i++)
    for (int i = 0; i < length; i++)
    {
        s[i] = s[i] - 48;
        total += s[i];
    }

    printf("%d\n", total);
    return 0;
}