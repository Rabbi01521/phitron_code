#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        char s[105];
        scanf("%s", &s);

        if (strlen(s) < 10)
        {
            printf("%s\n", s);
        }
        else
        {
            int len = strlen(s) - 2;
            char last_digit = s[strlen(s) - 1];
            printf("%c%d%c\n", s[0], len, last_digit);
        }
    }

    return 0;
}