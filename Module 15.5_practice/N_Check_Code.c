#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    char s[a + b + 1];
    scanf("%s", &s);
    int len = a + b + 1;
    int flag = 1;
    // printf("%d %d\n%s", a , b, s);

    for (int i = 0; i < len; i++)
    {
        if (i == a)
        {
            if (s[i] != '-')
            {
                flag = 0;
            }
        }
        else
        {
            if (s[i] < '0' || s[i] > '9')
                flag = 0;
        }
    }

    // printf("%d", flag);
    if (flag == 1)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }

    return 0;
}