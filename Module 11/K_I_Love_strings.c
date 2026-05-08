#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        char s[51], t[51];
        scanf("%s %s", s, t);
        int len_s = strlen(s);
        int len_t = strlen(t);
        int i;
        for (i = 0; i < len_s && i < len_t; i++)
        {
            printf("%c%c", s[i], t[i]);
        }

        // int i = 0, j = 0;

        // while (i < len_s && j < len_t)
        // {
        //     printf("%c%c", s[i], t[j]);
        //     i++;
        //     j++;
        // }

        // while (i < len_s)
        // {
        //     printf("%c", s[i]);
        //     i++;
        // }

        // while (j < len_t)
        // {
        //     printf("%c", t[i]);
        //     j++;
        // }

        if (i < len_s)
        {
            for (; i < len_s; i++)
            {
                printf("%c", s[i]);
            }
        }

        if (i < len_t)
        {
            for (; i < len_t; i++)
            {
                printf("%c", t[i]);
            }
        }

        printf("\n");
    }

    return 0;
}