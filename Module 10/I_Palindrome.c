#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char s[1001];
    scanf("%s", s);

    int flag = 1;
    for (int i = 0, j = strlen(s) - 1; i < j; i++, j--)
    {
        if (s[i] != s[j])
        {
            flag = 0;
        }
        else
        {
            flag = 1;
        }
    }

    printf(flag ? "YES" : "NO");
    return 0;
}