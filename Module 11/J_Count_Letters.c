#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    // char s[10000001]; this is for submit code in code forces
    char s[26];

    scanf("%s", &s);

    int fre[26] = {0};

    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            int val = s[i] - 'a';
            fre[val]++;
        }
    }

    for (int i = 0; i < 26; i++)
    {
        if (fre[i] > 0)
        {
            printf("%c : %d\n", 'a' + i, fre[i]);
        }
    }

    return 0;
}