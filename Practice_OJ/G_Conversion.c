#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s[1000005];
    scanf("%s", &s);

    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] == ',')
        {
            s[i] = ' ';
        }
        else if (s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] = s[i] - 32;
        }
        else if (s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] = s[i] + 32;
        }
    }

    printf("%s", s);
    return 0;
}