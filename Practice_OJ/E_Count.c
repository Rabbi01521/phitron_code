#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s[1000005];
    scanf("%s", &s);

    int sum = 0;

    for (int i = 0; i < strlen(s); i++)
    {
        sum += s[i] - '0';
    }

    printf("%d\n", sum);
    return 0;
}