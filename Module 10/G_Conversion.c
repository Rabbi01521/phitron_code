#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char s[100001];

    scanf("%s", s);

    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] == ',')
        {
            s[i] = ' ';
        }
        else if (s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] -= 32; // small --> capital
        }
        else if (s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] += 32; // capital --> small
        }
    }
    printf("%s", s);

    return 0;
}